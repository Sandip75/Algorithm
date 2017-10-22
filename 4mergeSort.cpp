#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void m_Sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        m_Sort(arr, l, m);
        m_Sort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
  int a[10] , i,n;
  cout<<"Enter the size of an array"<<endl;
  cin>>n;

  cout<<"Enter the elements of an array"<<endl;
  for(i=0;i<n;i++)
  {
     cin>>a[i];
  }
  m_Sort(a,0,n);
  cout<<"The sorted array is "<<endl;
   for(int i=0;i<n;i++)
    {
     cout<<a[i]<<"  ";
    }

  cout<<endl<<"SAndip kumar"<<endl<<"07520802715"<<endl<<endl;
  return 0;
}

