#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
using std::thread;

class TimerException : std::exception {
public:
	TimerException() noexcept : exception("Error 404!") {}
	char const* what() const
	{
		return exception::what();
	}
};
class stopwatchException : std::exception {
public:
	stopwatchException() noexcept : exception("Error 404!") {}
	char const* what() const
	{
		return exception::what();
	}
};


class BaseTimeWorker {
protected:
	int seconds;
	thread *_work_thread;
	bool isStop;
	BaseTimeWorker(int start_from) : isStop(true), seconds(start_from) {}

	virtual void _work_thread_method() = 0;
public:
	virtual void start() {
		this->isStop = false;
		if (this->isStop == true)
			this->_work_thread->detach();
	}
	virtual void pause() {
		this->isStop = true;
	}
	virtual void stop() {
		this->isStop = true;
		this->seconds = 0;
		this->_work_thread->~thread();
	}
};

class Timer : public BaseTimeWorker {
public:
	Timer(int start_time) : BaseTimeWorker(start_time) {
		this->_work_thread = new thread(&Timer::_work_thread_method, this);
	}
	void _work_thread_method() override {
		std::cout << "START TIMER\n";
		while (this->isStop != true)
		{
			std::cout << this->seconds << "\n";
			this->seconds--;
			std::this_thread::sleep_for(std::chrono::seconds(1));
			if (this->seconds == 0)
				this->isStop = true;
		}
		std::cout << "END TIMER\n";
	}

	void start() override {
		if (this->seconds <= 0)
			throw TimerException();
		BaseTimeWorker::start();
	}
};

class stopwatch : public BaseTimeWorker {
public:
	stopwatch() : BaseTimeWorker(0) {
		this->_work_thread = new thread(&stopwatch::_work_thread_method, this);
	}
	void _work_thread_method() override {
		std::cout << "START stopwatch\n";

		while (this->isStop != true)
		{
			std::this_thread::sleep_for(std::chrono::seconds(1));
			this->seconds++;
			system("cls");
			std::cout << std::setfill('0') << std::setw(2) << seconds / 3600 << ":"
				<< std::setfill('0') << std::setw(2) << seconds / 60 << ":"
				<< std::setfill('0') << std::setw(2) << seconds % 60 << "\n";
				if (this->seconds == 0)
					this->isStop = true;
		}
		std::cout << "END stopwatch\n";
	}
	void start() override {


		BaseTimeWorker::start();
	}
};

int main()
{
	/*try
	{
		Timer timer(5);
		timer.start();
	}
	catch (const TimerException& ex)
	{
		std::cout << ex.what() << "\n";
	}*/
	try
	{
		stopwatch stopwatch;
		stopwatch.start();
	}
	catch (const stopwatchException& ex)
	{
		std::cout << ex.what() << "\n";
	}
	system("color 12");

	system("pause");
}