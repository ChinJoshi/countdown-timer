#include <chrono>
#include <thread>
#include <iostream>

class Timer {
public:
    void timer(int timeAmt) {
	int* timeAmtPointer = &timeAmt;
	int pointerTo = *timeAmtPointer;
	for (int x = 0; x <= pointerTo; --pointerTo) {
		std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::seconds(1));
		std::cout << "Time Left : " << pointerTo << std::endl;
	}
    }
};

int main() {
    Timer* foo = new Timer;
    int timeAmt;
    std::cout << "Enter how many seconds you would like to count" << std::endl;
    std::cin >> timeAmt;
    foo->timer(timeAmt);
}

