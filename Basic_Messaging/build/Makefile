all: lib_Basic_Messaging.so
	cp lib_Basic_Messaging.so ../lib/.
        cp sender.py ../bin/.
        cp relay.py ../bin/.

lib_Basic_Messaging.so: basic_messaging.c wrapper.c
	$(CC) -fPIC -shared -o lib_Basic_Messaging.so basic_messaging.c wrapper.c

clean:
	$(RM) -rf lib_Basic_Messaging.so
