#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <set>

int main()
{
	
	try {
		std::cout << "list: ";
		std::list<int> t;
		t.push_front(1);
		t.push_front(2);
		t.push_front(3);
		std::list<int>::iterator r = easyfind(t, 5);
		std::cout << *r << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "vector: ";
		std::vector<int> t;
		t.push_back(1);
		t.push_back(2);
		t.push_back(3);
		std::vector<int>::iterator r = easyfind(t, 3);
		std::cout << *r << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	

	try {
		std::cout << "set: ";
		std::set<int> t;
		t.insert(1);
		t.insert(2);
		t.insert(3);
		std::set<int>::iterator r = easyfind(t, 2);
		std::cout << *r << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "map: ";
		std::map<char, int> t;
		t[0] = 1;
		t[1] = 2;
		t[2] = 3;
		std::map<char, int>::iterator r = easyfind(t, 5);
		std::cout << r->second << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "multimap: ";
		std::multimap<char, int> t;
		t.insert(std::pair<char,int>('a',1));
		t.insert(std::pair<char,int>('b',2));
		t.insert(std::pair<char,int>('c',3));
		std::multimap<char, int>::iterator r = easyfind(t, 2);
		std::cout << r->second << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
