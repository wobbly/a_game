#include <thread>
#include <chrono>

int quit()
{
	system ("clear");
	std::cout << "Seems like you just quit then...\n";
	std::this_thread::sleep_for (std::chrono::seconds(2));
	return 0;

}
