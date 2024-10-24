#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int BinaryTree[n];

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &BinaryTree[i]);
    }

    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", BinaryTree[i]);
    }
    printf("\n");

    int node;
    while (1) {
        printf("Enter any node (1 to %d): ", n);
        scanf("%d", &node);
        
        if (node < 1 || node > n) {
            printf("Invalid node. Please enter a node between 1 and %d.\n", n);
            continue;
        }

        if (node == 1) {
            printf("This is the root node.\n");
        } else {
            int parent = (node - 1) / 2;
            printf("The parent node is %d\nThe value of parent node is %d\nThe value of node is %d\n",
                   parent + 1, BinaryTree[parent], BinaryTree[node - 1]);

            int left_child = 2 * (node - 1) + 1;
            int right_child = 2 * (node - 1) + 2;

            if (left_child >= n && right_child >= n) {
                printf("This node has no children.\n");
            } else {
                if (left_child < n) {
                    printf("The left child node is %d and the value at the node is %d\n",
                           left_child + 1, BinaryTree[left_child]);
                } else {
                    printf("This node has no left child.\n");
                }
                if (right_child < n) {
                    printf("The right child node is %d and the value at the node is %d\n",
                           right_child + 1, BinaryTree[right_child]);
                } else {
                    printf("This node has no right child.\n");
                }
            }
        }
        break;
    }

    return 0;
}
