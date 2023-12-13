#include "box.h"

Object::Object(unsigned i, unsigned w): id(i), weight(w)
{}

unsigned Object::getID() const {
	return id;
}

unsigned Object::getWeight() const {
	return weight;
}

Box::Box( unsigned cap): capacity(cap), free(cap)
{}

unsigned Box::getCapacity() const {
	return capacity;
}

unsigned Box::getFree() const {
	return free;
}

void Box::addObject(Object& obj) {
	free -= obj.getWeight();
	objects.push(obj);
}

StackObj Box::getObjects() const {
    return objects;
}

unsigned Box::getSize() const {
	return objects.size();
}


//=============================================================================
// Exercise 1: Packaging
//=============================================================================
//TODO
bool Object::operator<(const Object& o1) const {
    return weight < o1.getWeight();
}

//TODO
bool Box::operator<(const Box& b1) const {
    return free > b1.getFree();
}
