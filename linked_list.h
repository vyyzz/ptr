#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H
#include <iostream> 

struct node {
    node *next;
    node *jump;
    int data;
}; // Add a semicolon here

struct node *build_new_linked_list(int total_new_elements);
int get_linked_list_data_item_value(struct node *start, int node_number, int total_elements);
void print_linked_list_by_jumpers(struct node *start, int total_elements);
void double_jumpers(struct node *start, int total_elements);
void delete_linked_list(struct node *&start);




#endif // _LINKED_LIST_H
