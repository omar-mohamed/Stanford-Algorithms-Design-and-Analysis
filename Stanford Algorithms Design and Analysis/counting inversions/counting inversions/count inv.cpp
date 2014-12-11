#include<stdio.h>
#include<iostream>
using namespace std;
int merge_sort(int low,int high);
int merge(int l, int m, int h);
int arr[100000];
long long count_inv=0;
int main()
{
	  for(int i=0;i<10;i++)
	  std::cin>>arr[i];
    merge_sort(0, 10-1);
   cout<<"\ninv : "<<count_inv<<endl;

    return 0;
}

int merge_sort(int low,int high)
{

    int mid;
    if(low < high) 
    {
        mid = (low + high) / 2;
        merge_sort(low, mid); 
        merge_sort( mid + 1, high); 
        merge(low, mid, high); 
    }
    return 0;
}

int merge(int l, int m, int h)
{
  int i = l;
  int j = m + 1;
  int k = 0;
  int b[100000];
  while (i <= m && j <= h) {
     if (arr[i] <= arr[j]) {
       b[k++] = arr[i++];
     } else {
       count_inv += (m - i + 1);
       b[k++] = arr[j++];
     }
  }
  while (i <= m)
    b[k++] = arr[i++];
  while (j <= h)
    b[k++] = arr[j++];
  for (i = l, k = 0; i <= h; i++, k++) {
    arr[i] = b[k];
  }
  return 0;
}





