#include<iostream>
#include<iterator>
#include<numeric>
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
          cout<<endl;
     int sum=accumulate(num.begin(),num.end(),0);
     cout<<"sum of : "<<sum<<endl;
     return 0;
}


