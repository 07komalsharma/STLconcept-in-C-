#include<iostream>
#include<map>

using namespace std;

int main(){
    
    map<int,string> m;
    
    m[1]="thar";
    m[2]="verna";
    m[13]="kia-seltose";
    
    m.insert({5,"range rover"});
    
    cout<<"before erase"<<endl;
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    //in case of map insert(),count(),find()in sbki complexity O(logn) h
    
    m.erase(13);
    cout<<"after erase"<<endl;
    
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    auto it = m.find(5);
    
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    
}

