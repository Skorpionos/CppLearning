#include "list.h"
#include <iostream>

std::string Person::Name() const
{
    return m_Name;
}

void Person::setName(const std::string &Name)
{
    m_Name = Name;
}

unsigned int Person::Birthday() const
{
    return m_Birthday;
}

void Person::setBirthday(unsigned int Birthday)
{
    m_Birthday = Birthday;
}

void Person::MakeYounger(const unsigned int n)
{
    m_Birthday += n;
}

Person Person::operator+=(const unsigned int n)
{
    m_Birthday += n;
    return *this;
}

Person Person::operator+(const unsigned int n)
{
    m_Birthday += n;
    return *this;
}

Person operator+(const unsigned int n, const Person& person)
{
    Person pers = person;
    pers += n;
    return pers;
}
\
void Add1(Node *node)
{
    node->data += 1;
}

List::List() {}

List::~List() {}

unsigned int List::size() const
{
    return m_size;
}

Node* List::First() const
{
    return m_first;
}

Node* List::Insert(const Person& person)
{
    Node* node = new Node(person);

    if (!m_first)
        m_first = node;
    else
        m_last->next = node;

    m_last = node;

    ++m_size;

    return m_last;
}

bool List::Delete(const Node* delNode)
{

    if (!m_first)
        return false;

    if (m_first == delNode)
    {
        m_first = m_first->next;

       delete delNode;

        --m_size;
        return true;
    }

    Node* nodeBefore = m_first;

    while (nodeBefore->next != delNode)
    {
        if (!nodeBefore->next)
            return false;

        nodeBefore = nodeBefore->next;
    }

    nodeBefore->next = nodeBefore->next->next;

    delete delNode;

    --m_size;

    return true;
}

void List::Visit(void (*pf)(Node* node))
{
    Node* node = m_first;
    while (node)
    {
        pf(node);
        node = node->next;
    }
}

std::ostream&  operator<<(std::ostream& os, const Person& person)
{
    os << person.m_Name << ", " << (int) person.m_Birthday << std::endl;
    return os;
}

std::ostream& operator<<(std::ostream& os, const Node& node)
{
    os << "<" << &node << "> "
          << node.data.Name() << ", " << (int) node.data.Birthday()
          << "; &=" << node.next << std::endl;
    return os;
}

std::ostream& operator<<(std::ostream& os, const List& list)
{
    os << "<" << &list << "> [List of " << list.size() << " elements" << "]:" << std::endl;

    Node* node = list.First();
    while (node)
    {
        os << *node;
        node = node->next;
    }
}
