#ifndef head
#define head

#include <easyx.h>
#include <string>
//#include <vector>
#include <tuple>
#include <iostream>
#include <exception>


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




class Game {
private:

public:


};


class Logic_control {
private:

public:

};


class Surface_drawing : public Game {
private:

public:
	const void Main_surface_drawing() const;
	const void Main_surface_drawing(const int win_lenth, const int win_width) const;


	const void Clear_surface() const noexcept;
};


class Main_surface_logic : public Logic_control {
private:

public:
	Main_surface_logic(const Surface_drawing& obj);
	~Main_surface_logic();

	const std::string message() const;

};

class Main_Option_logic : public Logic_control {
private:

public:
	Main_Option_logic();
	~Main_Option_logic();
};

class Game_logic : public Logic_control {
private:

public:

};



#endif // !head



