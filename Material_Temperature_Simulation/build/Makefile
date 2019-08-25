all: lib_Material_Temperature_Simulation.so
	cp lib_Material_Temperature_Simulation.so ../lib/.
        cp sender.py ../bin/.
        cp relay.py ../bin/.

lib_Material_Temperature_Simulation.so: material_temperature_simulation.c wrapper.c
	$(CC) -fPIC -shared -o lib_Material_Temperature_Simulation.so material_temperature_simulation.c wrapper.c

clean:
	$(RM) -rf lib_Material_Temperature_Simulation.so
