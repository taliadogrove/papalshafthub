#include <string>
#include <vector>

void text_contains() {
    std::string text = "hidden harbor";
    std::string part = "harbor";
    bool found = false;
    for (std::size_t i = 0; i + part.size() <= text.size(); ++i) {
        bool match = true;
        for (std::size_t j = 0; j < part.size(); ++j) {
            if (text[i + j] != part[j]) { match = false; break; }
        }
        if (match) { found = true; break; }
    }
    (void)found;
}

void arithmetic_sum() {
    int first = 3, diff = 4, count = 9;
    int last = first + diff * (count - 1);
    int total = (first + last) * count / 2;
    (void)total;
}

void sum_odds() {
    int acc = 0;
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 != 0) acc += i;
    }
    (void)acc;
}

void count_zeros() {
    int n = 102030;
    int zeros = 0;
    while (n > 0) { if (n % 10 == 0) zeros += 1; n /= 10; }
    (void)zeros;
}

extern "C" int hidden_grove();
extern "C" void lunar_fjord();
extern "C" void hidden_harbor();
extern "C" void noble_thicket();
extern "C" void prime_marble();

int main() {
    text_contains();
    arithmetic_sum();
    sum_odds();
    count_zeros();
    lunar_fjord();
    hidden_harbor();
    noble_thicket();
    prime_marble();
    return hidden_grove();
}
