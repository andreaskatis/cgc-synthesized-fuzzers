;-- INPUTS: in
;-- PROPERTIES: ok1, ok2, ok3, ok4
;Skolem function for fixpoint
(declare-fun $ok4$2 () Bool)
(declare-fun $out2$2 () Int)
(declare-fun _aeval_tmp_max_0 () Int)
(declare-fun $out2$~1 () Int)
(declare-fun $ok3$2 () Bool)
(declare-fun %init () Bool)
(declare-fun $in$0 () Int)
(declare-fun $ok1$2 () Bool)
(declare-fun $out1$2 () Int)
(declare-fun $out3$~1 () Int)
(declare-fun $out1$~1 () Int)
(declare-fun $ok2$2 () Bool)
(declare-fun $out3$2 () Int)

(assert (let ((a!1 (and (or %init (not (= $in$0 1))) (not %init)))
      (a!2 (ite %init
                0
                (ite (= $in$0 1) $out1$~1 (ite (= $in$0 2) 0 (+ $out1$~1 1)))))
      (a!4 (ite %init
                true
                (or (not (= $in$0 1)) (= (+ _aeval_tmp_max_0 1) $out2$~1))))
      (a!5 (= $ok4$2 (ite %init (= (+ _aeval_tmp_max_0 1) 0) true)))
      (a!7 (ite %init true (or (not (= $in$0 1)) (= 0 $out2$~1)))))
(let ((a!3 (= $out3$2 (ite (= $in$0 1) $out3$~1 (+ a!2 (+ _aeval_tmp_max_0 1)))))
      (a!6 (and (= $ok1$2 true)
                (= $out1$2 a!2)
                (= $ok2$2 true)
                (= $out3$2 (ite (= $in$0 1) $out3$~1 (+ a!2 $out2$~1)))
                (= $out2$2 $out2$~1)
                (= $ok3$2 true)
                (= $ok4$2 (ite %init (= $out2$~1 0) true))))
      (a!8 (and (= $ok1$2 true)
                (= $out1$2 a!2)
                (= $ok2$2 true)
                (= $out3$2 (ite (= $in$0 1) $out3$~1 (+ a!2 0)))
                (= $out2$2 0)
                (= $ok3$2 a!7)
                (= $ok4$2 (ite %init (= 0 0) true)))))
(let ((a!9 (ite (or %init (not (= $in$0 1)) (= $out2$~1 0)) a!8 true)))
(let ((a!10 (ite a!1
                 (and (= $ok1$2 true)
                      (= $out1$2 a!2)
                      (= $ok2$2 true)
                      a!3
                      (= $out2$2 (+ _aeval_tmp_max_0 1))
                      (= $ok3$2 a!4)
                      a!5)
                 (ite (or (not %init) (= $out2$~1 0)) a!6 a!9))))
  (and (= _aeval_tmp_max_0 (ite (< 0 $out2$~1) $out2$~1 0)) a!10))))))

