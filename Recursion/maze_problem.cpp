//Count the number of paths possible in maze.

#include<iostream>
using namespace std;



int Maze(int n,int i,int j){

    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }

    return Maze(n,i+1,j)+ Maze(n,i,j+1);
}


int main(){

    cout<<Maze(8,0,0);


    return 0;

}