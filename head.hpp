#ifndef head
#define head

#include <easyx.h>
//#include <string>
//#include <vector>
#include <tuple>
#include <iostream>
#include <Windows.h>


class Object {
private:
	int lenth{};
	int x{};
	int y{};

public:
	Object() = default;
	//virtual ~Object() = 0;	//´ýÈ·¶¨

	const std::tuple <int, int> get_location() const;
};


class Snake : public Object{
private:
	static inline int Block{0};

public:
	Snake();
	const int get_lenth() const noexcept;

};


class Food : public Object{
private:

public:


};




//class Window {
//private:
//
//
//public:
//	Window();
//	~Window();
//
//	const void clean() const noexcept;
//
//
//};

class Surface_logic_control {
private:

public:

};

class Main_surface : public Surface_logic_control {
private:

public:
	Main_surface();
	//const void start(Window Current_window) const noexcept;

};

class Game_control {
private:

public:
	const void start();


};





#endif // !head



