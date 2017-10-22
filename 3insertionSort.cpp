#include<iostream.h>
#include<conio.h>

void i_sort(int a[10],int n)
{
   for(int i=1;i<n;i++)
   {
   int j=i;
     while(a[j]<a[j-1] && j>0 )
     {
	 int temp=a[j-1];
	 a[j-1] = a[j];
	 a[j] = temp;
	 j--;
       }

    }
    cout<<"The sorted array is "<<endl;
    for(i=0;i<n;i++)
    {
     cout<<a[i]<<"  ";
    }

}

int main()
{
  int a[10] , i,n;
  clrscr();
  cout<<"Enter the size of an array"<<endl;
  cin>>n;

  cout<<"Enter the elements of an array"<<endl;
  for(i=0;i<n;i++)
  {
     cin>>a[i];
  }
  i_sort(a,n);

  cout<<endl<<"Sandip kumar"<<endl<<"07520802715"<<endl;
  getch();
  return 0;
}
