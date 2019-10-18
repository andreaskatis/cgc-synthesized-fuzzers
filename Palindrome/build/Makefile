all: lib_Palindrome.so
	cp lib_Palindrome.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_Palindrome.so: Palindrome.c wrapper.c
	$(CC) -fPIC -shared -o lib_Palindrome.so Palindrome.c wrapper.c

clean:
	$(RM) -rf lib_Palindrome.so
