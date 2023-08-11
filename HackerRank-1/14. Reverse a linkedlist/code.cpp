SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* next = nullptr;
    
    while(head != nullptr) {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    
    return prev;
}
