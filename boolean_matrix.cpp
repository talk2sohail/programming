// Question:Given a boolean matrix mat[r][c] of size r X c, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.



#include<bits/stdc++.h>
using namespace std;

#define SIZE 1000

void booleanMatrix(int a[SIZE][SIZE], int r, int c)
{
    
    bool row = false, col = false;
    //check if first col has any 1
    for(int i=0;i<c;i++){
        if(a[0][i]){
            row = true;
            break;
        }
    }
    //check if first row has any 1
     for(int i=0;i<c;i++){
        if(a[i][0]){
            col = true;
            break;
        }
    }
   //mark the (0, j) and (i, 0) to 1 if (i, j) is 1  
   for(int i=1;i<r;i++){
       for(int j=1;j<c;j++){
           if(a[i][j])
                a[i][0] = a[0][j] = 1; 
       }
   }
//    fill all the cell whose makred 1 in the first col cell and first row cell
   for(int i=1;i<r;i++){
       for(int j=1;j<c;j++){
           if(a[i][0] || a[0][j])
                a[i][j] = 1; 
       }
   }
//    fill the col if 'row' is true
   for(int i=0; row && i<c;i++){
       a[0][i] = 1;
   }
   
//    fill the col if 'col' is true
   for(int i=0; col && i<r; i++){
       a[i][0] = 1;
   }
   
   for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }
    
    
}
//Driver Code
int main(){

	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;

	int a[SIZE][SIZE];

	for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
			cin>>a[i][j];   
		}
		// convert(a, r, c);
		booleanMatrix(a, r, c);

	}

	

	return 0;
}