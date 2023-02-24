#include <iostream>
#include <cstring>
using namespace std;

// 以下部分可以出现在.h文件中
// 结构体声明均使用typedef命名成另一种类型，是一种常见操作
typedef struct struct_c
{
    /* data */
    string key;
    int val_1;
    int* val_2;     //定义时，采用&变量方式
}stc1;

typedef struct struct_cpp
{
    /* data */
    string key;
    int val_1;
    int* val_2;
    /* function */
    void stc_func_1();
    bool stc_func_2(const stc1&);
}stc2;

// 以下部分出现在cpp源文件中
void stc2::stc_func_1(){
    cout<<"Using func_1"<<endl;
}

bool stc2::stc_func_2(const stc1& input_stc){   //输入是一个结构体，为了保护内容采用const& 引用传递
    cout<<"Information in stc1:"<<endl;
    cout<<input_stc.key<<endl;
    cout<<input_stc.val_1<<endl;
    cout<<*(input_stc.val_2)<<endl;
    return true;
}

int main(){
    int score1 = 98,score2=79;
    stc1 var1 = {"Chris",15,&score1};
    stc2 var2 = {"Meg",17,&score2};
    var2.stc_func_1();
    var2.stc_func_2(var1);
    return 0;
}