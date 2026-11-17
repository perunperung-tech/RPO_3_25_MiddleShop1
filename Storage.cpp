#include "Storage.hpp"

size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;

void CreateStorage(int mode)
{
    const size_t staticSize = 10;

    size_t idArrStatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
    std::wstring nameArrStatic[staticSize]
    {
        L"Букет \"101 роза\"", L"Тюльпаны белые (15 шт.)",
        L"Пионы розовые (7 шт.)", L"Хризантема кустовая", L"Эустома в букете",
        L"Орхидея фаленопсис в горшке", L"Гербера микс (10 шт.)",
        L"Подсолнухи (5 шт.)", L"Лилия белая ароматная",
        L"Композиция \"Лепесток\" в шляпной коробке"
    };
    size_t countArrStatic[staticSize]{ 14,30,9,18,23,7,22,40,10,3 };
    double priceArrStatic[staticSize]{ 7990.0, 1450.0, 3200.0, 390.0, 1250.0, 2400.0,
        980.0, 750.0, 520.0, 4900.0 };

    if (mode == 0)
    {
        sizeSt = staticSize;
        idArr = new size_t[sizeSt];
        nameArr = new std::wstring[sizeSt];
        countArr = new size_t[sizeSt];
        priceArr = new double[sizeSt];

        for (size_t i = 0; i < sizeSt; i++)
        {
            idArr[i] = idArrStatic[i];
            nameArr[i] = nameArrStatic[i];
            countArr[i] = countArrStatic[i];
            priceArr[i] = priceArrStatic[i];
        }
    }
}