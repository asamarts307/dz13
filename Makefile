SRCS += main.c
SRCS += temp_function.c
APPNAME += main

all:
	gcc $(SRCS) -o $(APPNAME)
clean:
	rm -f *.o $(APPNAME)