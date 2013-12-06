/*

  linked_list.cpp

  Your Name: Sheefali Tewari

  Your Collaborators:

 */
#include <iostream>
#include <string>
#include "linked_list.h"

using namespace std;

node* init_node(int data) {
  node* n = new node;
  n->data = data;
  n->next = NULL;
  return n;
}

/*
 * Study this function. We use a cursor to cruise around this data
 * structure. All of the rest of the function you have to implement
 * look a lot like this.
 */ 
void report(node* head) {
  node* cursor = head;
  cout << "[ ";
  while (cursor != NULL) {
    cout << cursor-> data << ", ";
    cursor = cursor-> next;
  }
  cout << " ]" << endl;
}

void append_data(node** head_ptr, int data) {
  append(head_ptr, init_node(data));
}

void append(node** head_ptr, node* new_node) {
  node *cursor = *head_ptr;
  if (cursor == NULL) {
    *head_ptr = new_node;
} else {
  while (cursor->next != NULL) {
    cursor = cursor->next;
  }
  cursor->next = new_node;
  }
}

void insert_data(node** head_ptr, int offset, int data) {
  insert(head_ptr, offset, init_node(data));
}

void insert(node** head_ptr, int offset, node* new_node) {
  // implement me

  if (*head_ptr == NULL) *head_ptr = new_node;

  else if (offset <0);
  else if (offset == 0){

    node *cursor = *head_ptr;
    cursor -> next = new_node;
    new_node -> next = *head_ptr;
    *head_ptr = new_node;
  }
  else {
    node *cursor = *head_ptr;
    int count = 0;
    while (cursor != NULL){
        if (count == offset -1){
            break;
  } 
      cursor = cursor -> next;
      count++;
    }
    cursor -> next = new_node;
    new_node -> next = *head_ptr;
  }
}

void remove(node** head_ptr, int offset) {
  if (*head_ptr == NULL) { 
    return;
  } else { 
    if (offset == 0) {
      node* first = *head_ptr;
      *head_ptr = first->next; 
      delete first; 
    } else {
      int count = 0;
      node* cursor = *head_ptr;
      while (cursor != NULL && count < (offset - 1)) {
        cursor = cursor->next; 
        count = count + 1; 
      }
      if (cursor != NULL && count == (offset - 1)) {
  if (cursor->next == NULL) {
    return;
  }
  node* doomed = cursor->next;
  cursor->next = cursor->next->next;
  delete doomed; 
      }
    }
  }
}

int size(node* head) {
  /* int count = 0;
  node* cursor = head;
  while(cursor !=NULL){
    count = count + 1;
    cursor = cursor->next;
  }
  cout << "cursor value: " << endl;
  return  count;
*/
  if (head == NULL) return 0;
  return 1+ size(head->next);
}


