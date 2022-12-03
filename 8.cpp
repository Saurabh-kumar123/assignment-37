#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> num={4,6,2,9,7,1};
     vector<int> num2={12,6,43,7,8,1};
     sort(num.begin(),num.end());
     sort(num2.begin(),num2.end());

     for(auto it=num.begin();it!=num.end();it++)
          cout<<*it<<" ";
          cout<<endl;
          for(auto it=num2.begin();it!=num2.end();it++)
          cout<<*it<<" ";
     cout<<endl;
     vector<int> num3(num.size()+num2.size());
     vector<int> iterator end;
     end=set_intersection(num.begin(),num.end(),num2.begin(),num2.end(),num3.begin());
     cout<<endl;
     cout<<"common element "<<endl;
     for(auto it=num3.begin();it!=num3.end();it++)
          cout<<*it<<" ";
     return 0;
}
