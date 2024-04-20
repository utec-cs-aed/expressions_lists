#include <iostream>
#include "solution.h"
#include "tester.h"

using namespace std;

void testList(List<int>* list){   
    cout<<"*** Testing: "<<list->name()<<"  *******"<<endl; 
    ASSERT(list->is_empty() == true, "The function is_empty is not working");
    ASSERT(list->size() == 0, "The function size is not working");    
    list->push_front(5);
    list->push_front(10);
    ASSERT(list->pop_front() == 10, "The function push_front/pop_front is not working");
    list->push_back(20);
    list->push_back(15);
    ASSERT(list->pop_back() == 15, "The function push_back/pop_back is not working");
    list->push_back(30);
    list->push_back(8);
    list->insert(12, 2);
    ASSERT((*list)[2] == 12, "The operator [] is not working");    
    list->push_back(10);
    list->push_front(3);
    ASSERT(list->is_sorted() == false, "The function is_sorted is not working");
    list->sort();
    ASSERT(list->is_sorted() == true, "The function sort is not working");
    list->clear();
    ASSERT(list->is_empty() == true, "The function clear is not working");
    delete list;
}

void testExpressions()
{
    cout<<"*** Testing: Arithmetic Expression Solver *******"<<endl; 
    string expr="";
    expr = "5 + 8 / 2";
    ASSERT(solve(expr).result == 9, "The function evaluate is not working");

    expr = "(7 + 8) / 2";
    ASSERT(solve(expr).result == 7.5, "The function evaluate is not working");

    expr = "(6 + 8) / (5 + 2)";
    ASSERT(solve(expr).result == 2, "The function evaluate is not working");

    expr = "(6 + 8) / (5 + 2) * 12";
    ASSERT(solve(expr).result == 24, "The function evaluate is not working");

    expr = "(7 + 8) / 2.5";
    ASSERT(solve(expr).result == 6, "The function evaluate is not working");
    
    expr = "9.9 / 3 * 2";
    ASSERT(solve(expr).result == 6.6, "The function evaluate is not working");

    expr = "(6 + 8 / (5 + 2) * 3";
    ASSERT(solve(expr).error == true, "The function evaluate is not working");

    expr = "(6 + 8) / (5 + 2) * 3 +";
    ASSERT(solve(expr).error == true, "The function evaluate is not working");

    expr = "(6 + 8) 10 / (5 + 2) * 3 +";
    ASSERT(solve(expr).error == true, "The function evaluate is not working");
}

int main()
{    
    test(new ForwardList<int>());
    test(new DoubleList<int>());
    test(new CircularList<int>());
    testExpressions();
    return 0;
}
