#include <iostream>
using namespace std;

int main() {

  int age1 = 12;
  int age2 = 31;
  int age3 = 29;
  int* amy;
  int* bob;
  int** carol;
  
  vector<string> message(0);
message.push_back("a");
message.push_back("bad");
message.insert(message.begin(), "today");
message.at(1) = "is";
message.erase(message.begin()+2);
message.push_back("good");
message.insert(message.begin()+2, "a");
message.push_back("day");

for (auto a : message) {
  cout << a;
}

  
  return 0;  
}