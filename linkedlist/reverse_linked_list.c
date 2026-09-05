/*
 * Problem: Reverse a Singly Linked List
 * Approach: Iterative (Three-Pointer Technique)
 * Time Complexity: O(n) - Visits each node exactly once
 * Space Complexity: O(1) - Rearranges pointers without using extra memory
 */

#include <stdio.h>
#include <stdlib.h>

// Definition of a Linked List Node
struct Node {
    int data;
    struct Node* next;
};
typedef Node* node;
// Function to reverse the linked list
node reverseList(node head) {
    node prev = NULL;
    node current = head;
    node next = NULL;

    while (current != NULL) {
        next = current->next;  // Store the next node
        current->next = prev;  // Reverse the current node's pointer
        prev = current;        // Move prev one step forward
        current = next;        // Move current one step forward
    }
    
    return prev; // New head of the reversed list
}

// Helper function to print the linked list
void printList(node head) {
    node temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Helper function to insert a node at the beginning
node insertAtHead(node head, int data) {
    node n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->next = head;
    head = n;
    return head;
}

int main() {
    node head = NULL;

    // Creating a list: 4 -> 3 -> 2 -> 1 -> NULL
    head = insertAtHead(head, 1);
    head = insertAtHead(head, 2);
    head = insertAtHead(head, 3);
    head = insertAtHead(head, 4);

    printf("Original Linked List:\n");
    printList(head);

    // Call the DSA function
    head = reverseList(head);

    printf("Reversed Linked List:\n");
    printList(head);

    return 0;
}
