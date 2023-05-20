
#include <stdio.h>
#define MAX_SIZE 100
int size = 0;
int arr[MAX_SIZE];
void insert(int element, int position) {
 if (size == MAX_SIZE) {
 printf("Error: Array is full\n");
 return;
 }
 if (position < 0 || position > size) {
 printf("Error: Invalid position\n");
 return;
 }
 for (int i = size; i > position; i--) {
 arr[i] = arr[i - 1];
 }
 arr[position] = element;
 size++;
}
void delete(int position) {
 if (position < 0 || position >= size) {
 printf("Error: Invalid position\n");
 return;
 }
 for (int i = position; i < size - 1; i++) {
 arr[i] = arr[i + 1];
 }
 size--;
}
int main() {
 insert(10, 0);
 insert(11, 1);
 insert(12, 2); 
 insert(13, 3);
 insert(14, 4);
 insert(15, 5);
 printf("Array after inserting elements: ");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 delete(0);
 delete(4);
 printf("Array after deleting elements: ");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 return 0;
}

