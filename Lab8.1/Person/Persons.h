#pragma once
#include "Persons.h"

class Persons {
public:
    Persons(const std::string& name, int age);
    ~Persons();

    friend bool operator==(const Persons& left, const Persons& right);
    friend bool operator!=(const Persons& left, const Persons& right);
    friend bool operator<(const Persons& left, const Persons& right);
    friend bool operator>(const Persons& left, const Persons& right);

private:
    std::string mFirstName;
    int mAge;
};

