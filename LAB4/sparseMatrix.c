// C program for Sparse Matrix Representation
// using Linked Lists
#include <stdio.h>
#include <stdlib.h>

// Node to represent sparse matrix
struct node
{
    int value;
    int rowPos;
    int columnPos;
    struct node *next;
};
struct node *head, *temp = NULL;
// Function to create new node
void createNewNode(int nonZeroElement,
                   int rowIndex, int columnIndex)
{

    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = nonZeroElement;
    newNode->rowPos = rowIndex;
    newNode->columnPos = columnIndex;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        temp = newNode;
    }
    else
    {
        temp->next = newNode;
        temp = newNode;
    }
}

// This function prints contents of linked list
void PrintList()
{
    struct node *temp, *r, *s;
    temp = r = s = head;

    printf("row position: ");
    while (temp != NULL)
    {
        printf("%d ", temp->rowPos);
        temp = temp->next;
    }
    printf("\n");

    printf("column_postion: ");
    while (r != NULL)
    {
        printf("%d ", r->columnPos);
        r = r->next;
    }
    printf("\n");
    printf("Value: ");
    while (s != NULL)
    {
        printf("%d ", s->value);
        s = s->next;
    }
    printf("\n");
}

// Driver of the program
int main()
{
    // Assume 4x5 sparse matrix
    int sparseMatric[4][5] =
        {
            {0, 0, 3, 0, 4},
            {0, 0, 5, 7, 0},
            {0, 0, 0, 0, 0},
            {0, 2, 6, 0, 0}};

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            if (sparseMatric[i][j] != 0) // Pass only those values which are non - zero
                createNewNode(sparseMatric[i][j], i, j);

    PrintList();

    return 0;
}
