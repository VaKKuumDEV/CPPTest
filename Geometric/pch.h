// pch.h: это предварительно скомпилированный заголовочный файл.
// Перечисленные ниже файлы компилируются только один раз, что ускоряет последующие сборки.
// Это также влияет на работу IntelliSense, включая многие функции просмотра и завершения кода.
// Однако изменение любого из приведенных здесь файлов между операциями сборки приведет к повторной компиляции всех(!) этих файлов.
// Не добавляйте сюда файлы, которые планируете часто изменять, так как в этом случае выигрыша в производительности не будет.

#ifndef PCH_H
#define PCH_H

// Добавьте сюда заголовочные файлы для предварительной компиляции
#include "framework.h"

const float PI = 3.1415926;
namespace Geometric {
    struct Point {
        float x, y, z;
    };
    struct Vector {
        float x, y, z;
    };
}

#include "Figure.h"
#include "Ellipse.h"
#include "Circle.h"
#include "Helix.h"

#if defined(GEOM_EXPORTS) // внутри DLL
#   define GEOMAPI   __declspec(dllexport)
#else // вне DLL
#   define GEOMAPI   __declspec(dllimport)
#endif

extern "C" GEOMAPI float APIENTRY GetPi();
extern "C" GEOMAPI Geometric::Figure* APIENTRY GetFigure();
extern "C" GEOMAPI Geometric::Ellipse* APIENTRY GetEllipse(float a, float b);
extern "C" GEOMAPI Geometric::Circle* APIENTRY GetCircle(float radius);
extern "C" GEOMAPI Geometric::Helix* APIENTRY GetHelix(float radius, float step);

#endif //PCH_H
