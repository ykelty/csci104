#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include "rem_dup_lib.h"

using namespace std;

int main(int argc, char * argv[]){
	
	Item* head1 = new Item(0, nullptr);

	ifstream ifile;
	ifile.open(argv[1]);
	ofstream ofile;
	ofile.open(argv[2]);
	string line;
	getline(ifile, line);
	stringstream ss(line);
	int number;

	ss>>head1->val;
	Item* temp = new Item(0, nullptr);
	head1->next = temp;
	
	while(ss>>number){
		temp->val = number;
		Item* newHead = new Item(0, nullptr);
		temp->next = newHead;
		temp = temp->next;
		
	}


	removeConsecutive(head1);
	
	Item* head2 = new Item(0, nullptr);
	string line2;
	getline(ifile, line2);
	stringstream ss2(line2);
	int number2;
	ss >> head2->val;
	Item* temp2 = new Item(0, nullptr);
	head2->next = temp2;
	while(ss2>>number2){
		temp2->val = number2;
		Item* newHead2 = new Item(0, nullptr);
		temp2->next = newHead2;
		temp2 = temp2->next;
	}
	
	Item* head3 = new Item(0, nullptr);
	head3 = concatenate(head1,head2);
	
	/*
	while(head3 != NULL){
		ofile << head3->val;
		head3 = head3->next;
	}
	*/
	/*
	while(head1 != NULL){
		ofile << head1->val;
		head1 = head1->next;
	}
	*/
	
	return 0;

}