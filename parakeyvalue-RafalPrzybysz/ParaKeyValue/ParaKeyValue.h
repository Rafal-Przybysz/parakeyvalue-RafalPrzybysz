#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;


template<typename K, typename V> 
class Para {
  K key;   
  V val;
public:
  Para(): key{}, val{} {} // Domyœlne wartoœci K i V
  Para(const K& k, const V& v);
  Para(const Para<K,V>& p);
  Para& operator=(const Para& p);

  // ZROBIONE Zdefiniowaæ funkcje pobierania atrybutów (getters)
  K getK() const;
  V getV()const;
   template<typename K, typename V> friend ostream& operator<<(ostream& os, const Para<K, V>& p);
};

// ZROBIONE Uzupe³niæ definicjê operatora transmisji wyjœciowej
// wed³ug formatu pokazanego w testach jednostkowych.

template<typename K, typename V>
ostream& operator<<(ostream& os, const Para<K, V>& p)
{
	os << "<" << p.key << ":" << p.val << ">";
	return os;
}

template<typename K, typename V>
bool cmpK(const Para<K, V>& p1, const Para<K, V>& p2) {
  return p1.getK()<p2.getK();
}

template<typename K, typename V>
bool cmpV(const Para<K, V>& p1, const Para<K, V>& p2) {
  return p1.getV()<p2.getV();
}
