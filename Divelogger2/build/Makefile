all: lib_Divelogger2.so
	cp lib_Divelogger2.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_Divelogger2.so: Divelogger2.c wrapper.c
	$(CC) -fPIC -shared -o lib_Divelogger2.so Divelogger2.c wrapper.c

clean:
	$(RM) -rf lib_Divelogger2.so
