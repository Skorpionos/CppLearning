#pragma once

#include <string>
#include <memory>

class Player;

typedef std::shared_ptr<Player> SharedPlayer;

class Player
{
public:
    Player(const std::string& name = "Unknown", uint16_t yearOfBirth = 2001);
    virtual ~Player() = default;

    Player(const Player&) = delete;
    Player& operator=(const Player&) = delete;

    virtual void Info();


public:
    const std::string& GetName() const;
    void SetName(const std::string& name);

    uint16_t GetAge() const;
    void SetAge(uint16_t Age);

private:
    std::string m_Name;
    std::uint16_t m_YearOfBirth;
};




