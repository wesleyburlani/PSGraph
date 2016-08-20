#ifndef EDGE_HPP
#define EDGE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <ostream>

#include "../h/Vertice.h"

using namespace std;

template <class T>
class Edge{

private:
	T u;
	T w;

public:

	vector<T> GetEdge();
	Edge<T>(T u);
	Edge<T>(T u, T w);

	string ToString();
	bool Contains(T v);
};


#include "../hpp/Edge.hpp"
#endif