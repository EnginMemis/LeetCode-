# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:

        if head == None or head.next == None:
            return head

        listLen = 1
        iter = head

        while iter.next != None:     
            iter = iter.next
            listLen += 1
        
        iter.next = head

        k = k % listLen
        
        iter = head
        for _ in range(listLen - k - 1):
            iter = iter.next
        newHead = iter.next
        iter.next = None
        return newHead
      
