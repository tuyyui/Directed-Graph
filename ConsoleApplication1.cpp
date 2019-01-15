// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iterator>
#include <vector>
#include <iostream>
class Node
{
public:
	Node(int Data) {
		_data = Data;
	}
	int _data;
	Node *next; //Pointer for creating a linked list within all of the nodes;
	Node *Head = NULL;
	std::vector<Node*> StoreNodes;
	void AddtoNode( std::vector<Node*>::iterator IT, std::vector<Node*> VectorOfNodes, int Nodespot) {
		    
		for (IT = VectorOfNodes.begin(); IT != VectorOfNodes.end(); IT++) {
			if ((*IT)->_data == Nodespot) {
				StoreNodes.push_back((*IT));
			}
		}
	}
	void LoopThroughNodes() {
		std::vector <Node*>::iterator _it;
		_it = StoreNodes.begin();
		for (_it = StoreNodes.begin(); _it != StoreNodes.end(); _it++) {
			std::cout << std::endl;
			std::cout << (*_it)->_data;
			std::cout << std::endl;
		  }
	}
};

int main()
{
	std::vector<Node*> _NodeVectors;
	
	
	_NodeVectors.push_back(new Node(45));
	_NodeVectors.push_back(new Node(23));
	_NodeVectors.push_back(new Node(90));
	_NodeVectors.push_back(new Node(10));
	_NodeVectors.push_back(new Node(8));
	_NodeVectors.push_back(new Node(15));
	
	std::vector<Node*>::iterator _it;

	_it = _NodeVectors.begin();
	std::vector <Node*>::iterator GetNode;
	GetNode = _NodeVectors.begin();
	(*GetNode)->AddtoNode(_it ,_NodeVectors, 23);
	(*GetNode)->AddtoNode(_it , _NodeVectors, 10);
	(*GetNode)->AddtoNode(_it , _NodeVectors, 15);
	(*GetNode)->LoopThroughNodes();
    return 0;
}

