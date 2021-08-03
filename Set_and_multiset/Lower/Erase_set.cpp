#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;

    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    s.erase(2);
    s.erase(s.begin());

    for(auto i: s){
        cout<< i<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    return 0;
}