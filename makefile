EXENAME := main.app
ARG :=

DIRECSRC := ./src
DIRECBIN := ./bin
DIRECOBJ := ./obj

CC := g++ -std=c++14 -g#-O3 -s
CFLAGS := -Wall -Wextra

LIBS :=
INCLUDES :=

SRC := $(shell find $(DIRECSRC) -name '*.cpp')
OBJ := $(SRC:.cpp=.o)


all: clean $(EXENAME) install execute

$(EXENAME): $(OBJ)
	@echo "** Building the game"
	$(CC) -o $(DIRECSRC)/$@ $^ $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

install:
	@echo "** Installing"
	sh ./rsc/tools/create_directories.sh
	cp $(DIRECSRC)/$(EXENAME) $(DIRECBIN)
	cp $(OBJ) $(DIRECOBJ)
	chmod u+x $(DIRECBIN)/$(EXENAME)

clean:
	@echo "** Removing object files and executable"
	rm -f $(OBJ)
	rm -f $(DIRECSRC)/$(EXENAME)

execute:
	@echo "** start the game"
	$(DIRECBIN)/$(EXENAME) $(ARG)

valgrind:
	@echo "** valgrind start"
	valgrind $(DIRECBIN)/$(EXENAME) $(ARG)
