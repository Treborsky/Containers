BIN=out

out: main.cc
	g++ -o out main.cc

.PHONY: clean

clean:
	rm $(BIN)
