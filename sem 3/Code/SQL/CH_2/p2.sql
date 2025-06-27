Declare
BEGIN
    UPDATE emp
    SET sal = sal * 1.05
    WHERE deptno = 10;

    IF SQL%ROWCOUNT = 0 THEN
        dbms_output.put_line('No employees found in department 10.');
    ELSE
        INSERT INTO EMP_UPDATE (EID, ENAME, DEPTNO, DEPTNAME, GENDER, AGE, SAL)
        SELECT EID, ENAME, DEPTNO, DEPTNAME, GENDER, AGE, SAL * 1.05
        FROM EMP
        WHERE deptno = 10;
        dbms_output.put_line('Salary increased for employees in department 10.');
    END IF;
    
    COMMIT;
END;
/
