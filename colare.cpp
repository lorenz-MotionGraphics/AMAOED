#include <iostream>

using namespace std;

int main() {
  cout<<"hello world but different. "<<endl;
  cout<<"input only 5, 6, 7, 8, 9, 10: "<<endl;
  cin>>x;
  
  if (x == "5") {
    cout<<"you chosed 5 so i will output ("i love you")"<<endl;
  } 
  if (x == "6") {
    cout<<"you chosed 6 so i will output ("hello world")"<<endl;
  }
  if (x == "7") {
    cout<<"you chosed 7 so i will output ("have a nice day")"<<endl;
  }  
  if (x == "8") {
    cout<<"you chosed 8 so i will output ("have a good day")"<<endl;
  }
  if (x == "9" || x == "10") {
    cout<<"you chosed 9 where 10 is a sibling so i will output ("congratulations you have a very good day")"<<endl;
  }
  return 0;
}
