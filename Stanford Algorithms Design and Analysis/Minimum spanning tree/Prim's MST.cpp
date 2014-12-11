//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<utility>
//#include<functional>
//using namespace std;
//
//long long Prim(vector<vector<pair<int,int> > > graph,int n)
//{
//	priority_queue<pair<int,int>,vector<pair<int, int> >,greater<pair<int, int> > > pq;
//	vector<bool> visisted(n+1);
//	pq.push(make_pair(0,1));
//	long long MST_cost=0;
//	while(!pq.empty())
//	{
//		int u=pq.top().second;
//		int w=pq.top().first;
//		pq.pop();
//		if(visisted[u])
//			continue;
//		visisted[u]=true;
//		MST_cost+=w;
//
//		for(int i=0;i<(int)graph[u].size();i++)
//			if(!visisted[graph[u][i].first])
//				pq.push(make_pair(graph[u][i].second,graph[u][i].first));
//	}
//	return MST_cost;
//}
//
//int main()
//{
//	int n,m;
//	while(cin>>n>>m)
//	{
//		vector<vector<pair<int,int> > > graph(n+1);
//		for(int i=0;i<m;i++)
//		{
//			int n1,n2,w;
//			cin>>n1>>n2>>w;
//			graph[n1].push_back(make_pair(n2,w));
//			graph[n2].push_back(make_pair(n1,w));
//		}
//			cout<<"ans is : "<<Prim(graph,n)<<endl;
//	}
//	return 0;
//}
//
//
//
