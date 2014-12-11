//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct job
//{
//	int length;
//	int weight;
//};
//
//bool Quicksort(job j2,job j1)
//{
//	float d2=(float)j2.weight/(float)j2.length;
//	float d1=(float)j1.weight/(float)j1.length;
//	if(d2>d1)
//		return true;
//	return false;
//}
//
//int main()
//{
//	int n;
//	while(cin>>n)
//	{
//	 vector<job> jobs;
//	for(int i=0;i<n;i++)
//	{
//		job j;
//		cin>>j.weight>>j.length;
//		jobs.push_back(j);
//	}
//	sort(jobs.begin(),jobs.end(),Quicksort);
//
//	long long complete_time=0,ans=0;
//	for(int i=0;i<n;i++)
//	{
//		complete_time+=jobs[i].length;
//		ans+=jobs[i].weight*complete_time;
//	}
//	cout<<"ans is : "<<ans<<endl;
//	}
//	return 0;
//}