//回顾c基本功能
#include <iostream> 
#include <cstring>
#include <ctime>
#include <vector>
#include <list>

using namespace std;

//D:\ana\Library\mingw-w64\bin
int main()
{
    
  // 强制类型转换
  int var1= 15.2;
  cout<<"====Part1===="<<endl;
  cout<<int(var1)<<endl;    // 强制转换
  cout<<static_cast<int>(var1)<<endl;    // c++特有的静态强制转换，推荐
    
  //数组相关
  
  cout<<"====Part2===="<<endl;
  int datapack_0[] = {2,3,4,1};    //普通形式一维
  int datapack_1[2][4] = {{10,10,53,60},{8,12,55,47}};  //多维数组定义时不应该缺省
  int length = 4; 
  // int datapack_err[length];   //错误的，不应该用变量初始化数组大小
  int *datapack_2 = new int[length];  //动态一维数组
  vector<int> datapack_3 (datapack_0,datapack_0+length); // vector类型动态数组，用迭代器方式从datapack_0导入  
  //目前电脑编译器在stl方面总是出错
  
  // 数组访问（查看or修改）
  for (auto i:datapack_3){
      cout<<i<<'\t';
  }
  cout<<endl;
  delete []datapack_2;
  return 0;
}
  
