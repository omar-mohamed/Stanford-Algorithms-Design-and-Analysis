//#include<iostream>
//#include<vector>
//using namespace std;
//#define inf 1000000
//int ans;
//bool floydWarshal(vector<vector<int> > graph)
//{
//	int min=inf;
//	vector<vector<int> > dist;
//	dist=graph;
//	for (int k = 0; k < (int)graph.size(); k++)
//    {
//		for (int i = 0; i < (int)graph.size(); i++)
//        {
//			for (int j = 0; j < (int)graph.size(); j++)
//            {
//                if (dist[i][k] + dist[k][j] < dist[i][j])
//				{
//                    dist[i][j] = dist[i][k] + dist[k][j];
//					if( dist[i][j]<min)
//						min=dist[i][j];
//				}
//            }
//        }
//    }
//	for(int i=0;i<(int)graph.size();i++)
//	{
//		if(dist[i][i]!=0)
//			return false;
//	}
//	ans=min;
//	return true;
//}
//
//int main()
//{
//	int nodes,edges;
//	while(cin>>nodes>>edges)
//	{
//		vector<vector<int> > graph(nodes+1);
//		for(int i=0;i<=nodes;i++)
//			graph[i].assign(nodes+1,inf);
//		graph[0][0]=0;
//		for(int i=0;i<edges;i++)
//		{
//			int n1,n2,w;
//			cin>>n1>>n2>>w;
//			graph[n1][n1]=0;
//			graph[n2][n2]=0;
//			graph[n1][n2]=w;
//		}
//		if(floydWarshal(graph))
//			cout<<"ans is : "<<ans<<endl;
//		else
//			cout<<"no answer exists"<<endl;
//	}
//	return 0;
//}