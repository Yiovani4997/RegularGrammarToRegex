#include "main.h"

int main(){
    FILE *grammar = fopen("gramatica.txt", "r");
    if(grammar == NULL){
        perror("Error openning the file");
        return EXIT_SUCCESS;
    }
    Node *head = createLinkedList(grammar);

    fclose(grammar);

    printList(head);

    freeLinkedList(head);

    return EXIT_SUCCESS;

}