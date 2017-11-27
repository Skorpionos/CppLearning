#pragma once

#include <string>
#include <memory>

class Player;

typedef std::shared_ptr<Player> SharedPlayer;
constexpr uint8_t ageDefault = 16;

class Player
{
public:
    Player(const std::string& name = "Unknown", uint8_t age = ageDefault);
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
    std::uint8_t m_YearOfBirth;
};



