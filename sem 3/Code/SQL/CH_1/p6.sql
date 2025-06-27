DECLARE
    v_max_number NUMBER;
    v_counter NUMBER;
BEGIN
    v_max_number := &input_number; -- Using substitution variable to get user input
	DBMS_OUTPUT.PUT_LINE('Using LOOP:');
    v_counter := 1;
    
	LOOP
        EXIT WHEN v_counter > v_max_number;
        DBMS_OUTPUT.PUT_LINE(v_counter);
        v_counter := v_counter + 1;
    END LOOP;
	
	DBMS_OUTPUT.PUT_LINE('Using FOR LOOP:');
    
	FOR i IN 1 .. v_max_number LOOP
        DBMS_OUTPUT.PUT_LINE(i);
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Using WHILE LOOP:');
    v_counter := 1;
    
	WHILE v_counter <= v_max_number LOOP
        DBMS_OUTPUT.PUT_LINE(v_counter);
        v_counter := v_counter + 1;
    END LOOP;

END;
/
