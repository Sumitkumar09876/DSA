#include<iostream>
using namespace std;

class human{
    private:
    int weight;
    int height;
    int age;

    public:
    int getweight(){
        return weight;
    }
    void setweight(int value){
        weight = value;
    }
    // Add similar getter and setter methods for height and age if needed
};

class man:public human{
    private:
    int color;

    public:
    void sleep(){
        cout<<"My weight is:"<<getweight();
    }
    // Add a getter and setter for color if needed
};

int main(){
    man m;
    m.setweight(45);
    cout<<m.getweight();
}