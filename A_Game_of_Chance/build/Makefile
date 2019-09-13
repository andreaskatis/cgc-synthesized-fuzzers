all: lib_A_Game_of_Chance.so
	cp lib_A_Game_of_Chance.so ../lib/.
	cp sender.py ../bin/.
	cp relay.py ../bin/.

lib_A_Game_of_Chance.so: agameofchance.c wrapper.c
	$(CC) -fPIC -shared -o lib_A_Game_of_Chance.so agameofchance.c wrapper.c

clean:
	$(RM) -rf lib_A_Game_of_Chance.so
