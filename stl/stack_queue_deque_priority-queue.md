### Stack

```cpp

#include <iostream>
#include <stack> //last in, first out
using namespace std;

int main(void)
{
    stack <int> stack_inp;

    stack_inp.push(88);
    stack_inp.push(66);
    stack_inp.push(44);
    stack_inp.push(22);

    while(!stack_inp.empty()) {
        cout << stack_inp.top() << "  ";
        stack_inp.pop();
    }

    cout << endl;
    return 0;
}

/*
22  44  66  88
*/

```

### Queue

```cpp

#include <iostream>
#include <queue> //first in, first out
using namespace std;

int main(void)
{
    queue <int> queue_inp;

    queue_inp.push(5);
    queue_inp.push(10);
    queue_inp.push(15);
    queue_inp.push(20);
    queue_inp.push(25);

    while(!queue_inp.empty()) {
        cout << queue_inp.front() << "  ";
        queue_inp.pop(); //removing front element
    }

    cout << endl;
    return 0;
}

/*
5  10  15  20  25
*/

```

### Deque

```cpp

#include <iostream>
#include <deque> //as it is
using namespace std;

int main(void)
{
    deque <int> deque_inp;

    deque_inp.push_back(5);
    deque_inp.push_back(10);
    deque_inp.push_back(15);
    deque_inp.push_back(20);
    deque_inp.push_back(25);

    cout << "Accessing all the elements." << endl;
    for(int i = 0; i < deque_inp.size(); i++) {
        cout << deque_inp[i] << "  ";
    }

    cout << endl;

    cout << "Accessing the first and the last element." << endl;
    cout << deque_inp.front() << "  " << deque_inp.back() << endl;

    cout << endl;
    return 0;
}

/*
Accessing all the elements.
5  10  15  20  25  
Accessing the first and the last element.
5  25
*/

```

### Priority Queue

```cpp

#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    priority_queue <int> pq_inp;
    //priority_queue - ascending ordered.

    pq_inp.push(5);
    pq_inp.push(10);
    pq_inp.push(25);
    pq_inp.push(15);
    pq_inp.push(20);

    cout << "Accessing the top/largest value." << endl;
    cout << pq_inp.top() << endl;

    cout << "Printing the values: " << endl;
    while(!pq_inp.empty()) {
        cout << pq_inp.top() << " ";
        pq_inp.pop();
    }

    cout << endl;

    priority_queue <int, vector <int>, greater <int> > pq_two_inp;

    pq_two_inp.push(5);
    pq_two_inp.push(10);
    pq_two_inp.push(25);
    pq_two_inp.push(15);
    pq_two_inp.push(20);

    cout << "Accessing the smallest value." << endl;
    cout << pq_two_inp.top() << endl;

    cout << "Printing the values: " << endl;
    while(!pq_two_inp.empty()) {
        cout << pq_two_inp.top() << " ";
        pq_two_inp.pop();
    }

    cout << endl;

    return 0;
}

/*
Accessing the top/largest value.
25
Printing the values: 
25 20 15 10 5 
Accessing the smallest value.
5
Printing the values: 
5 10 15 20 25
*/

```
