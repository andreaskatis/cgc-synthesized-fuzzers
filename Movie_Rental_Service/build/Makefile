all: lib_Movie_Rental_Service.so
	cp lib_Movie_Rental_Service.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_Movie_Rental_Service.so: Movie_Rental_Service.c wrapper.c
	$(CC) -fPIC -shared -o lib_Movie_Rental_Service.so Movie_Rental_Service.c wrapper.c

clean:
	$(RM) -rf lib_Movie_Rental_Service.so
