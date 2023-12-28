#include<iostream>
using namespace std;
 class ash{
    public:
    ash(){
        cout<<"hey there its me ashu rajput"<<endl;
    }

 };

 class yash{
public:
yash(){

    cout<<"hey there its me yash rajput"<<endl;

}

 };

 class meera :public yash,public ash{
    public:
    meera(){
        cout<<"hey its me "<<endl;
    }
 };

int main(){

    meera obj;
    return 0;

}