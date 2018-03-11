//create a graph
#include <iostream>
using namespace std;
struct adjacency_list_node
{
	int data;
	node* next;
};
struct adjacency_list
{
	node* head;
};
struct graph{
	int v;
	adjacency_list* array_of_vertices;
};
//to create a new node
adjacency_list_node* newnode(int data)
{
	adjacency_list_node* temp=new adjacency_list_node();
	temp->data=data;
	temp->next=NULL;
		return temp;			//here temp is the new node created
}
//a utility function to create a graph
graph* creategraph(int v)
{
	graph* graph=new graph();
	graph->v=v;
	for(int i=0;i<v;i++)
	graph->array_of_vertices[i]->head=NULL;
	
	return graph;                       
}

void add_edge(graph* graph,int source,int destination)
{
	adjacency_list_node* temp=new adjacency_list_node(destination);
	temp->next=graph->array_of_vertices[source]->head;
	graph->array_of_vertices[source]->head=temp;	
	
	adjacency_list_node* temp=new adjacency_list_node(source);
	temp->next=graph->array_of_vertices[destination]->head;
	graph->array_of_vertices[destination]->head=temp;	
	
}



