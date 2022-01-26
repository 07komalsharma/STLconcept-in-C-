
#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int> s;
	
	s.insert(1);
	s.insert(2);
	s.insert(4);
	s.insert(1);
	s.insert(5);
	s.insert(5);
	s.insert(6);
	
	for(auto i:s){
		cout<<i<<endl;
	}
	cout<<endl;
	
	set<int>::iterator it = s.begin();
	it++;
	
	s.erase(it);//it erase the 2nd element from the previous output
	
	for(auto i : s){
	    cout<<i<<endl;
	}
	
	cout<<"5 is present or not "<<s.count(5)<<endl; //count() function tells about presence of given element 
	cout<<"-5 is present or not "<<s.count(-5)<<endl;
    
    
    //jb v hm find krte h kisi value ko toh respond me uska refrence milta h
    
    set<int>::iterator itr = s.find(5);
    
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

