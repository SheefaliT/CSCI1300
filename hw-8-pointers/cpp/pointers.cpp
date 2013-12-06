/*
  pointers.cpp

  Your Name: Sheefali Tewari

  Your Collaborators: Theresa, Weiqiang

 */

#include "pointers.h"
#include <iostream>

using namespace std;

int* get_address_of_number(int& x) {
  return &x;
}

int get_dereferenced_value(int* p) {
  return *p;
}

int* make_array(int how_many) {
  int* ret = new int[how_many];
  for (int i=0; i<how_many; i++) {
    ret[i] = 2*i + 1;
  }
  return ret;
}

float get_product(float numbers[], int n) {
  float ret = 1;
    for (int i=0; i<n; i++) {
     ret = numbers[i]*ret; 
    }
  return ret;
}

int* make_fib(int n) {
  if (n<0) {
    return NULL;
  }
  int* ret = new int[n];
  if (n<3) {
    for (int i=0; i<n; i++) {
      ret[i] = 1;
    } 
  } else {
    ret[0] = 1;
    ret[1] = 1;
    for (int i=2; i<n; i++) {
      ret[i] = ret[i-1] + ret[i-2];
    }
  } 
  return ret;
}

burrito* make_perfect_burrito() {
  burrito* ret= new burrito;
  ret->salsa = 2.5;
  ret->rice = 3.0;
  ret->peppers = 2.5;
  ret->chicken = 2*ret->peppers;
  ret->veggies = 0.0;
  ret->beans = 0.0;
  ret->steak = 0.0;
  ret->cheese = 0.0;
  ret->pork = 0.0;
  float weight = ret->salsa + ret->rice + ret->peppers + ret->chicken + ret->veggies + ret->beans + ret->steak + ret->cheese + ret->pork;
  if (weight < 16 ) {
    ret->veggies = 16 - weight;
  }
  // cout << "Veggie amount: " << ret->veggies;
  return ret;
}
