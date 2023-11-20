#include <stdio.h>
#include <stdlib.h>

int main()
{
    int o=1;
    int e=2;
    int l;
    int os=0;
    int es=0;

    printf("Pls enter the value of the last number:");
    scanf("%d",&l);
    while (o<=l)
    {
       os=os+o;
       o=o+2;
    }
    printf("The sum of odd numbers is:%d\n",os);
     while (e<=l)
    {
       es=es+e;
       e=e+2;
    }
    printf("The sum of even numbers is:%d",es);
    return 0;
    /*for(o=1;o<=l;o=o+2)
    os=os+o;
    printf("The sum of odd numbers is:%d\n",os);
    for(e=2;e<=l;e=e+2)
    es=es+e;
    printf("The sum of even numbers is:%d",es);
    return 0;
    */
}




