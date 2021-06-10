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

SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *llist, int data, int position)
{
    if (position == 1)
    {
        SinglyLinkedListNode *curr = new SinglyLinkedListNode(data);
        curr->next = llist;
        return curr;
    }

    SinglyLinkedListNode *curr = llist;
    while (curr->next != nullptr)
    {
        curr = curr->next;
        position--;
        if (position == 1)
        {
            SinglyLinkedListNode *aux = new SinglyLinkedListNode(data);
            aux->next = curr->next;
            curr->next = aux;
            break;
        }
    }

    return llist;
}