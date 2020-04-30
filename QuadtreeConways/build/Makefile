all: lib_QuadtreeConways.so
	cp lib_QuadtreeConways.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_QuadtreeConways.so: QuadtreeConways.c wrapper.c
	$(CC) -fPIC -shared -o lib_QuadtreeConways.so QuadtreeConways.c wrapper.c

clean:
	$(RM) -rf lib_QuadtreeConways.so
