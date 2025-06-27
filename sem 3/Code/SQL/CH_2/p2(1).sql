DECLARE
    CURSOR emp_cursor IS
        SELECT EID, ENAME, DEPTNO, DEPTNAME, GENDER, AGE, SAL
        FROM EMP
        WHERE DEPTNO = 10
        FOR UPDATE;

    emp emp_cursor%ROWTYPE;
    updated BOOLEAN := FALSE;
BEGIN
    OPEN emp_cursor;
    
    IF NOT emp_cursor%ISOPEN THEN
        DBMS_OUTPUT.PUT_LINE('Cursor did not open successfully.');
        RETURN;
    END IF;

    LOOP
        FETCH emp_cursor INTO emp;
        
        EXIT WHEN emp_cursor%NOTFOUND;
        
       INSERT INTO EMP_UPDATE (EID, ENAME, DEPTNO, DEPTNAME, GENDER, AGE, SAL)
        SELECT EID, ENAME, DEPTNO, DEPTNAME, GENDER, AGE, SAL * 1.05
        FROM EMP
        WHERE deptno = 10;
        
        updated := TRUE;
    END LOOP;
    
    CLOSE emp_cursor;
    
    IF updated THEN
        DBMS_OUTPUT.PUT_LINE('Salary increased for employees in department 10.');
    ELSE
        DBMS_OUTPUT.PUT_LINE('No employees found in department 10.');
    END IF;
    
    COMMIT;

END;
/