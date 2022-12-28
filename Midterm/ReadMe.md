Question 1: Answer these questions using system calls on the terminal.

1: Delete a folder from your files

![image](https://user-images.githubusercontent.com/75376557/209837648-02ead8cc-f57f-40c7-8679-2dda74172ba6.png)
 
2: Move file from one place to another
 
![image](https://user-images.githubusercontent.com/75376557/209837674-ae93c550-7866-4d54-92d2-2e69fae6d681.png)

![image](https://user-images.githubusercontent.com/75376557/209837692-f5405cba-a318-4e1b-9d8d-353bf00d70cc.png)

3: Run a command in an Administrative mode 
 
 ![image](https://user-images.githubusercontent.com/75376557/209837718-0a1f6de8-e896-4f80-b9b5-a88e74df2d54.png)

4: List the running process.
 
 ![image](https://user-images.githubusercontent.com/75376557/209837743-27c3c1ed-0e45-4889-8b5d-0ccf55249933.png)

5: How to end a process in the OS.

![image](https://user-images.githubusercontent.com/75376557/209837760-43fc54d2-48ff-488c-bafc-a63803448ae1.png)
 
6: Update the Ubuntu software repository.

sudo apt-get update

7: What is the difference between exit() and atexit()? What do they do?

There is one difference between exit() and _Exit() and it is that exit() function           performs some cleaning before termination of the program like connection termination, buffer flushes etc.
exit() terminates the calling process without executing the rest code which is after the exit() function.


Question 2: Implement the following algorithm and write its Output using different data values.

ALGORITHM: Which algorithm is this, write Name?

Step 1: Declare a structure and then declare the variables.

Step 2: Declare the variable i,j as integer,totwtime and totttime is equal to zero. 

Step 3: Get the value of „n‟ assign pid as I and get the value of p[i].btime.

Step 4: Assign p[0] wtime as zero and tot time as btime and inside the loop calculate wait time and turnaround time.

Step 5: Compute total wait time and total turnaround time by dividing by total number of process.

Step 6: Print total wait time and total turnaround time. Step 7: Stop the program.

OUTPUT:

This algorithm is FCFS.

The code is given in FirstComeFirstServe.c

![image](https://user-images.githubusercontent.com/75376557/209837938-22c00725-e8fd-423e-a498-4cf918aadeea.png)


Question 3:

Operator: To Do Tasks	
Write Shell Script	
What is the Output

1: + : add two number	read -p "Enter first number: " num1

Run the code of 1.sh
	 
   ![image](https://user-images.githubusercontent.com/75376557/209838233-c23e7e6b-b08d-44e7-9e09-1c60b33db6d6.png)

2: - : make decrement operator	i=10

Run the code of 2.sh

![image](https://user-images.githubusercontent.com/75376557/209838261-69b4bd89-e40b-472b-b6b5-47708f82272d.png)

3: * : Mutiply negative and positive number	

Run the code of 3.sh

![image](https://user-images.githubusercontent.com/75376557/209838325-3d008727-e5e7-4dca-bbaa-a35e721be236.png)

4: /: divide any number by zero	echo Enter a number

Run the code of 4.sh

![image](https://user-images.githubusercontent.com/75376557/209838420-d2c28d73-7407-41e9-8c4d-084897552141.png)

5: Less than: Compare two value	

Run the code of 5.sh	 

![image](https://user-images.githubusercontent.com/75376557/209838519-ce2eccbf-73f8-4f28-abad-6ac7f4fe6186.png)

6: Greater than: Compare two value	

Run the code of 6.sh

![image](https://user-images.githubusercontent.com/75376557/209838577-7e20d06d-46fc-4f3d-9c13-55c87768670f.png)

7: Equality: Compare two value	

Run the code of 7.sh

![image](https://user-images.githubusercontent.com/75376557/209838605-cb2cafc7-c1c1-4073-9467-db7a47dfe307.png)

8: Not equal: Compare two value	

Run the code of 8.sh

![image](https://user-images.githubusercontent.com/75376557/209838687-b809ba80-a42f-4d13-9073-6b2eb9427c7c.png)

9: And: make two simple and gate	

Run the code of 9.sh	 

![image](https://user-images.githubusercontent.com/75376557/209838765-55221975-b238-4c56-9d70-0edd5eb2655a.png)

10: Or: make two input or gate	

Run the code of 10.sh 	 

![image](https://user-images.githubusercontent.com/75376557/209838838-346a7bcc-6475-41e6-a878-d6fcfd891928.png)

11: Not: make 1 input not	

Run the code of 11.sh 
 
![image](https://user-images.githubusercontent.com/75376557/209838918-eacf4c66-4432-4899-9bea-1d8b85ae9c07.png)


Question 4:
Run the code of 4.c 


A.	Write PPID values you are receiving from the for loop?

2519

B.	What has happened when the numbers of the PPID change?

The parent changes the ppid after sleep of 3.

C.	What is the PID of the init process?

27227

Output:
  
  ![image](https://user-images.githubusercontent.com/75376557/209839065-75ae5ac5-9c2a-411a-ab4c-ec654495c86a.png)

Question 5:

Run the code of 5.c


Output:

![image](https://user-images.githubusercontent.com/75376557/209839169-c9378f16-a74a-480d-8fbe-c3abb896f35a.png)

 
