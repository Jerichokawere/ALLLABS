#include <iostream>
#include "Persons.h"
#include <string>
Persons::Persons(const std::string& name, int age) : mFirstName(name), mAge(age) {}

Persons::~Persons() {}

bool operator==(const Persons& left, const Persons& right) {
    return left.mFirstName == right.mFirstName;
}

bool operator!=(const Persons& left, const Persons& right) {
    return !(left == right);
}

bool operator<(const Persons& left, const Persons& right) {
    return left.mAge < right.mAge;
}

bool operator>(const Persons& left, const Persons& right) {
    return right < left;
}