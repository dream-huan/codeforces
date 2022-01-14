// #include<bits/stdc++.h>
// using namespace std;

// class animals{
//     public:
//     virtual ~animals(){
//         cout<<"animals destyod"<<"\n";
//     }
//     virtual void call(){
//         cout<<"嗷嗷"<<"\n";
//     }
//     virtual void Catch(){
//         cout<<"抓住了食物"<<"\n";
//     }
//     void eat(animals* x){
//         x->call();//听到主人的声音表示回应
//         x->Catch();
//     }
// };

// class cat: public animals{
//     public:
//     ~cat(){
//         cout<<"cat destyod"<<"\n";
//     }
//     void call(){
//         cout<<"喵喵"<<"\n";
//     }
// };

// /* template <typename T> string s(T a,T b){
//     return to_string(sizeof(a)+sizeof(b));
// } */

// int main(){
//     animals* cow=new animals();
//     animals* c=new cat();
//     c->eat(c);
//     cow->eat(cow);
//     delete c;
//     delete cow;
//     /* int a=1,b=1;
//     cout<<s(a,b)<<endl;
//     string e="a",f="b";
//     cout<<s(e,f)<<endl; */
//     /* animals cow;
//     cat c;
//     cow.call(); 
//     c.call(); */
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// void Print(int (*matrix)[10]){
//     for(int i=0;i<10;i++){
//         for(int j=0;j<10;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     int matrix1[10][10];
//     int *matrix2[10];
//     int (*matrix3)[10];
//     for(int i=0;i<10;i++) for(int j=0;j<10;j++) matrix1[i][j]=i;
//     // for(int i=0;i<10;i++) matrix2[i]=nullptr;
//     for(int i=0;i<10;i++) for(int j=0;j<10;j++) matrix3[i][j]=i;
//     Print(matrix1);
//     // for(int i=0;i<10;i++) cout<<matrix2[i]<<"\n";
//     Print(matrix3);
//     return 0;
// }


/* #include<bits/stdc++.h>
using namespace std;

class Graphics{
    int a,b;
    public:
    Graphics(){};
    Graphics(int a,int b){
        this->a=a;
        this->b=b;
    }
    virtual ~Graphics(){
        cout<<"该图形已销毁"<<"\n";
    }
     int getarea(){
        return a*b;
    }
};

class Triangle:public Graphics{
    int a,b;
    public:
    Triangle(int a,int b){
        this->a=a;
        this->b=b;
    }
    ~Triangle(){
        cout<<"该三角形已销毁"<<"\n";
    }
    int getarea() {
        return a*b/2;
    }
};
// 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    Graphics* rectangular=new Graphics(4,2);
    cout<<rectangular->getarea()<<"\n";
    delete rectangular;
    Graphics* t=new Triangle(4,2);
    cout<<t->getarea()<<"\n";
    delete t;
    return 0;//wwsww
} */

/* #include<bits/stdc++.h>
using namespace std;


class Animal
{
public:
virtual void eat() { std::cout << "I'm eating generic food."; }
};
 
class Cat : public Animal
{
public:
void eat() { std::cout << "I'm eating a rat."; }
};

void func(Animal *x){x->eat();};

int main(){
    Animal *animal = new Animal;
    Cat *cat = new Cat;
    // animal->eat(); // outputs: "I'm eating generic food."
    // cat->eat();    // outputs: "I'm eating a rat."
    func(animal);
    func(cat);
    return 0;
} */

#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

class A{
public:
    virtual void f()
    {
        cout << "A" << endl;
    }

    A(){
        _x=1;
    }
    

public:
    int _x=0;
};

class B : public A{
public:
    void f()
    {
        cout << "B" << endl;
    }

public:
    int _x;
};

void func(A a){return a.f();};

void test1()
{
    A a;
    A *b=new A;
    // cout<<a<<endl;
    cout<<b<<endl;
    cout<<b->_x<<endl;
    // int *c=new int;
    // int d;
    // cout<<c<<" "<<d<<endl;
    cout<<a._x<<endl;
    // B b;
    // func(b);
}

int main(){
    test1();
    
}

//内联函数