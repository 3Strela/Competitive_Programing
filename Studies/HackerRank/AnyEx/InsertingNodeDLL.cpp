/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode *sortedInsert(DoublyLinkedListNode *llist, int data)
{
    if (llist == nullptr)
        return new DoublyLinkedListNode(data);
    
    if (data < llist->data)
    {
        DoublyLinkedListNode *aux = new DoublyLinkedListNode(data);
        aux->next = llist;
        llist->prev = aux;
        return aux;
    }
 
    DoublyLinkedListNode *curr = sortedInsert(llist->next, data);
    llist->next = curr;
    curr->prev = llist;
 
    return llist;
}