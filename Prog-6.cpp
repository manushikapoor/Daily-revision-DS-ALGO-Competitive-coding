/* maximum product subarray */

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int max_ending_here = 1; 
  
    
    int min_ending_here = 1; 
  
    
    int max_so_far = 1; 
    int flag = 0; 
    
    if(n==1){
        cout<<"arr[i]"<<endl;
        return 0;
    }
    for (int i = 0; i < n; i++) { 
        
        
        if (arr[i] > 0) { 
            max_ending_here = max_ending_here * arr[i]; 
            min_ending_here = min(min_ending_here * arr[i], 1); 
            flag = 1; 
        } 
  
        
        else if (arr[i] == 0) { 
            max_ending_here = 1; 
            min_ending_here = 1; 
        } 
  
        else { 
            int temp = max_ending_here; 
            max_ending_here = max(min_ending_here * arr[i], 1); 
            min_ending_here = temp * arr[i]; 
        } 
  
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
    } 
    if (flag == 0 && max_so_far == 1) {
        cout<<"1"<<endl;
        return 0;
    }
       
    cout<<max_so_far%10000000<<endl;
	}
	return 0;
}
