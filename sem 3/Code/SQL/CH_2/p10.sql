DECLARE
    emp_id EMP.EID%TYPE := &emp_id;
    new_salary EMP.SAL%TYPE := &new_salary;
BEGIN
    UPDATE EMP_BACKUP
    SET SAL = new_salary
    WHERE EID = emp_id;
    
    COMMIT;
    
    DBMS_OUTPUT.PUT_LINE('Employee salary updated successfully.');
END;
/
