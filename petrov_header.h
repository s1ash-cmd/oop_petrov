#ifndef PETROV_HEADER_H
#define PETROV_HEADER_H

#include <iostream>

using namespace std;

template <typename T>
T check_input(T min, T max){
  T x;
  while ((cin >> x).fail() || (cin).peek() != '\n' || x < min || x > max)
  {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "\nВведите корректное значение (" << min << " - " << max << ") ";
  }
  return x;
}

#endif // PETROV_HEADER_H
