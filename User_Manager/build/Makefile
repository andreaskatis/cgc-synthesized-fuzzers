all: lib_User_Manager.so
	cp lib_User_Manager.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_User_Manager.so: User_Manager.c wrapper.c
	$(CC) -fPIC -shared -o lib_User_Manager.so User_Manager.c wrapper.c

clean:
	$(RM) -rf lib_User_Manager.so
