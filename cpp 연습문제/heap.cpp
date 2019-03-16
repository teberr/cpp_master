#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 100
//max_heap 이므로 큰것이 위로 와야 한다. 
typedef struct Heapnode{
	int data[MAX_SIZE];
	int size;
}heap;

void init(heap *p){
	p->size=0;
}

void print_heap(heap * p){
	for(int i=1;i<=p->size;i++){
		printf("%d ",p->data[i]);
	}
}
void insert_node(heap *p,int data){
	int i=++p->size;
	p->data[i]=data;
	int temp;
	
	while(i!=1 && p->data[i]>p->data[i/2] ){
		temp=p->data[i];
		p->data[i]=p->data[i/2];
		p->data[i/2]=temp;
		i/=2;
	}
	printf("successfully inserted : %d\n",data);
}

int delete_node(heap*p){
	int item=p->data[1];
	int temp=p->data[p->size];
	p->size--;
	int parent=1;
	int child=2;
	
	while(child<=p->size){
		if(p->data[child+1]>p->data[child]){//부모의 자식중 에서 왼쪽 오른쪽 노드 중 큰 값 고름 
			child++;
		}
		if(temp>=p->data[child])//temp 위치를 찾았다면 정렬 끝 
		break;
		
		p->data[parent]=p->data[child];
		parent=child;
		child=child*2;
		
		
	}
	p->data[parent]=temp;
	
	return item;	
}
int main(void){
	heap p;
	init(&p);
	srand(time(NULL));
	int random;
	for(int i =0;i<10;i++){
	
	random=rand()%100+1;
	insert_node(&p,random);
}
	for(;p.size;){
		printf("%d ",delete_node(&p));
	
	}
	
	return 0;
}
