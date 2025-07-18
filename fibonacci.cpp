#include <iostream>
using namespace std;

int main(){

   int first_num=0;
   int second_num=1;

   cout<<first_num<<endl;
   cout<<second_num<<endl;

   for(int i=0;i<18;i++){
    int newFibo= first_num+second_num;

    cout<<newFibo<<endl;
    first_num=second_num;
    second_num=newFibo;
   }
return 0;
}
