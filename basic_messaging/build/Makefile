all: lib_basic_messaging.so
	cp lib_basic_messaging.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_basic_messaging.so: basic_messaging.c wrapper.c
	$(CC) -fPIC -shared -o lib_basic_messaging.so basic_messaging.c wrapper.c

clean:
	$(RM) -rf lib_basic_messaging.so
