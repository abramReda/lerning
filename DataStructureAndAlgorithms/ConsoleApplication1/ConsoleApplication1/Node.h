#pragma once

template <class T> class SLinkedList;

template <class T> class SNode{
private:
	T data;
	SNode<T>* next;
	friend class SLinkedList<T>;
public:
	SNode();
	SNode(T & initdata);

};


template <class T>
SNode<T>::SNode()
{
	next = nullptr;
}

template<class T>
SNode<T>::SNode(T & initdata)
{
	data = initdata;
	next = nullptr;
}


