//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//vector<int> answers;
//vector<int> v;
//int main()
//{
//	long long n;
//	long long ans;
//	while(cin>>n)
//	{
//		if(n==0)
//			break;
//		v.push_back(n);
//		sort(v.begin(),v.end());
//		if(v.size()%2==0)
//		{
//			ans=(v.at((v.size()-1)/2));
//			answers.push_back(ans);
//		}
//		else
//		{
//			ans=v.at(v.size()/2);
//			answers.push_back(ans);
//		}
//	}
//	ans=0;
//	for(int i=0;i<answers.size();i++)
//		ans+=answers[i];
//	ans=ans%10000;
//	cout<<ans;
//	return 0;
//}