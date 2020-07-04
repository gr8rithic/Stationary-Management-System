#include<stdio.h>
#include<string.h>
int main()
{
int b,A,Pc,Pe,BW,AW,i,j,a,PeW,PcW;
char ch[10];
FILE *fc;
fc=fopen("project.txt","w");
fprintf(fc,"The number of books,A4sheets,Pencils,pens");
printf("The number of books,A4sheets,Pencils,pens");
scanf("%d%d%d%d",&b,&A,&Pc,&Pe);
fprintf(fc,"%d %d %d %d",b,A,Pc,Pe);
fprintf(fc,"Enter the name of the person withdrawing the items");
printf("Enter the name of the person withdrawing the items");
for(j=0;j<10;j++)
{
scanf("%s", ch[j]);
}
for(j=0;j<10;j++)
{
fprintf(fc,"%s",ch[j]);
}
for(j=0;j<10;j++)
{
printf("%d",ch[j]);
}
printf("\n\aPress 1 to withdraw books\n\aPress 2 to withdraw  A4Sheets\n\aPress 3 to withdraw  Pencil\n\aPress 4 to withdraw Pens ");

scanf("%d",&a);
switch(a)

{
 case 1:printf("Enter the number of Books withdrawn");
        scanf("%d",&BW);
        for(i=1;i<=BW;i++)
        { 
          b--;
        }
        if(b<=0)
       {           
        printf("The books can be withdrawn later, because no stocks is there at present");
       }
        else
        {
          printf("The books can be withdrawn and the total number of stocks is/are %d", b);
        }
          break;

case 2: printf("Enter the number of A4sheets to be withdrawn");
        scanf("%d",&AW);
        for(i=1;i<=AW;i++)
        {
         A--;
        }
         if(A<=0)
        {
         printf("The A4sheets can be withdrawn later, ecause no stocks is present");
        }
        else
        {
         printf("THe A4sheets can be withdrawn and the number of pieces left is/are %d",A);
        }
        break;
case 3:printf("Enter the numbers of pencils withdrawn");
       scanf("%d",&PcW);
       for(i=1;i<PcW;i++)
       {
        Pc--;
       }
       if(Pc<0)
       {
         printf("The pencils can be withdrawn later, because no stocks is there at present");
       }
       else
       {
         printf("The pencils can be withdrawn and the number of pieces left is/are %d",Pc);
      }
       break;
case 4:printf("Enter the number of sheets to be withdrawn");
       scanf("%d",&PeW);
      for(i=1;i<=PeW;i++)
      {
       Pe--;
      }
       if(Pe<=0)
       {
          printf("The pens can be withdrawn later,because no stocks is there at present");
       }
      else
       {      
         printf("The pens can be withdrawn and the number of pieces left is/are %d",Pc);
       }
       break;
default : printf("Enter any valid choices from 1 to 4");
         break;
}
fclose(fc);
return 0;
}
        

         
       
