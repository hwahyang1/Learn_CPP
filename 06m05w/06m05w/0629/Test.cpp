#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename Iter>
void Print_0629_1(Iter begin, Iter end) {
    while (begin != end) { std::cout << *begin << " "; begin++; }
    std::cout << std::endl;
}

struct User_0629_1 {
    string name;
    int level;
    User_0629_1(string name, int level) : name(name), level(level) { }
    bool operator==(const User_0629_1& user) const {
        if (name == user.name && level == user.level) return true;
        return false;
    }
};

class Party_0629_1 {
    vector<User_0629_1> users;   // user list
public:
    bool add_user(string name, int level) {
        User_0629_1 new_user(name, level);
        if (std::find(users.begin(), users.end(), new_user) != users.end())
            return false;
        users.push_back(new_user);  //add
        return true;
    }

    bool can_join_dungeon() {
        return all_of(users.begin(), users.end(), [](User_0629_1& user) { return user.level >= 15; });
    }

    bool can_use_special_item() {
        return any_of(users.begin(), users.end(), [](User_0629_1& user) { return user.level >= 19; });
    }
};

int main_0629_1() {
    Party_0629_1 party;
    party.add_user("철수", 15);
    party.add_user("영희", 18);
    party.add_user("민수", 12);
    party.add_user("수빈", 19);

    cout << boolalpha;

    cout << "던전 입장 가능 ? " << party.can_join_dungeon() << endl;
    cout << "아이템 사용 가능 ? " << party.can_use_special_item() << endl;

    return 0;
}