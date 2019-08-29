all: lib_Pizza_Ordering_System.so
	cp lib_Pizza_Ordering_System.so ../lib/.
        cp sender.py ../bin/.
        cp relay.py ../bin/.

lib_Pizza_Ordering_System.so: pizza_ordering_system.c wrapper.c
	$(CC) -fPIC -shared -o lib_Pizza_Ordering_System.so pizza_ordering_system.c wrapper.c

clean:
	$(RM) -rf lib_Pizza_Ordering_System.so
