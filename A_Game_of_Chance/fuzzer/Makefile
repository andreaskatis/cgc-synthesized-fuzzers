all: libagoc.so
	cp libagoc.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

libagoc.so: agameofchance.c wrapper.c
	$(CC) -fPIC -shared -o libagoc.so agameofchance.c wrapper.c

clean:
	$(RM) -rf libagoc.so
