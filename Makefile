SRCS += main.c
SRCS += temp_function.c
APPNAME += main

all:
	gcc $(SRCS) -o $(APPNAME)

debug:
	gcc $(SRCS) -o $(APPNAME) -DDEBUG

clean:
	rm -f *.o $(APPNAME)