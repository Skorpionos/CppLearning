#include "Player.h"
#include <iostream>

size_t Player::m_Counter = 0;

Player::Player(const std::string& name, uint8_t age)
        : m_Name(name),
          m_YearOfBirth(2017 - age)
{
    m_Id = m_Counter;
    m_Counter++;
}

const std::string& Player::GetName() const
{
    return m_Name;
}

void Player::SetName(const std::string& name)
{
    m_Name = name;
}

uint8_t Player::GetAge() const
{
    return 2017 - m_YearOfBirth;
}

void Player::SetAge(uint8_t age)
{
    m_YearOfBirth = 2017 - age;
}

void Player::Info()
{
    std::cout << "<" << GetId() << "> "
              << "Player: " << GetName() << ", "
              << static_cast<uint16_t>(GetAge()) << " age" << std::endl;
}

size_t Player::GetId() const
{
    return m_Id;
}
