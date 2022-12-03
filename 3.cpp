#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
     vector<int> num={};
     cout<<"press 0 insert data end"<<endl;
     cout<<"append any other number"<<endl;
     int n;
     cin>>n;
     while(n)
     {
          num.push_back(n);
          cout<<"press 0 insert data end"<<endl;
     cout<<"append any other number"<<endl;
     cin>>n;

     }
     vector<int>:: iterator it;
     for(it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
     return 0;
}


