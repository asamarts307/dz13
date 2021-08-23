# pragma once

struct tmp
{
    int ye;
    int mo;
    int da;
    int ho;
    int mi;
    int tm;
};
typedef struct tmp tmp_d;


int my_main (char *name, int num);
float average_temp_month(tmp_d *first,int num_month,int c);
void print_month(int num,tmp_d*first,int c);
int min_t_month(tmp_d *first,int num_month,int c);
int max_t_month(tmp_d *first,int num_month,int c);
int min_t_year(tmp_d *first,int c);
int max_t_year(tmp_d *first,int c);
float average_temp_year(tmp_d *first,int c);
void help(const char *appname);
