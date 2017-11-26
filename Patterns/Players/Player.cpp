#include "Player.h"

#include <iostream>

Player::Player(const std::string& name, uint16_t yearOfBirth)
        : m_Name(name),
          m_YearOfBirth(yearOfBirth) { }

const std::string& Player::GetName() const
{
    return m_Name;
}

void Player::SetName(const std::string& name)
{
    m_Name = name;
}

uint16_t Player::GetAge() const
{
    return 2017 - m_YearOfBirth;
}

void Player::SetAge(uint16_t Age)
{
    m_YearOfBirth = Age;
}
void Player::Info()
{
    std::cout << "Player: "
              << GetName()
              << ", "
              << GetAge()
              << " age"
              << std::endl;
}
