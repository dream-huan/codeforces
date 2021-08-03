#include<bits/stdc++.h>
#include<thread>
#include <unistd.h>
using namespace std;

void thread1(){
    for (int i = 0; i < 5; i++)
    {
        cout <<"Thread 01 is working ！" << endl;
    }
}

void thread2(){
    for (int i = 0; i < 5; i++)
    {
        cout <<"Thread 02 is working ！" << endl;
    }
}

int main(){
    thread task1(thread1);
    thread task2(thread2);
    task1.join();
    task2.join();
    for(int i=0;i<5;i++){
        cout <<"Main thread is working ！" << endl;
    }
    return 0;
}