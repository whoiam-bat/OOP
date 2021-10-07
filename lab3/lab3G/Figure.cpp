#include "Figure.h"
void Triangle::init(int x, int y) {
	this->x = x;
	this->y = y;
}
void Rectangle::init(int x, int y) {
	this->x = x;
	this->y = y;
}
void Circle::init(int x, int y) {
	this->x = x;
	this->y = y;
}

void Triangle::show() {
	cout << "Area of triangle: " << (double)(x * y) / 2 << "\n";
}
void Rectangle::show() {
	cout << "Area of rectangle: " << (x * y) << "\n";
}
void Circle::show() {
	cout << "Area of circle: " << (double)(PI * (x * x)) << "\n";
}

void AreaByChildrenObjects() {
	int choice;
	cout << "1. Area of triangle;\n";
	cout << "2. Area of rectangle;\n";
	cout << "3. Area of circle.\n";
	cin >> choice;

	switch (choice) {
	case 1: {
		Triangle triangle;
		int x, y;
		cout << "Enter side of triangle: ";
		cin >> x;
		cout << "Enter height of triangle: ";
		cin >> y;
		triangle.init(x, y);
		triangle.show();
		break;
	}
	case 2: {
		Rectangle rectangle;
		int x, y;
		cout << "Enter lenght of rectangle: ";
		cin >> x;
		cout << "Enter width of rectangle: ";
		cin >> y;
		rectangle.init(x, y);
		rectangle.show();
		break;
	}
	case 3: {
		Circle circle;
		int x;
		cout << "Enter radius of circle: ";
		cin >> x;
		circle.init(x);
		circle.show();
		break;
	}
	}
}
void AreaByParentPointer() {
	int choice;
	cout << "1. Area of triangle;\n";
	cout << "2. Area of rectangle;\n";
	cout << "3. Area of circle.\n";
	cin >> choice;
	Figure* pointer;
	switch (choice) {
	case 1: {
		pointer = new Triangle;
		int x, y;
		cout << "Enter side of triangle: ";
		cin >> x;
		cout << "Enter height of triangle: ";
		cin >> y;
		pointer->init(x, y);
		pointer->show();
		break;
	}
	case 2: {
		pointer = new Rectangle;
		int x, y;
		cout << "Enter lenght of rectangle: ";
		cin >> x;
		cout << "Enter width of rectangle: ";
		cin >> y;
		pointer->init(x, y);
		pointer->show();
		break;
	}
	case 3: {
		pointer = new Circle;
		int x;
		cout << "Enter radius of circle: ";
		cin >> x;
		pointer->init(x);
		pointer->show();
		break;
	}
	}
}
