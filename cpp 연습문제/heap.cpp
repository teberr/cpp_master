#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX_SIZE 100
//max_heap �̹Ƿ� ū���� ���� �;� �Ѵ�. 
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
		if(p->data[child+1]>p->data[child]){//�θ��� �ڽ��� ���� ���� ������ ��� �� ū �� �� 
			child++;
		}
		if(temp>=p->data[child])//temp ��ġ�� ã�Ҵٸ� ���� �� 
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
