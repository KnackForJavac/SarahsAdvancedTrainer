#include <iostream>
#include <ctime>
#include <Windows.h>

int main() {

	int moves = 0;
	while (true) {

		while (moves < 6) {
		scramble:
			srand((int)time(0));
			int sH = (rand() % 2) + 1;

			if (sH == 1) {
				std::cout << "S";
			}
			else {
				std::cout << "H";
			}

			std::cout << " ";

			int rotation = (rand() % 3) + 1;

			if (rotation == 1) {
				std::cout << "Y";
			}
			else if (rotation == 2) {
				std::cout << "Y'";
			}
			else if (rotation == 3) {
				std::cout << "Y2";
			}
			else {
				std::cout << "Y";
			}
			std::cout << " ";
			moves += 1;
			Sleep(500);
		}
		if (GetAsyncKeyState(VK_SPACE)) {
			moves = 0;
			std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			Sleep(100);
			goto scramble;
		}
	}
}