
all: input/ptaas.spear real/ptaas.spear raw/ptaas.spear

input/ptaas.spear: genlexspec.py
	$(RM) -rf input/ptaas.spear
	./genlexspec.py -i > input/ptaas.spear

real/ptaas.spear: genrealspec.py
	$(RM) -rf real/ptaas.spear
	./genrealspec.py -i > real/ptaas.spear

raw/ptaas.spear: genlexspec.py
	$(RM) -rf raw/ptaas.spear
	./genlexspec.py > raw/ptaas.spear

clean:
	$(RM) -rf input/ptaas.spear raw/ptaas.spear real/ptaas.spear

