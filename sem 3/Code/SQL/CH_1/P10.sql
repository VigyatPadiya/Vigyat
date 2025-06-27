/*Write a PL/SQL block to delete the record of an employee for a given EID.*/

DECLARE
    ED EMP.EID%TYPE := &ED;

BEGIN 
    DELETE FROM EMP WHERE EID =ED;
    IF SQL%FOUND THEN
    dbms_output.put_line('RECORD DELETED');
    ELSE 
    dbms_output.put_line('NO RECORD FOUND');
    CLOSE IF;
END;
/