#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    float m = 3;    // время в минутах
    int t = 155;        // количество столбов
    float S = 25;   // расстояние между столбами в метрах

    printf("===============================================================\n");
    printf("                 РАСЧЕТ СКОРОСТИ ПОЕЗДА\n");
    printf("===============================================================\n\n");

    printf("УСЛОВИЕ:\n");
    printf("Время прохождения столбов: %.1f минут\n", m);
    printf("Количество пройденных столбов: %d шт.\n", t);
    printf("Расстояние между столбами: %.1f метров\n\n", S);

    //Расчет количества промежутков
    printf("1. Расчет количества промежутков между столбами\n");
    printf("Количество промежутков = t - 1 = %d - 1 = %d\n", t, t - 1);
    int intervals = t - 1;
    printf("Итого: %d промежутков\n\n", intervals);

    //Расчет пройденного расстояния
    printf("2. Расчет пройденного расстояния\n");
    printf("Расстояние = количество промежутков × S = %d * %.1f\n", intervals, S);
    double distance = intervals * S;
    printf("Расстояние = %.1f метров\n\n", distance);

    //Конвертация времени
    printf("3. Конвертация времени\n");
    printf("Время в секундах = m * 60 = %.1f * 60\n", m);
    double time_seconds = m * 60;
    printf("Время = %.1f секунд\n", time_seconds);

    printf(" Время в часах = m / 60 = %.1f / 60\n", m);
    double time_hours = m / 60.0;
    printf("Время = %.4f часов\n\n", time_hours);

    //Расчет скорости в м/с
    printf("4. Расчет скорости в метрах в секунду (м/с)\n");
    printf("Скорость (м/с) = расстояние / время = %.1f / %.1f\n", distance, time_seconds);
    double speed_m_s = distance / time_seconds;
    printf("Скорость = %.4f м/с\n", speed_m_s);
    printf("Скорость = %.2f м/с\n\n", speed_m_s);

    //Расчет скорости в км/ч
    printf("5. Расчет скорости в километрах в час (км/ч)\n");
    printf("Расстояние в км = %.1f / 1000 = %.3f км\n", distance, distance / 1000.0);
    printf("Скорость (км/ч) = расстояние / время = %.3f / %.4f\n", distance / 1000.0, time_hours);
    double speed_km_h = (distance / 1000.0) / time_hours;
    printf("Скорость = %.2f км/ч\n\n", speed_km_h);

    return 0;
}