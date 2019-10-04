all: libptaas.so
	cp libptaas.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

libptaas.so: ptaas.c wrapper.c
	$(CC) -fPIC -shared -o libptaas.so ptaas_invalid_all.c wrapper.c

clean:
	$(RM) -rf libptaas.so
