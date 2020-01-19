
INC = include
SRC = source
BLD = build
BIN = bin

all: main.o gen_Functions.o
	cl ${BLD}\main.o ${BLD}\gen_Functions.o /Fe: ${BIN}\RPD.exe 

main.o: ${SRC}\main.cpp ${INC}\include_Master.h
	cl /c /I ${INC} ${SRC}\main.cpp /Fo: ${BLD}\main.o 

gen_Functions.o: ${SRC}\gen_Functions.cpp ${INC}\gen_Functions.h
	cl /c /I ${INC} ${SRC}\gen_Functions.cpp /Fo: ${BLD}\gen_Functions.o


.PHONY: clean

clean:
	del build\*
	del bin\*