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
  if (priority == 1) {
    nav = (fila_pri_1);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_1, temp); 
  }
  if (priority == 2) {
    nav = (fila_pri_2);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_2, temp); 
  }
  if (priority == 3) {
    nav = (fila_pri_3);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_3, temp); 
  }
  if (priority == 4) {
    nav = (fila_pri_4);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_4, temp); 
  }
  if (priority == 5) {
    nav = (fila_pri_5);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_5, temp); 
  }
  if (priority == 6) {
    nav = (fila_pri_6);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_6, temp); 
  }
  if (priority == 7) {
    nav = (fila_pri_7);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_7, temp); 
  }
  if (priority == 8) {
    nav = (fila_pri_8);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_8, temp); 
  }
  if (priority == 9) {
    nav = (fila_pri_9);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_9, temp); 
  }
  if (priority == 10) {
    nav = (fila_pri_10);
    while (nav != NULL) {
      cont++;
      nav = nav->next;
    }
    temp->tid = cont;
    insert(&fila_pri_10, temp); 
  }
}

// invoke the scheduler
void schedule(){
   struct node * nav;

   while (fila_pri_1 != NULL) {
      nav = fila_pri_1;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_1, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_2 != NULL) {
      nav = fila_pri_2;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_2, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_3 != NULL) {
      nav = fila_pri_3;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_3, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_4 != NULL) {
      nav = fila_pri_4;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_4, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_5 != NULL) {
      nav = fila_pri_5;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_5, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }
  while (fila_pri_6 != NULL) {
      nav = fila_pri_6;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_6, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_7 != NULL) {
      nav = fila_pri_7;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_7, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_8 != NULL) {
      nav = fila_pri_8;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_8, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_9 != NULL) {
      nav = fila_pri_9;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_9, nav->task);
            free(nav->task);
            nav = nav_p;
         }
         else {
            remaining(nav->task);
            nav = nav->next;
         }
      }
   }

  while (fila_pri_10 != NULL) {
      nav = fila_pri_10;
      while (nav!=NULL) {
         run(nav->task, QUANTUM);
         nav->task->burst-= QUANTUM;
         if (nav->task->burst <= 0) {
            struct node * nav_p = nav->next;
            finish(nav->task);
            delete(&fila_pri_10, nav->task);
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