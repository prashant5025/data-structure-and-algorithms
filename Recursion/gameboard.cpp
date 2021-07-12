
//count the number of paths pssible from start point to end 
//point in gameboard.
//              _________________
//             |0   |1  |2  |3  |
//             -----------------

#include<iostream>
using namespace std;

int gameboard(int s, int e){

    if (s==e)
    {
        return 1;

    }
    if (s>e)
    {
        return 0;
    }

    int count=0;
    for (int i = 1; i <=6; i++)
    {
        count+=gameboard(s+i, e);
    }
    return count;
    
    
    

}


int main(){

    cout<<gameboard(0,3)<<endl;


    return 0;

}