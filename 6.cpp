#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector<int> num={};
     num.push_back(10);
     num.push_back(20);
     num.push_back(30);
     num.push_back(40);
     num.push_back(50);
     vector<int>:: iterator it;
     for(it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
          cout<<endl;
          reverse(num.begin(),num.end());
          for(it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
     return 0;
}


