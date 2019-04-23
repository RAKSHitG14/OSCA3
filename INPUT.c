#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>

struct process{
	int priority;
	int burst_time;
	int pid;
	int waiting_time;
	int turnaround_time;
	int remaining_time;
	int arrival_time;
};

void delay();
void getInput();
void calcWaitingTime(struct process *q,int);
void calcTurnAroundTime(struct process *q,int);
void printQueue(struct process *q,int size);
void getInput(){
	printf("\n Total Number of Process:\t");
	scanf("%d",&n);
	//Allocatig Memory
	q1 = (struct process *)malloc(n*sizeof(struct process));
	q2 = (struct process *)malloc(n*sizeof(struct process));
	q3 = (struct process *)malloc(n*sizeof(struct process));
	for(int i=0;i<n;i++){
		struct process p;
		printf("\n\t\tProcess %d\n=============================================\n\n",i+1);
		p.arrival_time = (rand())%(n+1);
		printf("PId:\t");
		scanf("%d",&p.pid);
		printf("Priority (1-9):\t");
		scanf("%d",&p.priority);
		printf("\nBurst Time: %d\t",p.burst_time);
		scanf("%d",&p.burst_time);
		p.remaining_time = p.burst_time;
		if(p.priority>0 && p.priority<=3){
			q1[q1_n++]  = p;
		}else if(p.priority>3 && p.priority<=6){
			q2[q2_n++] = p;
		}else{
			q3[q3_n++] = p;
		}
	}
}
