        Node* removeDuplicates(Node *head)
        {
            if (head == NULL || head->next == NULL)
                return head;
            
            if (head->data == head->next->data)
            {
                head->next = head->next->next;
                removeDuplicates(head);
            }
            else
                removeDuplicates(head->next);
                
            return head;
        }