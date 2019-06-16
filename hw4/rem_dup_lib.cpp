#include "rem_dup_lib.h"
#include <iostream>

using namespace std;

void removeConsecutive(Item* head){
	if(head->next == nullptr){
		return;
	}
	if(head->next->val == head->val){
		Item* temp = head->next->next;
		cout << head->next->val << endl;
		delete head->next;
		head->next = temp;
		removeConsecutive(head);
	}
	removeConsecutive(head->next);
}

Item* concatenate(Item* head1, Item* head2){
	if(head1->next == nullptr){
		head1->next = head2;

	}else{
		concatenate(head1->next, head2);
	}
	return head1;
}