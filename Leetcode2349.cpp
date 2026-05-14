#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class NumberContainers {
public:
    vector<pair<int,int>> v;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        bool found=false;
        if(v.size()>0)
        {
            for(int i=0;i<v.size();i++)
            {
                if(v[i].first==index)
                {
                    found=true;
                    v[i].second=number;
                    break;
                }
            }
        }
        if(found==false)
        {
            v.push_back({index,number});
        }
    }
    
    int find(int number) {
        int smallIndex=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].second==number && smallIndex>v[i].first)
            {
                smallIndex=v[i].first;
            }
        }
        return smallIndex==INT_MAX?-1:smallIndex;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */