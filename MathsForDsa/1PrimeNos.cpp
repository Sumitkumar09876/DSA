#include<iostream>
using namespace std;
class Prime{
    public:
    bool number(int num){
        if(num<=1){
            return 0;
        }
        for(int i=2;i<num;i++){
            if(num%i ==0)
            return 0;
        }
        return 1;
    }
};
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    Prime pr;
    cout<<pr.number(num);
}