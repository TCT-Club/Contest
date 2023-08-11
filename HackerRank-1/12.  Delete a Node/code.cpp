SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    // edge case
    if(position == 0) {
        SinglyLinkedListNode* delNode = llist;
        llist = llist->next;
        delete delNode;
        return llist;
    }
    
    // get a backup node to traverse the linkedlist
    SinglyLinkedListNode* tempHead = llist;
    for(int i=0 ; i<position-1 ; i++) {
        tempHead = tempHead->next;    
    }
    
    // getting a pointer to a node which we want to delete
    SinglyLinkedListNode* delNode = tempHead->next;
    
    // updating the link
    tempHead->next = delNode->next;
    
    // deletig it from the memeory
    delete delNode;

    return llist;
}
