//#include<iostream>
//#include<vector>
//#include<stdlib.h>
//#include<utility>
//#include<map>
//#include<set>
//#include<queue>
//#include <fstream>
//#include <sstream>
//#include <string>
//#pragma warning(disable: 4996)
//using namespace std;
//ifstream infile("SCC.txt");
//vector<bool> visited(875715);
//int counting=1;
//map<int,vector <int> > graph;
//map<int,vector <int> > reversed;
//vector<int> finished(875715);
//vector<int> res(900000);
//int finish=1;
//void DFS(int start)
//{
//	visited[start]=true;
//	for(int i=0;i<reversed[start].size();i++)
//	{
//		if(!visited[reversed[start][i]])
//			DFS(reversed[start][i]);
//	}
//	finished[finish++]=start;
//}
//
//int DFS2(int start)
//{
//	visited[start]=true;
//	for(int i=0;i<graph[start].size();i++)
//	{
//		if(!visited[graph[start][i]])
//		{
//			counting++;
//			DFS2(graph[start][i]);
//		}
//	}
//	return counting;
//}
//
//int main()
//{
//	string line;
//while (getline(infile, line))
//{
//    istringstream iss(line);
//    int a,b;
//	if(iss>>a>>b)
//	{
//		graph[a].push_back(b);
//		reversed[b].push_back(a);
//	}
//}
//
//	for(int i=reversed.size();i>0;i--)
//	{
//		if(!visited[i])
//		   DFS(i);
//	}
//	visited.assign(visited.size(),false);
//	for(int i=875714;i>0;i--)
//	{
//		if(!visited[finished[i]])
//		{
//			counting=1;
//			res.push_back(DFS2(finished[i]));
//		}
//	}
//	sort(res.begin(),res.end());
//	for(int i=res.size()-1;i>=0;i--)
//	{
//		if(i==res.size()-6)
//			break;
//		cout<<res[i]<<" ";
//	}
//	cout<<endl;
//	return 0;
//}