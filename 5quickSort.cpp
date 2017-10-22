#include<iostream>
using namespace std;

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void q_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        q_sort(arr, low, pi - 1);
        q_sort(arr, pi + 1, high);
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
  q_sort(a,0,n);

  cout<<"The sorted array is "<<endl;
    for(int i=0;i<n;i++)
    {
     cout<<a[i]<<"  ";
    }
  cout<<endl<<"SAndip kumar"<<endl<<"07520802715"<<endl<<endl;
  return 0;
}

