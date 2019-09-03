all: lib_Quadtree_Conways.so
	cp lib_Quadtree_Conways.so ../lib/.
        cp sender.py ../bin/.
        cp relay.py ../bin/.

lib_Quadtree_Conways.so: quadtree_conways.c wrapper.c
	$(CC) -fPIC -shared -o lib_Quadtree_Conways.so quadtree_conways.c wrapper.c

clean:
	$(RM) -rf lib_Quadtree_Conways.so
