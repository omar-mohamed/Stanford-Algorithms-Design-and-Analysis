

#include <iostream>  
#include <fstream>  
#include<sstream>
#include<string>
#include<stdio.h>
#include<map>
#define MIN 10000
using namespace std;  
ifstream infile("test.txt");
    map<long long,bool> hash2; 
    int counting = 0;  
      
void readData() {  
	string line;
while (getline(infile, line))
{
    istringstream iss(line);
    long long a;
    if ((iss >> a )) 
	    hash2[a]=true;
}
} 
      
    bool hashMap(long long n)   
    {  
        if(n > MIN)   
            return false;  
        if(hash2[n])   
            return true;  
        else   
            return false;  
    }  
      
    int main()   
    {  
        readData();  
      
        for(long long i = -10000; i <= 10000; i++)   
        {  
            for(long long j = -10000; j <= 10000; j++)   
            {  
                if(hashMap(j) && hashMap(i - j))   
                {  
                    counting++;  
                    break;  
                }  
            }  
        }  
        cout<<counting<<endl;  
        return 0;  
    }  















//#include<iostream>
//#include<map>
//#include<set>
//#include<utility>
//#include<algorithm>
//#include <fstream>
//#include <sstream>
//#include <string>
//using namespace std;
//long long ans=0;
//ifstream infile("HashInt.txt");
//
//map<long long,bool> nums;
//
//void test(long long n,long long target)
//{
//	long long lol=target-n;
//	if(lol==n)
//		return;
//	if(nums[lol])
//		ans++;
//	else
//		nums.erase(lol);
//}
//
//void readData() {  
//	string line;
//while (getline(infile, line))
//{
//    istringstream iss(line);
//    long long a;
//    if ((iss >> a )) 
//	    nums[a]=true;
//}
//} 
//
//
//int main()
//{
//	readData();
//	for( map<long long,bool>::const_iterator it = nums.begin(); it != nums.end(); ++it )
//           {
//			   for(long long i=-100;i<=100;i++)
//			   {
//				   test(it->first,i);
//			   }
//           }
//
//  printf("count = %d\n",ans); 
//
//	return 0;
//}



//#include <fstream>
//#include <sstream>
//#include <string>
//#include<iostream> 
//  
//using namespace std;  
//  ifstream infile("HashInt.txt");
//int hashing[1000000 + 1] = { 0 };  
//int counting = 0;  
//  
//void readData() {  
//	string line;
//while (getline(infile, line))
//{
//    istringstream iss(line);
//    int a;
//    if (!(iss >> a )) 
//	  break;// error
//	hashing[a]++;
//}
//}  
//  
//bool hashMap(int n) {  
//    if(hashing[n]) return true;  
//    else return false;  
//}  
//  
//int main() {  
//    readData();  
//  
//    for(int i = -10000; i <= 10000; i++) {  
//        for(int j = 1; j <= (i - 1) / 2; j++) {  
//            if(hashMap(j) && hashMap(i - j)) {  
//                counting++;  
//                break;  
//            }  
//        }  
//    }  
//  
//    cout<<counting<<endl;  
//    return 0;  
//}



//#include<stdio.h>  
//#include<stdlib.h>  
//#include<ctype.h>  
//#include<iostream>
//#pragma warning(disable: 4996)
//using namespace std;
//const char INFILE[] = "test.txt";  
//#define MAX 10000000  
//long long arr[MAX+5]={0};
//void fetch_hash(long *hash) {  
//  FILE *fp = fopen(INFILE,"r");  
//  char line[10];  
//  long i;  
//  for (i=0; i<MAX; i++)  
//    hash[i] = 0;  
//  while (fgets(line,10,fp))  
//    hash[atoi(line)] ++;  
//}  
//short two_sum(long *hash, long t)   {  
//  long x;  
//  for (x = 1; x < (t-1)/2; x++)    
//    if ((hash[x])&&(hash[t-x]))  
//      return 1;  
//  return 0;  
//}  
//   
//void main()  
//{  
//  long *hash = (long*)calloc(MAX,sizeof(long));  
//  fetch_hash(hash);  
//  short i,count = 0;  
//  for (i = -10000; i <= 10000; i++)  
//    if (two_sum(hash,i))  
//      count++;  
//  printf("count = %d\n",count);  
//} 

