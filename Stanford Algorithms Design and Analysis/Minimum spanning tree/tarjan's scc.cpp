//#include<iostream>
//#include<vector>
//#include<utility>
//#include<map>
//#include<set>
//#include<queue>
//using namespace std;
//vector<vector<int> > graph;
//bool visited[500]={0};
//int dfs_num[500]={0},dfs_low[500]={0},counter=0;
//vector<int> SCC;
//int numSCC=0;
//void tarjan(int u)
//{
//	dfs_num[u]=dfs_low[u]=counter++;
//	visited[u]=true;
//	SCC.push_back(u);
//	for(int i=0;i<graph[u].size();i++)
//	{
//		int v=graph[u][i];
//		if(!dfs_num[v])
//			tarjan(v);
//		if(visited[v])
//			dfs_low[u]=min(dfs_low[v],dfs_low[u]);
//	}
//	if (dfs_low[u] == dfs_num[u]) 
//	{ 
//		cout<<"Connected component number : "<<++numSCC<<endl;
//		while (true) 
//		{
//			int v = SCC.back(); 
//			SCC.pop_back(); 
//			visited[v] = 0;
//			cout<<v;
//			if (u == v) 
//				break;
//			cout<<"-->";
//		}
//		cout<<endl;
//	}
//}
//
//
//int main()
//{
//	int n,m;
//	cin>>n>>m;
//	graph.resize(n+1);
//	for(int i=0;i<m;i++)
//	{
//		int n1,n2;
//		cin>>n1>>n2;
//		graph[n1].push_back(n2);
//	}
//	for(int i=0;i<n;i++)
//	{
//		if(!dfs_num[i])
//			tarjan(i);
//	}
//}