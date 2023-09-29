#include <iostream>
#include <vector>
#include <cmath>
#include <random>
#include <ctime>
#include <algorithm>
#include "../Geometric/pch.h"

using namespace std;
int randomInt(int start, int end);

int main()
{
    srand(time(NULL));
    vector<Geometric::Figure*> figures;
    int randCount = randomInt(10, 40);
    for (int i = 0; i < randCount; i++) {
        int type = randomInt(1, 3);
        Geometric::Figure* figure = nullptr;

        if (type == 1) figure = GetEllipse(randomInt(1, 5), randomInt(5, 10));
        else if (type == 2) figure = GetCircle(randomInt(7, 11));
        else if (type == 3) figure = GetHelix(randomInt(9, 12), randomInt(1, 5));

        if (figure == nullptr) continue;
        figures.push_back(figure);
    }

    for (Geometric::Figure* figure : figures) {
        Geometric::Point point = figure->getPoint(GetPi() / 4);
        Geometric::Vector vec = figure->getDerivative(GetPi() / 4);

        cout << "Point: (" << point.x << ", " << point.y << ", " << point.z << "), ";
        cout << "Vector: (" << vec.x << ", " << vec.y << ", " << vec.z << ")" << endl;
    }

    vector<Geometric::Circle*> circles;
    for (int i = 0; i < figures.size(); i++) {
        Geometric::Circle* circle = dynamic_cast<Geometric::Circle*>(figures[i]);
        if (circle != nullptr) circles.push_back(circle);
    }

    sort(circles.begin(), circles.end(), [](Geometric::Circle* a, Geometric::Circle* b)
        {
            return a->getRadius() < b->getRadius();
        });

    for (Geometric::Circle* circle : circles) {
        cout << "Radius: " << circle->getRadius() << endl;
    }

    float sum = 0;
    for (int i = 0; i < circles.size(); i++) sum += circles[i]->getRadius();

    cout << "Circles radius sum: " << sum << endl;
}

int randomInt(int start, int end) {
    return start + rand() % (end - start + 1);
}