#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     vector<int> num={};
     num.push_back(30);
     num.push_back(20);
     num.push_back(70);
     num.push_back(80);
     num.push_back(50);
     vector<int>:: iterator it;
     for(it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
          cout<<endl;
          cout<<"largest element is  :  "<<*max_element(num.begin(),num.end())<<endl;
          cout<<"largest element is  :  "<<*min_element(num.begin(),num.end())<<endl;
     return 0;
}

