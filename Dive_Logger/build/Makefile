all: lib_Dive_Logger.so
	cp lib_Dive_Logger.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_Dive_Logger.so: Dive_Logger.c wrapper.c
	$(CC) -fPIC -shared -o lib_Dive_Logger.so Dive_Logger.c wrapper.c

clean:
	$(RM) -rf lib_Dive_Logger.so
