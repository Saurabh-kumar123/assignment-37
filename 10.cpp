//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<iterator>
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
     int element;
     cout<<"Enter a surch element : ";
     cin>>element;
     vector<int>:: iterator it=find(num.begin(),num.end(),element);
     if(it!=num.end())
          cout<<"element found"<<endl;
     else
          cout<<"element not found"<<endl;
     return 0;
}

