-- Write a PL/SQL block which accepts measurement in feet and displays it in cm, inch and meter.

DECLARE
    feet     NUMBER;
    inches   NUMBER;
    meters   NUMBER;
    cm       NUMBER;
BEGIN
    feet := &input_feet; 

    inches := feet * 12;
    meters := feet * 0.3048;
    cm := meters * 100;

    DBMS_OUTPUT.PUT_LINE('Measurement in Feet: ' || feet);
    DBMS_OUTPUT.PUT_LINE('Measurement in Inches: ' || āinches);
    DBMS_OUTPUT.PUT_LINE('Measurement in Meters: ' || meters);
    DBMS_OUTPUT.PUT_LINE('Measurement in Centimeters: ' || cm);
END;
/
