#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
     vector<float> num={};
     num.push_back(1.32);
     num.push_back(2.2);
     num.push_back(3.0);
     num.push_back(4.7);
     num.push_back(5.6);
     //num.assign(4,10); four times 10 print
     //vector<float>:: iterator it;
     for(auto it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
     return 0;
}

