#include <iostream>
#include <string>

int count = 0;

int rec(int x){
  count += 1;
  if(x == 1) {
    return count;
  } else {
    return ((x%2==0) ? rec(x/2) : rec((3*x)+1) );
  }
}

int iteration(int i, int j){
  int max= 0, p= i, temp = 0;
  for(p; p <= j; p++){
    count= 0;
    temp = rec(p);
    if(temp > max) max= temp;
  }
  return max;
}

int main(int argc, char* argv[]){

    std::cout << "you must enter two integers" << std::endl;

    int x, y;
    std::cin >> x;
    std::cin >> y;

    std::cout << std::to_string(x) << " " << std::to_string(y) << " " << iteration(x, y) << std::endl;

  return 1;
}
