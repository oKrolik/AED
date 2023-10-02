#include "funListStackQueueProblem.h"
#include "cell.h"

FunListStackQueueProblem::FunListStackQueueProblem() {}


//=============================================================================
// Exercise 1: Remove Higher
//=============================================================================
// TODO
list<int> FunListStackQueueProblem::removeHigher(list<int> &values, int x) {
    list<int> l1;
    list<int>::iterator it;
    for(it = values.begin(); it != values.end();) {
        if (*it > x) {
            l1.push_back(*it);
            it = values.erase(it);
        } else {
            it++;
        }
    }
    return l1;
}


//=============================================================================
// Exercise 2: Overlapping Intervals
//=============================================================================
//TODO
list<pair<int,int>> FunListStackQueueProblem::overlappingIntervals(list<pair<int,int>> values) {
    // input: values = {<1,3>, <6,8>, <2,4>, <9,10>}
    // output: result = {<1,4>, <6,8>, <9,10>}
    list<pair<int,int>> res;
    values.sort();
    // values = {<1,3>, <2,4>, <6,8>, <9,10>}
    pair<int,int> it;

    values.erase(values.begin());
    for (auto it1 = values.begin(); it1 != values.end(); it1++) {

    }
    return res;
}


//=============================================================================
// Exercise 4: Binary Numbers
//=============================================================================
// TODO
vector<string> FunListStackQueueProblem::binaryNumbers(int n) {
    vector<string> res;
    return res;
}


//=============================================================================
// Exercise 5: Calculate Span
//=============================================================================
//TODO
vector<int> FunListStackQueueProblem::calculateSpan(vector<int> prices) {
    vector<int> res;
    return res;
}


//=============================================================================
// Exercise 7: Knight Jumps
//=============================================================================
//TODO
int FunListStackQueueProblem::knightJumps(int initialPosx, int initialPosy, int targetPosx, int targetPosy, int n) {
    return -1;
}
