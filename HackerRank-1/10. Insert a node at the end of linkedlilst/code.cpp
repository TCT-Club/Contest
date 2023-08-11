// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* newElement = new SinglyLinkedListNode(data);

    // empty node
    if(head == nullptr) {
        return newElement;   
    }
    
    // get a backup
    SinglyLinkedListNode* temp = head;
    
    // traverse till the end element
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    
    // add a new linkedlist
    temp->next = newElement;
    
    // return the head;
    return head;
}
