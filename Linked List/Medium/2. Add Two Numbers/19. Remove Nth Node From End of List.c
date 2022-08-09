/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *array[30][2]; 
    struct ListNode *temp = head;
    int count = 1;
    int index;
    
    while(temp->next != NULL){
    	array[count][0] = temp;
    	array[count][1] = temp->next->next;
    	temp = temp->next;
    	count++;
	}
	
	index = count - n;
	if(index != 0){
		array[index][0]->next = array[index][1];	
	}
	else{
		head = head->next;
	}
    return head;
}
