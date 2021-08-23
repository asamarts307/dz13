#include "temp_function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int my_main (char *name,int num){
tmp_d *first;
char *x;
int year=0;
int month=0;
int day=0;
int hour=0;
int minute=0;
int temperature=0;
int mass[20]={0};
char y[50]={0};
int ctr_er=0;
first=malloc(10000000*sizeof(tmp_d));

 FILE *f;
 f= fopen(name,"r");
 if (f== NULL){
     printf("File empty\n");
     return 1;
 }
char *ey;
int ctr=0;
while(1)
{
        ey=fgets(y,sizeof(y),f);
         if(ey==NULL){
         if(feof(f)!=0){
         printf("Read file done\n");break;}
 else {
        printf("Error reading file\n ");break;}
}
x= strtok(y,";");
int i=0;
while(x != NULL){
    mass[i]=atoi(x);
    x=strtok(NULL,";");
    ctr_er=i;
    i++;
    
}
if (ctr_er!=5){
        printf ("%d  string format error \n",ctr+1);
        mass[0]=0;
        mass[1]=0;
        mass[2]=0;
        mass[3]=0;
        mass[4]=0;
        mass[5]=0;
}
year=mass[0];
month=mass[1];
day=mass[2];
hour=mass[3];
minute=mass[4];
temperature=mass[5];

first[ctr].ye=year;
first[ctr].mo=month;
first[ctr].da=day;
first[ctr].ho=hour;
first[ctr].mi=minute;
first[ctr].tm=temperature;
ctr++;
}
printf("%d line read\n",ctr);

if(num!=0){
      print_month(num,first,ctr); 
      return 0; 
}

print_month(1,first,ctr);
print_month(2,first,ctr);
print_month(3,first,ctr);
print_month(4,first,ctr);
print_month(5,first,ctr);
print_month(6,first,ctr);
print_month(7,first,ctr);
print_month(8,first,ctr);
print_month(9,first,ctr);
print_month(10,first,ctr);
print_month(11,first,ctr);
print_month(12,first,ctr);
printf("Avarage temperature for the year => %.2f\n",average_temp_year(first,ctr));
printf("Minimum temperature for the year => %d\n",min_t_year(first,ctr));
printf("Maximum temperature for the year => %d\n",max_t_year(first,ctr));


free(first);
fclose(f);
return 0;
}


float average_temp_month(tmp_d *first,int num_month,int c){
int ctr_m=0;
int ctr=c;
int num_m=num_month;
float aver1=0;
for(int i=0;i<ctr;i++){
        if(first[i].mo==num_m){
                aver1+=first[i].tm;
                ctr_m++;
        }}
        float average1=aver1/ctr_m;

        return average1;
}



int min_t_month(tmp_d *first,int num_month,int c){
int ctr=c;
int min=99;
int num_m=num_month;
float aver1=0;
for(int i=0;i<ctr;i++){
        if(first[i].mo==num_m){
            if(first[i].tm<min){
                min=first[i].tm;
            }       
        }
}
        return min;
}


int max_t_month(tmp_d *first,int num_month,int c){
int ctr=c;
int max=-99;
int num_m=num_month;
float aver1=0;
for(int i=0;i<ctr;i++){
        if(first[i].mo==num_m){
            if(first[i].tm>max){
                max=first[i].tm;
            }       
        }
}
        return max;
}



float average_temp_year(tmp_d *first,int c){
int ctr_m=0;
int ctr=c;
float aver1=0;
for(int i=0;i<ctr;i++){
    aver1+=first[i].tm;
    ctr_m++;
        }
    float average_year=aver1/ctr_m;

        return average_year;
}


int min_t_year(tmp_d *first,int c){
int ctr=c;
int min=99;
float aver1=0;
for(int i=0;i<ctr;i++){
   if(first[i].tm<min){
     min=first[i].tm;
      }       
        
}
        return min;
}

int max_t_year(tmp_d *first,int c){
int ctr=c;
int max=-99;
float aver1=0;
for(int i=0;i<ctr;i++){
   if(first[i].tm>max){
      max=first[i].tm;
                 
        }
}
        return max;
}



void print_month(int num,tmp_d*first,int c){
int ctr=c;
switch (num)
{
case 1:
printf("Month : January   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,1,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,1,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,1,ctr));
    break;
case 2: 
printf("Month : February   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,2,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,2,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,2,ctr));
break;
case 3:
printf("Month : March   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,3,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,3,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,3,ctr));
break;
case 4:
printf("Month : April   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,4,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,4,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,4,ctr));
break;
case 5:
printf("Month : May   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,5,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,5,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,5,ctr));
break;
case 6:
printf("Month : June   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,6,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,6,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,6,ctr));

break;
case 7:
printf("Month : July   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,7,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,7,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,7,ctr));
break;
case 8:
printf("Month : August   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,8,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,8,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,8,ctr));
break;
case 9:
printf("Month : September   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,9,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,9,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,9,ctr));
break;
case 10:
printf("Month : October   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,10,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,10,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,10,ctr));
break;
case 11:
printf("Month : November   Year: 2021 \n\
Avarage temperature => %.2f\n",average_temp_month(first,11,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,11,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,11,ctr));
break;
case 12:
printf("Month : December   Year: 2021 \n\
Avarage temperature =>  %.2f\n",average_temp_month(first,12,ctr));
printf("Minimum temperature => %d\n",min_t_month(first,12,ctr));
printf("Maximum temperature => %d\n\n",max_t_month(first,12,ctr));
break;



 default:
 break;
}}
void help(const char *appname)
{
    printf("usage: %s programm temperature statistics\n", appname);
    printf("-f path file\n-m month number\n ");

} 
