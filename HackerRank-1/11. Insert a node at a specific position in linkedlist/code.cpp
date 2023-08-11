/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    
    SinglyLinkedListNode* newElement  = new SinglyLinkedListNode(data);
    if(llist == nullptr) {
        return newElement;
    }
    
    // insertion at the head
    if(position == 0) {
        newElement->next = llist;
        llist = newElement;
        return llist;
    }
    else {
        SinglyLinkedListNode* tempHead = llist;
        for(int i=0 ; i<position-1 ; i++) {
            tempHead = tempHead->next;            
        }
        SinglyLinkedListNode* backupLink = tempHead->next;
        tempHead->next = newElement;
        newElement->next = backupLink;
    }
    return llist;
}
