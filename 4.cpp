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
     //vector<int> num2={};
     vector<int> num2(num);
     //num2.assign(num.begin(),num.end());
     vector<int>:: iterator it;
          for(it=num2.begin();it!=num2.end();it++)
               cout<<*it<<" ";
     return 0;
}


