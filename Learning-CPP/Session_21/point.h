class Point{ // 2D point concept
	public: // Ctor(s)
		Point (int xx, int yy) {x_ = xx; y_ = yy;}
		Point() {x_ = y_ = 0;}
		void move (int xx, int yy) {x_ = xx; y_ =yy;}
		int get_x() const {return x_;}
		int get_y() const {return y_;}
		void set_x(int x) {x_ = x;}
		void set_y(int y) {y_ = y;}

	private: // Implementation
		int x_, y_;
		char dummy;
};
