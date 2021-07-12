//Remove all duplicates from the string.
//          "aaaabbbeeecddd"
//              "abecd"

#include<iostream>
using namespace std;

string removeDublicates(string s){
    if(s.length()==0){
        return "";

    }

    char ch=s[0];
    string ans = removeDublicates(s.substr(1));

    if(ch == ans[0]){
        return ans;

    }
    return(ch+ans);
}



int main(){
    cout<<removeDublicates("aaaaabbbeeecdddd");
    return 0; 
    

    

}