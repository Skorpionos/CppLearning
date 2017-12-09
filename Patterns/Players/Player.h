#pragma once

#include <string>
#include <memory>
#include <ostream>

class Player;

typedef std::shared_ptr<Player> SharedPlayer;

constexpr uint8_t YoungPlayerAge = 16;

constexpr uint8_t CareerPeriod = 20;

class Player
{
public:
    explicit Player(const std::string& name = "Unknown", uint8_t age = YoungPlayerAge);
    friend std::ostream& operator<<(std::ostream& os, const Player& player);
    virtual ~Player() = default;

    Player(const Player&) = delete;
    Player& operator=(const Player&) = delete;

    virtual void Info();

public:
    size_t GetId() const;

    const std::string& GetName() const;
    void SetName(const std::string& name);

    uint8_t GetAge() const;
    void SetAge(uint8_t age);

    static size_t m_Counter;

private:
    std::size_t m_Id;
    std::string m_Name;
    std::uint16_t m_YearOfBirth;
};



