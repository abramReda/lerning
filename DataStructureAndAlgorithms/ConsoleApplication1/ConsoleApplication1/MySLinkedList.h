#pragma once
#include "Node.h"
#include <stdexcept>      // std::out_of_range

template <class T> class SLinkedList {

private:
	SNode<T> * head;

public :
	SLinkedList();
	~SLinkedList();

	bool isEmpty()const;
	const T& front()const;
	void addFront(T & data);
	void removeFront();

};





template<class T>
SLinkedList<T>::SLinkedList()
{
	head = nullptr;
}

template<class T>
SLinkedList<T>::~SLinkedList(){
	while(!isEmpty())removeFront();
}

template<class T>
 bool SLinkedList<T>::isEmpty() const
{
	return head == nullptr;
}

 template<class T>
const T & SLinkedList<T>::front() const
 {
	if (head == nullptr)
		throw std::out_of_range("you can not read front from empty list !");
	return head->data;
	 
 }

template<class T>
void SLinkedList<T>::addFront(T & data){
	SNode<T> * temp = new SNode<T>(data);
	temp->next = head;
	head = temp;

}

template<class T>
void SLinkedList<T>::removeFront(){
	if (head == nullptr) {
		throw std::out_of_range("you can not remove from empty list !!");
	}
	SNode<T>* temp = head;
	head = head->next;
	delete temp;

}
