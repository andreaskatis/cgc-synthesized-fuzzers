
.PHONY: black grey lex

all:
	@echo "Usage: make [black|grey|lex]"

black:
	cd high-level/black; make
	cp high-level/black/sender.py bin/.
	cp high-level/relay.py bin/.

grey:
	cd high-level/grey; make
	cp high-level/grey/sender.py bin/.
	cp high-level/relay.py bin/.

lex:
	@echo "Usage: make [black|grey]"

clean:
	$(RM) -rf lib/*.so bin/*.py
