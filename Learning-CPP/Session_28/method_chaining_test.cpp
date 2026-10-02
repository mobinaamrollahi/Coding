class Point3D
{
	int x_{0}, y_{0}, z_{0};
public:
	Point3D (int x = 0, int y = 0, int z = 0) : x_{x}, y_{y}, z_{z}
	{
	}
	Point3D& set_x(int x)
	{
		x_ = x;
		return *this;
	}

	Point3D& set_y(int y)
	{
		y_ = y;
		return *this;
	}
	Point3D& set_z(int z)
	{
		z_ = z;
		return *this;
	}
};

int main()
{
	Point3D p; 
	// manipulate p
	p.set_x(4).set_y(10).set_z(10); // method chaining
	// we actually used method chaining from the day 2: Hello World! program.
	/// std::cout << "Hello World!" << '\t' << 1 << '\t' << 3.14 << '\n'; 
	return 0;
}

