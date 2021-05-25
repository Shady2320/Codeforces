#include<stdio.h>
#include<string.h>
int main()
{
 int i,j;
 float salary,bonus;
 char gender;
 printf("Enter M for Male and F for Female\n");
 scanf("%c",&gender);
 printf("Enter Salary\n");
 scanf("%f",&salary);
 if(gender=='M' || gender=='m')
 {
  if(salary>10000)
  bonus=(float)(salary*0.05);//0.05--5%
  else
  bonus=(float)(salary*0.07);
 }
 if(gender=='F' || gender=='f')
 {
  if(salary>10000)
  bonus=(float)(salary*0.1);//0.1--10%
  else
  bonus=(float)(salary*0.12);
 }
 salary+=bonus;
 printf("Bonus=%.2f\nSalary=%.2f\n",bonus,salary);
}