#include<stdio.h> 
#include<stdlib.h>
#include<unistd.h> 
#include<pthread.h>
//A normal C function that is executed as a thread //when its name is specified in pthread_create()

void *nyThreadFun(void *vargp){
 sleep(1);
 printf("Process Thread ts being created in"); 
 return NULL;
}
int main(){

 pthread_t thread_id; 
 printf("Before Creation of Thread\n");
 pthread_create(&thread_id, NULL, nyThreadFun, NULL); 
 pthread_join(thread_id, NULL); 
 printf("After Creation of Thread\n"); 
 exit(0);
 }
