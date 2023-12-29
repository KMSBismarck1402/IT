// Sử dụng danh sách khởi tạo cho các trường khởi tạo
Line::Line(double dai) : chieudai(dai)
{
	cout << "Doi tuong dang duoc tao, chieudai = " << dai << endl;
}
// cú pháp tương tự
Line::Line(double dai)
{
	cout << "Doi tuong dang duoc tao, chieudai = " << dai << endl;
	chieudai = dai;
}
// Nếu với một lớp trong C, bạn có nhiều trường X, Y, Z, … để được khởi tạo, thì bạn có thể sử dụng cú pháp tương tự và phân biệt các trường bởi dấu phảy, như sau:
C::C(double a, double b, double c) : X(a), Y(b), Z(c)