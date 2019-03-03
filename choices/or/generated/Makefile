
all: libor.so
	cp libor.so ../lib/.

libor.so: or.c wrapper.c
	$(CC) -fPIC -shared -o libor.so or.c wrapper.c

clean:
	$(RM) -rf libor.so
