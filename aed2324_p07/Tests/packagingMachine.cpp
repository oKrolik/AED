#include "packagingMachine.h"

PackagingMachine::PackagingMachine(int boxCap): boxCapacity(boxCap)
{}

unsigned PackagingMachine::numberOfBoxes() {
	return boxes.size();
}

unsigned PackagingMachine::addBox(Box& b1) {
	boxes.push(b1);
	return boxes.size();
}

HeapObj PackagingMachine::getObjects() const {
	return this->objects;
}

HeapBox PackagingMachine::getBoxes() const {
	return this->boxes;
}


//=============================================================================
// Exercise 1: Packaging
//=============================================================================
// Subexercise 1.1: Load Objects
//=============================================================================
// TODO
unsigned PackagingMachine::loadObjects(vector<Object> &objs) {
    unsigned loadedCount = 0;
    for(auto it = objs.begin(); it != objs.end(); ++it) {
        if (it->getWeight() <= boxCapacity) {
            objects.push(*it);
            it = objs.erase(it);
            loadedCount++;
        }
        else ++it;
    }
	return loadedCount;
}


//=============================================================================
// Subexercise 1.2: Search Box
//=============================================================================
// TODO
Box PackagingMachine::searchBox(Object& obj) {
    return Box(0);
}



//=============================================================================
// Subexercise 1.3: Pack Objects
//=============================================================================
// TODO
unsigned PackagingMachine::packObjects() {
	return 0;
}


//=============================================================================
// Subexercise 1.4: Box with More Objects
//=============================================================================
// TODO
stack<Object> PackagingMachine::boxWithMoreObjects() const {
    stack<Object> res;
	return res;
}
