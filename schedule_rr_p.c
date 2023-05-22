#include <stdlib.h>
#include <stdio.h>

#include "schedule_rr_p.h"
#include "schedulers.h"
#include "task.h"
#include "list.h"
#include "CPU.h"

// add a task to the list 
void add(char *name, int priority, int burst){
	Task * temp = malloc(sizeof(Task));
	temp->name = name;
	temp->burst = burst;
	temp->priority = priority;
	int cont = 0;
	struct node *nav;

	nav = (fila_pri[priority-1]);
	while (nav != NULL) {
		cont++;
		nav = nav->next;
	}
	temp->tid = cont;
	insert(&fila_pri[priority-1], temp); 
}

// invoke the scheduler
void schedule(){
	struct node * nav;
	for (int i=0; i<MAX_PRIORITY; i++) {
		while (fila_pri[i] != NULL) {
			nav = fila_pri[i];
			while (nav!=NULL) {
				run(nav->task, QUANTUM);
				nav->task->burst-= QUANTUM;
				if (nav->task->burst <= 0) {
					struct node * nav_p = nav->next;
					finish(nav->task);
					delete(&fila_pri[i], nav->task);
					free(nav->task);
					nav = nav_p;
				}
				else {
					remaining(nav->task);
					nav = nav->next;
				}
			}
		}
	}
}