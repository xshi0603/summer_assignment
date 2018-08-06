#include <iostream>
using namespace std;

int factorial (int input) 
{
  int total = 1;
  for (int i = 1; i <= input; i++) {
    total = total * i;
  }
  return total;
}

int isEven (int input)
{
  if (input % 2 == 0) {
    return true;
  }
  else {
    return false;
  }
}

int main()
{
  int input = 5;
  cout << "factorial of " << input << " is " << factorial(input) << endl;
  cout << "the statement that " << input << " is even is " << isEven(input) <<endl;
}
