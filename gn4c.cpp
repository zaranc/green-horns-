#include<stdio.h>

main()
{
   float BS,HRA,DA,TA,GS;
   printf("enter your base salary:\n");
   scanf("%f",&BS);
     printf("enter your HRA:\n");
   scanf("%f",&HRA);
     printf("enter your DA:\n");
   scanf("%f",&DA);
        printf("enter your TA:\n");
   scanf("%f",&TA);
     
   HRA=HRA*BS/100;
   DA =DA*BS/100;
   TA =TA*BS/100;
   
   GS=BS+HRA+DA+TA;
   printf("your gross salary:%.2f",GS);
   
}
