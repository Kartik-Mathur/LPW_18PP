


//robots points 

#include <bits/stdc++.h>
using namespace std;

int total_points_util(int grid[][5],int height,int headstart,int row,int col,int power){

    if(row==-1) return 0;

    int left=INT_MIN,up=INT_MIN,right=INT_MIN;
    if(row==headstart) power=5;
    int point = grid[row][col];
    
    if(power){
        if(point==-1) point = 0;
        power--;
    }
    
    if(col!=0)
    left =point + total_points_util(grid,height,headstart,row-1,col-1,power);
    up =point + total_points_util(grid,height,headstart,row-1,col,power);
   if(col!=4)
    right =point + total_points_util(grid,height,headstart,row-1,col+1,power);
    return max(left,max(up,right));

}

int total_points(int grid[][5],int height,int headstart,int power){

    int left,up,right;
    int col=2,row=height-1;

    left = total_points_util(grid,height,headstart,row,col-1,power);
    up = total_points_util(grid,height,headstart,row,col,power);
    right = total_points_util(grid,height,headstart,row,col+1,power);
    return max(left,max(up,right));

}

int main() {

    int t;
    cin>>t;
    while(t--){

        int grid[20][5],height;
        cin>>height;
        for(int i=0;i<height;i++){
            for(int j=0;j<5;j++){
                cin>>grid[i][j];
            }
        }

        int ans = INT_MIN,temp;
        for(int i=0;i<=height-5;i++){
            temp=total_points(grid,height,height-1-i,0);
            ans = max(ans,temp);
        }
        cout<<ans<<'\n';
    }

}
