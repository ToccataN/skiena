#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <iomanip>
#include <cmath>

bool inputFun(int x){
  return ((x==0) ? true : false);
}

int main(int argc, char* argv[]){
  bool check = false;
  std::vector<float> container;
  float number, vectorSum, average, difference;

  std::cout << "enter a series of float numbers, followed by 0 when done: " << std::endl;

  while(!check){
    std::cin >> number;
    check = inputFun(number);
    if(!check) container.push_back(number);
  }

  int conSize = container.size();

  vectorSum = std::accumulate(container.begin(), container.end(), 0.0f);

  average = std::floor(vectorSum/conSize);

  for(auto& n : container){
    difference += ((n < average) ? (average - n) : 0 );
  }

  std::cout << "the minimum number is: " << std::setprecision(2) << std::fixed << difference << std::endl;

  return 0;
}
