#include <iostream>
/// enum traffic_light {red, yellow, green};
/// enum rgb_color {red, green, blue};

enum class traffic_light : char {red, yellow, green};
enum class rgb_color {red, green, blue};

int main()
{
	traffic_light cross_road = traffic_light::yellow;
	rgb_color rgb = rgb_color::green;
	/// cross_road = 2;
	/// int G = rgb_color::green;
	std::cout << sizeof(rgb_color) << '\n';
	std::cout << sizeof(traffic_light) << '\n';
	// std::cout << G << '\n';
	return 0;
}
