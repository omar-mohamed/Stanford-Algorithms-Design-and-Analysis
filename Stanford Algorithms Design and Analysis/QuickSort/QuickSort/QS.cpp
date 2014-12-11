#include<iostream>
#include<algorithm>

int arr[10005];
int Quick_sort(int left,int right);
int Partition(int left,int right);
void choose_pivot(int left,int right);
long long count=0;
int main()
{
	int n;
	while(std::cin>>n)
	{
		for(int i=0;i<n;i++)
			std::cin>>arr[i];
		std::cout<<"count :"<<Quick_sort(0,n-1)<<std::endl;
		std::cout<<std::endl;
		count=0;
	}
	return 0;
}

int Quick_sort(int left,int right)
{
	if(left<right)
	{
		int index=Partition(left,right);
		count+=(right-left);
        Quick_sort( left, index-1 );
        Quick_sort( index+1, right);
	}
	return count;
}


int Partition(int left,int right)
{
	choose_pivot(left,right);
	int p=arr[left];
	int i=left+1;
	for(int j=left+1;j<=right;j++)
	{
		if(arr[j]<p)
		{
			std::swap(arr[j],arr[i]);
			i++;
		}
	}
	std::swap(arr[left],arr[i-1]);
	return (i-1);
}

void choose_pivot(int lo,int hi)
{
    int mid = ((lo + hi)/2);
    int small, median, large;
    if (arr[lo] > arr[mid]) {
      large = lo;
      small = mid;
    } else {
      large = mid;
      small = lo;
    }
    if (arr[hi] > arr[large]) {
      median = large;
    } else if (arr[hi] < arr[small]) {
      median = small;
    } else {
      median = hi;
    }
	std::swap(arr[lo], arr[median]);

}