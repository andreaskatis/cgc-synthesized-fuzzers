import random

class dist():
    def __init__(self,pk,minVal=None,maxVal=None):
        """
        Initialize with an iterable (pk) containing a histogram of values
        over some uniformly divided interval of values.  Optionally
        specify the values, minVal and maxVal, at the center of the lowest
        and highest bins.  If minVal and maxVal are not provided, fuzz() and
        reproduce() will generate values in the interval [0.0,1.0).
        If they are provided, the resulting values will span the
        interval implied by minVal and maxVal.
        """
        self.size = len(pk)
        assert(self.size > 1)
        maxpk = max(pk)
        sumpk = float(sum(pk))
        assert(sumpk >= 0.0)
        self.inc  = 1.0/float(self.size)
        if 1e-6 < sumpk:
            self.pdf = [v / sumpk for v in pk]
            maxpk = maxpk / sumpk
            self.idf = [maxpk - v for v in self.pdf]
            sumidf = 1.0*sum(self.idf)
            if 1e-6 < sumidf:
                self.idf = [v / sumidf for v in self.idf]
                self.alpha = 1.0/(sumidf + 1.0)
            else:
                ## pdf is already uniform
                self.idf = [1.0/self.size for v in pk]
                self.alpha = 1.0
        else:
            self.pdf = [1.0/self.size for v in pk]
            self.idf = [1.0/self.size for v in pk]
            self.alpha = 1.0
        if not(minVal and maxVal):
            self.min = 0.0
            self.range = 1.0
        else:
            assert(minVal < maxVal)
            interval = float(maxVal - minVal)/float(self.size - 1)
            minVal = minVal - interval/2
            maxVal = maxVal + interval/2
            self.min = minVal
            self.range = maxVal - minVal
    def _sample(self,k,pdf):
        """
        Given values, k, drawn from a uniform random distribution [0.0,1.0)
        sample() will generate values whose distributions conform to pdf.
        """
        assert(0.0 <= k and k < 1.0)
        inc = self.inc
        acc = 0.0
        steps = 0.0
        for i in range(self.size):
            next = pdf[i]
            if (next > k):
                steps += (k/next)*inc
                break
            k -= next
            steps += inc
        return self.min + steps*(self.range)
    def uniform(self,k):
        return self._sample(k,self.pdf if random.random() < self.alpha else self.idf)
    def fuzz(self,k):
        return self._sample(k,self.idf)
    def reproduce(self,k):
        return self._sample(k,self.pdf)
    def fuzz_index(self,k):
        return int((self.size * self.fuzz(k)) // 1)
    def reproduce_index(self,k):
        return int((self.size * self.reproduce(k)) // 1)
    def uniform_index(self,k):
        return int((self.size * self.uniform(k)) // 1)

def test():
    pdf = (1,2,0,0,0)
    d = dist(pdf)
    base = len(pdf)
    iters = 975310*base
    hist = [0 for _ in pdf]
    for _ in range(iters):
        index = d.uniform_index(random.random())
        hist[index] += 1
    print(str(hist))
    hist = [0 for _ in pdf]
    for _ in range(iters):
        index = d.fuzz_index(random.random())
        hist[index] += 1
    print(str(hist))
    hist = [0 for _ in pdf]
    for _ in range(iters):
        index = d.reproduce_index(random.random())
        hist[index] += 1
    print(str(hist))
