#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next; // Pointer to the next node
};

// Function to insert a node at the beginning
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); // Corrected the allocation line
    newNode->data = newData;
    newNode->next = *head; // Point new node to old head
    *head = newNode; // Update head to new node
}

// Function to delete a node with a specific value
void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head, *prev = NULL;

    // If the node to be deleted is the head node
    if (temp != NULL && temp->data == key) {
        *head = temp->next; // Change head
        free(temp); // Free old head
        return;
    }

    // Search for the key to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in the list
    if (temp == NULL) return;

    // Unlink the node from linked list
    prev->next = temp->next;
    free(temp); // Free the memory of the deleted node
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function to demonstrate the linked list operations
int main() {
    struct Node* head = NULL;

    // Inserting nodes
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    printf("Linked List after inserting nodes:\n");
    displayList(head);

    // Deleting a node
    deleteNode(&head, 20);
    printf("Linked List after deleting node with value 20:\n");
    displayList(head);

    // Free remaining nodes
    deleteNode(&head, 30);
    deleteNode(&head, 10);

    return 0;
}