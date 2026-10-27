#include <stdio.h>

int main(void)
{
    double celsius[7];
    double minTemp;
    double fahrenheit;

    int coldestDay;
    int day;
    int valid;

    const char *dayName[7] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };

    printf("TOPIC 13: WINTER COLD\n");
    printf("---------------------\n\n");

    /* 1. 7 honogiin temperatur avna */
    for (day = 0; day <= 6; day++)
    {
        do
        {
            printf("%s Celsius [-60, 20]: ", dayName[day]);
            scanf("%lf", &celsius[day]);

            valid = (celsius[day] >= -60 &&
                     celsius[day] <= 20);

            if (!valid)
            {
                printf("Invalid temperature. Enter -60 to 20.\n");
            }

        } while (!valid);
    }

    /* 2. Hamgiin huiten udriig olno */
    minTemp = celsius[0];
    coldestDay = 0;

    for (day = 1; day <= 6; day++)
    {
        if (celsius[day] < minTemp)
        {
            minTemp = celsius[day];
            coldestDay = day;
        }
    }

    /* 3. Hamgiin huiten udriin medeelliiig hevleh */
    fahrenheit = minTemp * 9.0 / 5.0 + 32.0;

    printf("\n---------------------\n");
    printf("COLDEST DAY\n");
    printf("---------------------\n");

    printf("Coldest temperature: %.1f C\n", minTemp);
    printf("Coldest day: %s\n", dayName[coldestDay]);
    printf("Coldest temperature in F: %.1f F\n", fahrenheit);

    /* 4. Hamgiin huiten udriin angilal */
    if (minTemp >= 0)
    {
        printf("Warm - Light jacket\n");
    }
    else if (minTemp >= -10)
    {
        printf("Cool - Warm jacket and hat\n");
    }
    else if (minTemp >= -20)
    {
        printf("Cold - Winter jacket and gloves\n");
    }
    else if (minTemp >= -30)
    {
        printf("Very cold - Layer clothes and wear warm boots\n");
    }
    else
    {
        printf("Extreme cold - Wear very warm clothes and limit time outside\n");
    }

    /* 5. 7 honogiin husnegt */
    printf("\n");
    printf("--------------------------------------------------------------------------\n");
    printf("%-12s %8s %8s %-15s %-30s\n",
           "Day",
           "C",
           "F",
           "Category",
           "Clothing advice");

    printf("--------------------------------------------------------------------------\n");

    for (day = 0; day <= 6; day++)
    {
        fahrenheit = celsius[day] * 9.0 / 5.0 + 32.0;

        printf("%-12s %8.1f %8.1f ",
               dayName[day],
               celsius[day],
               fahrenheit);

        if (celsius[day] >= 0)
        {
            printf("%-15s %-30s\n",
                   "Warm",
                   "Light jacket");
        }
        else if (celsius[day] >= -10)
        {
            printf("%-15s %-30s\n",
                   "Cool",
                   "Warm jacket and hat");
        }
        else if (celsius[day] >= -20)
        {
            printf("%-15s %-30s\n",
                   "Cold",
                   "Winter jacket and gloves");
        }
        else if (celsius[day] >= -30)
        {
            printf("%-15s %-30s\n",
                   "Very cold",
                   "Layer clothes and warm boots");
        }
        else
        {
            printf("%-15s %-30s\n",
                   "Extreme cold",
                   "Very warm clothes, limit outside time");
        }
    }

    printf("--------------------------------------------------------------------------\n");

    return 0;
}
