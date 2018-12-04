
libptaas.so: ptaas.c wrapper.c
	$(CC) -fPIC -shared -o libptaas.so ptaas.c wrapper.c

clean:
	$(RM) -rf libptaas.so *.pyc
