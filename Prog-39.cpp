/* Chef has an integer N and he wants to generate a matrix M with N rows (numbered 1 through N) and N columns (numbered 1 through N). He thinks that M would be delicious if:

Each element of this matrix is an integer between 1 and N2 inclusive.
All the elements of the matrix are pairwise distinct.
For each square submatrix containing cells in rows r through r+a and in columns c through c+a (inclusive) for some valid integers r, c and a≥0:
Mr,c+Mr+a,c+a is even
Mr,c+a+Mr+a,c is even
Can you help Chef generate a delicious matrix? It can be proved that a solution always exists. If there are multiple solutions, you may find any one.*/

#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n][n];
        long long int s=1;
        if(n%2!=0){
            for(long long int i=0;i<n;i++){
                for(long long int j=0;j<n;j++){
                    arr[i][j]=s;
                    s++;
                }
            }
        }
        bool rev=false;
        long long int r=0;
        if(n%2==0){
            for(long long int k=0;k<n;k++){
            if(!rev){
                for(long long int i=0;i<n;i++){
                arr[r][i]=s;
                s++;
                
            }
            r++;
            rev=true;
            //cout<<rev;
            }
            else if(rev){
                for(int i=n-1;i>=0;i--){
                arr[r][i]=s;
                s++;
                //cout<<s<<" ";
            }
            r++;
            rev=false;
            //cout<<rev;
        }
        }
        }
        for(long long int i=0;i<n;i++){
                for(long long int j=0;j<n;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<"\n";
            }
        
    }

    return 0;
}
