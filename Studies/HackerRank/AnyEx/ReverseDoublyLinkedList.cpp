/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
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

DoublyLinkedListNode *reverse(DoublyLinkedListNode *llist)
{
    DoublyLinkedListNode *next = llist->next;
    llist->next = llist->prev;
    llist->prev = next;

    if (next == nullptr)
        return llist;

    return reverse(next);
}
