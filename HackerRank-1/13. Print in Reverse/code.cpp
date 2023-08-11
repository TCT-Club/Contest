void reversePrint(SinglyLinkedListNode* llist) {
    // base condition
    if(llist == nullptr) {
        return;
    }
    else {
        // recursive
        reversePrint(llist->next);
        cout << llist->data << endl;
    }
}
