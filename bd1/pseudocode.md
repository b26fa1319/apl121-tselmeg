START

Declare celsius[7] as Real
Declare minTemp as Real
Declare coldestDay as Integer
Declare day as Integer
Declare valid as Boolean
Declare fahrenheit as Real
Declare dayName as String

FOR day = 0 TO 6

    DO
        OUTPUT "Celsius [-60, 20]:"
        INPUT celsius[day]

        valid = (celsius[day] >= -60 AND celsius[day] <= 20)

        IF celsius[day] < -60 OR celsius[day] > 20 THEN
            OUTPUT "Invalid temperature. Enter -60 to 20."
        END IF

    WHILE valid = False

END FOR


minTemp = celsius[0]
coldestDay = 0

FOR day = 1 TO 6

    IF celsius[day] < minTemp THEN
        minTemp = celsius[day]
        coldestDay = day
    END IF

END FOR


OUTPUT "Coldest temperature: " + minTemp rounded to 1 decimal + " C"
IF coldestDay = 0 THEN
    dayName = "Monday"

ELSE IF coldestDay = 1 THEN
    dayName = "Tuesday"

ELSE IF coldestDay = 2 THEN
    dayName = "Wednesday"

ELSE IF coldestDay = 3 THEN
    dayName = "Thursday"

ELSE IF coldestDay = 4 THEN
    dayName = "Friday"

ELSE IF coldestDay = 5 THEN
    dayName = "Saturday"

ELSE
    dayName = "Sunday"

END IF

OUTPUT "Coldest day: " + dayName

fahrenheit = minTemp * 9 / 5 + 32
OUTPUT "Coldest temperature in F: " + fahrenheit rounded to 1 decimal + " F"


IF minTemp >= 0 THEN
    OUTPUT "Warm - Light jacket"

ELSE IF minTemp >= -10 THEN
    OUTPUT "Cool - Warm jacket and hat"

ELSE IF minTemp >= -20 THEN
    OUTPUT "Cold - Winter jacket and gloves"

ELSE IF minTemp >= -30 THEN
    OUTPUT "Very cold - Layer clothes and wear warm boots"

ELSE
    OUTPUT "Extreme cold - Wear very warm clothes and limit time outside"

END IF


FOR day = 0 TO 6
    CALL PrintDayResult(celsius[day], day)
END FOR

END


FUNCTION PrintDayResult(temp, dayIndex)

    Declare fahrenheit as Real
    Declare dayName as String

    IF dayIndex = 0 THEN
        dayName = "Monday"

    ELSE IF dayIndex = 1 THEN
        dayName = "Tuesday"

    ELSE IF dayIndex = 2 THEN
        dayName = "Wednesday"

    ELSE IF dayIndex = 3 THEN
        dayName = "Thursday"

    ELSE IF dayIndex = 4 THEN
        dayName = "Friday"

    ELSE IF dayIndex = 5 THEN
        dayName = "Saturday"

    ELSE
        dayName = "Sunday"

    END IF


    fahrenheit = temp * 9 / 5 + 32

    OUTPUT dayName + ": C = " + temp rounded to 1 decimal + ", F = " + fahrenheit rounded to 1 decimal

    IF temp >= 0 THEN
        OUTPUT "Warm - Light jacket"

    ELSE IF temp >= -10 THEN
        OUTPUT "Cool - Warm jacket and hat"

    ELSE IF temp >= -20 THEN
        OUTPUT "Cold - Winter jacket and gloves"

    ELSE IF temp >= -30 THEN
        OUTPUT "Very cold - Layer clothes and wear warm boots"

    ELSE
        OUTPUT "Extreme cold - Wear very warm clothes and limit time outside"

    END IF

END FUNCTION
