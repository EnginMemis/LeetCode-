typedef struct ListNode ListNode;

ListNode* createNode(int value){
    ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
    temp->next = NULL;
    temp->val = value;
    return temp;
}

ListNode* addNode(ListNode* list, int val){
    
    	ListNode *temp;
	ListNode *node;
		
	if(list == NULL){
    		list = createNode(val);
	}
	else{
		temp = list;
		node = createNode(val);
		
		while(temp->next != NULL){
			temp = temp->next;
		}
		
		temp->next = node;
	}
	
	return list;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	ListNode *l3 = NULL;

	int onHand;
	int sum;
	
	sum = 0;
	onHand = 0;
	while(l1 != NULL && l2 != NULL){
		sum = l1->val + l2->val;
		sum += onHand;
		onHand = sum / 10;
		sum %= 10;

		l3 = addNode(l3, sum);
		l1 = l1->next;
		l2 = l2->next;
	}
	
	if(l2 == NULL && l1 != NULL){
		while(l1 != NULL){
			sum = l1->val + onHand;
			onHand = sum / 10;
			sum %= 10;

			l3 = addNode(l3, sum);
			l1 = l1->next;
		}
	}
	
	else if(l1 == NULL && l2 != NULL){
		while(l2 != NULL){
			sum = l2->val + onHand;
			onHand = sum / 10;
			sum %= 10;

			l3 = addNode(l3, sum);
			l2 = l2->next;
	        }
	}
	
	if(onHand == 1)
		l3 = addNode(l3, 1);
    
    return l3;
}
