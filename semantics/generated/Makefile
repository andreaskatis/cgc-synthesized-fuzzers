
all: libstop.so
	cp libstop.so ../lib/.

libstop.so: stop.c wrapper.c
	$(CC) -fPIC -shared -o libstop.so stop.c wrapper.c

clean:
	$(RM) -rf libstop.so
