
.PHONY: stop

all: stop

stop:
	cd generated; make
	cp stop/sender.py bin/.

clean:
	$(RM) -rf lib/*.so bin/*.py
