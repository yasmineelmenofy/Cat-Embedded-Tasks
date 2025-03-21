#ifndef S_LINKEDLIST_H_INCLUDED
#define S_LINKEDLIST_H_INCLUDED
typedef int Data_Element;
typedef struct node{
Data_Element data;
struct node *link;
}node;

node* Add_ToEmpty(node* head, Data_Element data);
node* Insert_AtEnd(node* ptr, Data_Element data);
node* Insert_Atbegin(node* head, Data_Element data);
void Insert_AtPosition(node* head, Data_Element data, int pos);
void Del_NodeAtPos(node** head, int pos);
node* Del_FirstNode(node* head);
node* Del_Lastnode(node* head);
node* Del_EntireList(node* head);
void print_data(node* head);
void Count_Nodes(node* head);
node* Reverse_List(node* head);
int get_element(node *head, int pos,Data_Element *element);

#endif
