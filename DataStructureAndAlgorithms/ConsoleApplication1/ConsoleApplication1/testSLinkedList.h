#pragma once

#include <stdexcept>      // std::out_of_range
#include <string>         // montor msg
#include <exception>
#include <iostream>    // for now to use it in putMsg
#include "MySLinkedList.h"

class testSLinkedList
{
private:
	std::string MSG;
public:
	static const bool TEST_FAILD = false;
	static const bool TEST_SUCCESS = true;
	testSLinkedList();
	~testSLinkedList();

	bool removeFromEmptyList();
	bool removeFromNonEmptyList();

	bool addItemesCorrect();

	bool cheakAll();
	void putMsg(const std::string & msg);



};

