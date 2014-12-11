//#include<vector>
//#include<iostream>
//#include<utility>
//#include<stdlib.h>
//#include<time.h>
//#include<algorithm>
//#include<map>
//#include <fstream>
//#include <sstream>
//#include <string>
//using namespace std;
//ifstream infile("kargerMinCut.txt");
//pair<int,int> ChooseRandom(map<int,vector<int> > graph,vector<int> index);
//int Kager_mincut(map<int,vector<int> > graph,vector<int> index);
//
//int main()
//{
//	srand(time(0));
//	map<int,vector<int> > graph;
//
//
//	string line;
//while (getline(infile, line))
//{
//    istringstream iss(line);
//    int a;
//    if (!(iss >> a )) 
//	  break;// error
//	graph[a];
//	int b;
//	while(iss>>b)
//		graph[a].push_back(b);
//}
//
//	vector<int> index;
//	for(int i=1;i<=graph.size();i++)
//		index.push_back(i);
//	int min=999999999;
//	for(int i=0;i<200;i++)
//	{
//		int temp= Kager_mincut(graph,index);
//		if(temp<min)
//			min=temp;
//	}
//	cout<<min<<endl;
//	return 0;
//}
//
//pair<int,int> ChooseRandom(map<int,vector<int> > graph,vector<int> index)
//{
//	pair<int,int> edge;
//	int r=index[rand()%index.size()];
//	int r2=graph[r][rand()%graph[r].size()];
//	edge.first=r;
//	edge.second=r2;
//	return(edge);
//}
//
//int Kager_mincut(map<int,vector<int> > graph,vector<int> index)
//{
//	pair<int,int> edge= ChooseRandom(graph,index);
//
//	if(graph.size()>2)
//	{
//		graph[edge.first].insert(graph[edge.first].end(),graph[edge.second].begin(),graph[edge.second].end());
//		graph.erase(edge.second);
//		index.erase(remove(index.begin(), index.end(), edge.second), index.end());
//		for(int i=0;i<graph.size();i++)
//		{
//			for(int j=0;j<graph[index[i]].size();j++)
//			{
//			if(graph[index[i]][j]==edge.second||graph[index[i]][j]==edge.first)
//			{
//				if(index[i]==edge.first)
//				{
//				    graph[index[i]].erase(graph[index[i]].begin()+j);
//				    --j;
//				}
//				else
//				{
//					graph[index[i]][j]=edge.first;
//				}
//			}
//			}
//		}
//
//		return Kager_mincut(graph,index);
//	}
//	return graph[edge.first].size();
//}







