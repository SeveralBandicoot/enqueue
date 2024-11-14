/*

Enqueue

11/9/24

@ AJ Enrique Arguello 

Objectives: 

What is enqueue? Does it add or delete values? To the front or the back?

Create an STL example using integers for Both a Queue and a Stack.

Fill both structures with 5 numbers, and the display the values using a Function

pop each container twice and redisplay. How are they different? Explain

*/

#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void display(queue<int> queueNumbers, stack<int> stackNumbers); // pass queueNumbers and stackNumbers through
int main() {
    queue<int> queueNumbers; 
    stack<int> stackNumbers;
    // push numbers to queue
    queueNumbers.push(10);
    queueNumbers.push(20);
    queueNumbers.push(30);
    queueNumbers.push(40);
    queueNumbers.push(50);
    // push numbers to stack
    stackNumbers.push(10);
    stackNumbers.push(20);
    stackNumbers.push(30);
    stackNumbers.push(40);
    stackNumbers.push(50);

    queueNumbers.pop();
    queueNumbers.pop();
    stackNumbers.pop();
    stackNumbers.pop();

    display(queueNumbers, stackNumbers);

    return 0;

}

void display(queue<int> queueNumbers, stack<int> stackNumbers) {
    cout << "Queue Display: " << endl; // display contents of queue
    while (!queueNumbers.empty()) {
        cout << queueNumbers.front() << endl;
        queueNumbers.pop();
    }

    cout << "\n\nStack Display" << endl; // display contents of stack
    while (!stackNumbers.empty()) {
        cout << stackNumbers.top() << endl;
        stackNumbers.pop();
    }
}