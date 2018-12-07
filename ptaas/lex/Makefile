
all: ptaas_r.spear ptaas.spear

ptaas_r.spear: genlexspec.py
	$(RM) -rf ptaas_r.spear
	./genlexspec.py -r > ptaas_r.spear

ptaas.spear: genlexspec.py
	$(RM) -rf ptaas.spear
	./genlexspec.py > ptaas.spear

clean:
	$(RM) -rf ptaas*.spear
