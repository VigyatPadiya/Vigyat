--Program 5
/*Write a PL/SQL block which converts temperature 
from Celsius to Fahrenheit.*/

DECLARE
    celsius NUMBER := 25; 
    fahrenheit NUMBER;
BEGIN
    fahrenheit := (celsius * 9/5) + 32;
    DBMS_OUTPUT.PUT_LINE('Temperature in Celsius: ' || celsius);
    DBMS_OUTPUT.PUT_LINE('Temperature in Fahrenheit: ' || fahrenheit);
END;
/
