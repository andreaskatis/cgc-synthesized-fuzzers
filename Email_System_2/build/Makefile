all: lib_Email_System_2.so
	cp lib_Email_System_2.so ../lib/.
        cp sender.py ../bin/.
        cp relay.py ../bin/.

lib_Email_System_2.so: email_system_2.c wrapper.c
	$(CC) -fPIC -shared -o lib_Email_System_2.so email_system_2.c wrapper.c

clean:
	$(RM) -rf lib_Email_System_2.so
