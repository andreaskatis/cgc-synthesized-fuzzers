
.PHONY: black grey lex

all:
	@echo "Usage: make [black|grey]"

black:
	cd high-level/black; make
	cp high-level/black/sender.py .
	cp relay/relay.py .

grey:
	cd high-level/grey; make
	cp high-level/grey/sender.py .
	cp relay/relay.py .

lex:
	@echo "Usage: make [black|grey]"

clean:
	$(RM) -rf lib/*.so
