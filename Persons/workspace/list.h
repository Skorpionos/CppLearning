#ifndef LIST_H
#define LIST_H

#include <iostream>

class Person
{

private:
    std::string m_Name;
    unsigned int m_Birthday;

public:
    Person() {}
    Person(std::string name, unsigned int age): m_Name(name), m_Birthday(age) {}

    void MakeYounger(const unsigned int n);
    Person operator+=(const unsigned int n);
    Person operator+(const unsigned int n);

    friend Person operator+(const unsigned int n, const Person& person);
    friend std::ostream& operator<<(std::ostream& os, const Person& person);

    std::string Name() const;
    void setName(const std::string &Name);
    unsigned int Birthday() const;
    void setBirthday(unsigned int Birthday);
};

struct Node
{
    Person data;
    Node* next = nullptr;

    Node(Person person): data(person) {}

    friend std::ostream& operator<<(std::ostream& os, const Node& node);
};

class List
{
public:
    List();
    ~List();

    unsigned int size() const;

    Node *First() const;

    Node* Insert(const Person& person);
    bool Delete(const Node* delNode);

    void Visit(void (*pf)(Node* node));

    friend std::ostream& operator<<(std::ostream& os, const List& list);

private:
    unsigned int m_size=0;

    Node* m_first = nullptr;
    Node* m_last = nullptr;
};

void Add1(Node* node);

class Line
{
public:
    std::string text = "- - - - -";
    friend std::ostream& operator<<(std::ostream& os, Line line) {os << line.text << std::endl;}
};


#endif // LIST_H
