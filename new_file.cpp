#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#define startNum 10
#define endNum 12
#define isRunTheCode false 
using namespace std;
//actually i can use only one part of code to achieve its function but i am just too lazy to change it 

int main()
{
    char name[11] = "list_n.txt";

    if (!isRunTheCode)
    {
        return 0;
    }

    for (int i = startNum; i <= endNum; i++)
    {
        if (i < 10)
        {
            //only one digit of number 
            name[5] = 48 + i;
            FILE *fp = fopen(name, "w");
        }
        else
        {
            //_sleep(5);        
            int tmp_num = i;
            int num_digit=1;
            while(tmp_num=tmp_num/10,tmp_num)
            {
                //judge the digit of i
                num_digit++;
                
            }
            tmp_num = i;
            char name[10+num_digit];
            name[0]='l';
            name[1]='i';
            name[2]='s';
            name[3]='t';
            name[4]='_';
            int tmp_num_digit=num_digit;


            for(int j=0;j<num_digit;j++)
            {
                
                int a= (int) pow(10,tmp_num_digit-1);
                name[5+j]=tmp_num/a+48;
                tmp_num=tmp_num-tmp_num/a*a;
                //printf("%d|",tmp_num);
                tmp_num_digit--;
            }
            name[5+num_digit]='.';
            name[6+num_digit]='t';
            name[7+num_digit]='x';
            name[8+num_digit]='t';
            name[9+num_digit]='\0';
            printf("%s\n",name);

            FILE *fp = fopen(name, "w");
            fclose(fp);
        }
    }
    return 0;
}