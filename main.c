#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include"temp_function.h"

extern char *optarg;
extern int optind, opterr, optopt;

int main(int argc, char **argv)
{
int ret=0;
int num=0;
char *name; 
if (argc == 1) {
        help(argv[0]);
        return 0;
    }
while ((ret = getopt(argc, argv, "hf:m:")) != -1) {
        switch(ret) {
            case 'h' : {
              help(argv[0]);
                return 0;
            }
            case 'm' : {
                num=atoi(optarg);
                break;
            }
            case 'f' : {
                name=optarg;   
                break;
        }}
    }
my_main (name,num);
return 0;
}

