#include<iostream.h>
#include<conio.h>
int binarysearch(int a[] ,int start ,int end  ,int  num )
{
   int mid = start + ((end -start)/2);
   if(a[mid]==num)
   {
     cout<<"The value is at index ";
     return (mid+1);
   }
   if(a[mid]<num)
   {
      return binarysearch(a,(mid+1),end,num);
   }
   else if(a[mid]>num)
   {
      return binarysearch(a , start , (mid-1) , num);
   }


}

int main()
{
int n , a[10] , num ;
clrscr();
cout<<"Enter the size of arrays "<<endl;
cin>>n;
cout<<"Enter the elements "<<endl;

for(int i=0 ; i<n ; i++)
{
   cin>>a[i];
}
cout<<"Enter the number you want to search "<<endl;
cin>>num;

cout<<binarysearch(a,0,(n-1),num);
cout<<endl<<"sandip kumar"<<endl<<"07520802715";

getch();
return 0;
}
