
all: liblittle.so
	cp liblittle.so ../lib/.

liblittle.so: little.c wrapper.c
	$(CC) -fPIC -shared -o liblittle.so little.c wrapper.c

clean:
	$(RM) -rf liblittle.so
