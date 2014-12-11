//#include<iostream>
//#include <cstdio>
//#include <algorithm>
//#include <cstring>
//#include <string>
//#include <cctype>
//#include <stack>
//#include <queue>
//#include <list>
//#include <vector>
//#include <map>
//#include <sstream>
//#include <cmath>
//#include <bitset>
//#include <utility>
//#include <set>
//#include<cstdlib>
//#include<climits>
//using namespace std;
//
//struct edge
//{
//	int from,to;
//	int cost;
//};
//
//int getParent(int i,vector<int> &set)
//{
//    if(i==set[i])
//        return i;
//    else
//        return (set[i]=getParent(set[i],set));
//}
//
//int isUnion(int a,int b,vector<int> &set)
//{
//    return getParent(a,set)==getParent(b,set);
//}
//
//void makeUnion(int a,int b,vector<int> &set)
//{
//    set[getParent(a,set)] = getParent(b,set);
//}
//
//bool sorting(edge e1 , edge e2) 
//{
//	return e1.cost < e2.cost;
//}
//
//int main()
//{	
//	int nodes,k;
//	while(cin>>nodes>>k)
//	{
//	    vector<edge> edgelist;
//	    vector<int> set(nodes+1);
//		while(true)
//		{
//			int to,from,cost;
//			cin>>from>>to>>cost;
//			if(from==0&&to==0&&cost==0)
//				break;
//			edge e;
//			e.to=to;
//			e.from=from;
//			e.cost=cost;
//			edgelist.push_back(e);
//		}
//		sort(edgelist.begin(),edgelist.end(),sorting);
//		for(int i=0;i<=nodes;i++)
//			set[i]=i;
//		int i=0,count=0;
//		while(count<nodes-k)
//		{
//			if(!isUnion(edgelist[i].from,edgelist[i].to,set))
//			{
//				makeUnion(edgelist[i].from,edgelist[i].to,set);
//				count++;
//			}
//			i++;
//		}
//		for(int j=count;j<(int)edgelist.size();j++)
//		{
//			if(!isUnion(edgelist[j].from,edgelist[j].to,set))
//			{
//		      cout<<"ans is : "<<edgelist[j].cost<<endl;
//			  break;
//			}
//		}
//	}
//	return 0;
//}