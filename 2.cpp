#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
     vector<int> num={};
     num.push_back(10);
     num.push_back(20);
     num.push_back(30);
     num.push_back(40);
     num.push_back(50);
     //num.assign(4,10); four times 10 print
     vector<int>:: iterator it;
     for(it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
     return 0;
}

