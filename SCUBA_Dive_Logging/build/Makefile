all: lib_SCUBA_Dive_Logging.so
	cp lib_SCUBA_Dive_Logging.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_SCUBA_Dive_Logging.so: SCUBA_Dive_Logging.c wrapper.c
	$(CC) -fPIC -shared -o lib_SCUBA_Dive_Logging.so SCUBA_Dive_Logging.c wrapper.c

clean:
	$(RM) -rf lib_SCUBA_Dive_Logging.so
