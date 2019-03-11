
all: libsemantics.so
	cp libsemantics.so ../lib/.

libsemantics.so: semantics.c wrapper.c
	$(CC) -fPIC -shared -o libsemantics.so semantics.c wrapper.c

clean:
	$(RM) -rf libsemantics.so
