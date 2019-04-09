#include "testSLinkedList.h"



testSLinkedList::testSLinkedList()
{
}


testSLinkedList::~testSLinkedList()
{
}

bool testSLinkedList::removeFromEmptyList()
{
	putMsg("cheak removing from empty list...");

	SLinkedList<int> emptyList;
	if (!emptyList.isEmpty()) {
		putMsg("the defult constrator not return an empty list !! \n >>can not aceed in test :(\n");
		return TEST_FAILD; 
	}
	try {
		emptyList.removeFront();// this must throw an out of range error
	}
	catch (std::out_of_range & e) {
		return TEST_SUCCESS;
	}
	catch(...){
		putMsg("it return another error rather than out of range !!");
		
	}

	return TEST_FAILD;
}

bool testSLinkedList::removeFromNonEmptyList()
{
	putMsg("cheak removing from NON empty list...");
	SLinkedList<int> List;
	//push element in list
	for (int i =-10 ;i<=10;i++)
		 List.addFront(i);
	// make test
	for (int i = 10; i >= 10; i++) {
		try {
			if (i != List.front()) {
				putMsg("it return differnt value for the front element ");
				return TEST_FAILD;
			}
			List.removeFront();
		}
		catch (...) {
			putMsg("it throw an error while try normal code !!");
			return TEST_FAILD;
		}
		return TEST_SUCCESS;
	}
	



	// TODO : contnue implementation

	return TEST_FAILD;
}

bool testSLinkedList::addItemesCorrect(){

	putMsg("start cheaking add item in front list...");
	SLinkedList<int> List;
	//push element in list
	for (int i = -10; i <= 10; i++) {
		List.addFront(i);
		if (i != List.front()) {
			putMsg("wrong behavier !! in adding front and reding front");
			return TEST_FAILD;
		}
	}
	

	return TEST_SUCCESS;
}

bool testSLinkedList::cheakAll()
{
	int successfullypassedTestNumber = 0, faildTestNemper = 0,totalTestNumber =0;
	putMsg("start cheak all test ...\n");
	//*******************************************************
	if (removeFromEmptyList() == TEST_SUCCESS) {
		putMsg("remove From Empety List -> pass successfuly.\n");
		successfullypassedTestNumber++;
	}else{
		putMsg("remove From Empety List -> Faild :( .\n");
		faildTestNemper++;
	}
	//************************************************
	if (removeFromNonEmptyList() == TEST_SUCCESS) {
		putMsg("remove From none Empety List -> pass successfuly.\n");
		successfullypassedTestNumber++;
	}
	else {
		putMsg("remove From none Empety List -> Faild :( .\n");
		faildTestNemper++;
	}

	//************************************************
	if (addItemesCorrect() == TEST_SUCCESS) {
		putMsg("adding item in List -> pass successfuly.\n");
		successfullypassedTestNumber++;
	}
	else {
		putMsg("adding item in Listt -> Faild :( .\n");
		faildTestNemper++;
	}

	totalTestNumber = successfullypassedTestNumber + faildTestNemper;
	putMsg("\n#################################");
	putMsg(">>total cheaked test :" + std::to_string(totalTestNumber));
	putMsg(">>passed test number :" + std::to_string(successfullypassedTestNumber));
	putMsg(">>faild  test number :" + std::to_string(faildTestNemper));
	putMsg("#################################\n");
	return false;
}

void testSLinkedList::putMsg(const std::string & msg)
{
	// TODO cheke if this msg worning or error or normal iformation by adding more parmter
	std::cout << msg<<std::endl; //this will change how to montor the test

}
