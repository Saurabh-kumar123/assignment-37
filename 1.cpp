#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
     vector<int> num={4,6,2,9,7,1};
     //num.push_back(10);
     //num.assign(6,10);
     //num.insert(num.begin(),100);
     //num.insert(num.end(),200);
     vector<int>:: iterator it;
     for(it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
     return 0;
}
