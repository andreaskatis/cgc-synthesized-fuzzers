all: lib_PTaaS.so
	cp lib_PTaaS.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_PTaaS.so: PTaaS.c wrapper.c
	$(CC) -fPIC -shared -o lib_PTaaS.so PTaaS.c wrapper.c

clean:
	$(RM) -rf lib_PTaaS.so
