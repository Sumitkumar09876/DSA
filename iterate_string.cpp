#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int solv(vector<int>arr,int size,int k){
        int i=0,j=i+1;
        int sum=arr[i]+arr[j];
        int cnt=0;
        while(j<size){
            sum=arr[i]+arr[j];
            if(sum<k){
                j++;
            }
            else if(sum>k){
                i++;
            }
            else if(sum==k){
                
            }
        }
        return cnt;
    }
};
int main(){
    vector<int>arr={2,3,5,1,9};
    int size=arr.size();
    Solution sl;
    cout<<sl.solv(arr,size,10);
}