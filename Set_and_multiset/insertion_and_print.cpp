#include<iostream>
#include<set>
using namespace std;





int main(){
 //   set<int> s;

    set<int, greater<int>> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
/*
    for(auto i: s){
        cout<< i<<" ";
    }
    cout<<endl;

    for(auto i=s.begin(); i!=s.end(); i++)
        cout<<*i<<" ";
    cout<<endl;


    for(auto i=s.rbegin(); i!=s.rend(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    cout<<s.size();
*/

    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;

}