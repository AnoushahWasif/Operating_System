Task 1:

In this code shared memory is used. Share memory provides an efficient way of communication via the sharing the data that resides in memory.

![image](https://user-images.githubusercontent.com/75376557/209836816-d5777576-48ae-4345-9d7e-2f1e63f76bf0.png)

The Shared memory can be accessed in a non-serial (random) manner. It means that semaphore or another synchronization method must be used to coordinate access to shared memory segments.

•	shmget is used the create and gain access to an existing segment.

•	shmctl is used to obtain the status of a memory segment, set permissions, and remove a shared memory segment.

•	shmat and shmdt are used to attach and detach shared memory segments.

•	mmap system call is used to map the virtual memory space of a process to a file. It is very useful since the data is in a file, and it won’t lose after the process exists.

Semaphores are to be shared by processes that are unrelated to each other. This means that they need to have some means of coordinating their access to the same semaphore. The way this is done is for all processes which will use the semaphore to exchange a shared key value.

Task 2:

1.	When sleep was 1 

![image](https://user-images.githubusercontent.com/75376557/209836914-4b5daeca-a94d-409d-9fbe-e6485e23a535.png)

As we can see that the item is consumed and produced one after the other.

2.	When parent sleep was 2

![image](https://user-images.githubusercontent.com/75376557/209836950-610a98af-b30c-413d-8390-4d50aeb1705a.png)

As you can see the production of the item was happening in rapid succession but the item was being consumed after the wait of 2 seconds. It’s because the sleep of 2 caused the item to go to waiting stage. Thus, the wait

3.	When parent and child sleep was 2

![image](https://user-images.githubusercontent.com/75376557/209836996-197dc948-9c6c-4a20-b5d6-d315d4af3c58.png)


As you can see when we put both processes to sleep 2, they will give the same output as when the sleep was 1.
