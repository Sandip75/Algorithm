#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                              #include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
int n , *p , a , i , j;
clrscr();
printf("Enter the number of elements \n ");
scanf("%d",&n);

p = (int*)malloc(n*sizeof(int));
if(p==NULL)
{
printf("Memory Not allocated \n");
exit(0);
}

else
{
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
printf("Enter the value you want to search \n");
scanf("%d",&a);
for(j=0;j<n;j++)
{
if((j==(n-1))&&(*(p+j)!=a))
{
printf("Value does not exit \n");

}
else if((j<n) && (*(p+j)==a))
{
printf("Element is found at location : %d \n",j+1);
free(p);
if(j<(n-1))
   continue;
else
   break;
}
}

}
getch();
return 0;
}
