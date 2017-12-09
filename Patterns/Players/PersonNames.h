#pragma once

#include <string>
#include <vector>

namespace persons
{

static const std::vector<std::string> Names = {"Alexey",
                                               "Oleg",
                                               "Nikolay",
                                               "Evgeny",
                                               "Sergey",
                                               "Petr",
                                               "Andrey",
                                               "Alexander"};

static const std::vector<std::string> Surnames = {"Petrov",
                                                  "Ivanov",
                                                  "Sergeev",
                                                  "Nikolaev",
                                                  "Smirnov",
                                                  "Popov",
                                                  "Kuznetsov",
                                                  "Sokolov",
                                                  "Vasiliev",
                                                  "Mihailov",
                                                  "Novikov",
                                                  "Fedorov",
                                                  "Morozov",
                                                  "Volkov",
                                                  "Alexeev",
                                                  "Lebedev",
                                                  "Semenov",
                                                  "Egorov"};

static std::string GetRandomFullName()
{
    auto nameIndex = rand() % Names.size();
    std::string fullName = Names[nameIndex];

    auto surnameIndex = rand() % Surnames.size();
    fullName += " " + Surnames[surnameIndex];

    return fullName;
}

} // namespace persons