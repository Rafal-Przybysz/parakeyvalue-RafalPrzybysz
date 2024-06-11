#include "ParaKeyValue.h"

template<typename K, typename V>
Para<K, V>::Para(const K& k, const V& v): key(k), val(v) { }


// ZROBIONE Zdefiniowaæ konstruktor kopiuj¹cy szablonu Para<K, V>
template<typename K, typename V>
Para<K, V>::Para(const Para<K, V>& p)
{
	this->key = p.key;
	this->val = p.val;
	
}


// ZROBIONE Uzupe³niæ definicjê kopiuj¹cego operatora przypisania
template<typename K, typename V>
Para<K, V>& Para<K, V>::operator=(const Para& p) 
{
	this->key = p.key;
	this->val = p.val;
	return * this;
}

template<typename K, typename V>
K Para<K, V>::getK() const
{
	return key;
}

template<typename K, typename V>
V Para<K, V>::getV() const
{
	return val;
}

template class Para<int, int>;
template class Para<int, string>;
template class Para<string, string>;

template bool cmpK<int, string>(const Para<int, string>&, const Para<int, string>&);
template bool cmpK<int, string>(const Para<int, string>&, const Para<int, string>&);
template bool cmpV<string, string>(const Para<string, string>&, const Para<string, string>&);
template bool cmpV<string, string>(const Para<string, string>&, const Para<string, string>&);
