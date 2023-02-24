#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string str1 = "hello world";
    for (auto i:str1){  //类似python的for i in enumerate(str1)
        cout<<i<<endl;
    }
    cout<<"Stop"<<endl;
    return 0;
}