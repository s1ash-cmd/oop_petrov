#ifndef PETROV_HEADER_H
#define PETROV_HEADER_H

#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/export.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/shared_ptr.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/vector.hpp>

#include <iostream>

using namespace std;

template <typename T> T check_input(T min, T max) {
  T x;
  while ((cin >> x).fail() || (cin).peek() != '\n' || x < min || x > max) {
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "\nВведите корректное значение (" << min << " - " << max << ") ";
  }
  return x;
}

#endif // PETROV_HEADER_H
