/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
int a[3][3],b[3][3],c[3][3],i,j,k;
printf("enter the 1st matrix\n");
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  scanf("%d",&a[i][j]);
   }
   }
   printf("enter the 2nd matrix\n");
   for(i=0;i<3;i++)
   {
   for(j=0;j<3;j++)
   {
    scanf("%d",&b[i][j]);
}
}
for(i=0;i<3;i++)
{
 for(j=0;j<3;j++)
  {
  c[i][j]=0;
   for(k=0;k<3;k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
      printf("%d\t",c[i][j]);
     }
    printf("\n");
}
}
