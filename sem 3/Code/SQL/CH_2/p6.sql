DECLARE
    dept_no EMP.DEPTNO%TYPE := &dept; 
    CURSOR emp_cursor IS
        SELECT EID, ENAME, DEPTNO, DEPTNAME, GENDER, AGE, SAL
        FROM EMP
        WHERE DEPTNO = dept_no;

    record_found BOOLEAN := FALSE;
    
    record emp_cursor%ROWTYPE;
BEGIN
    OPEN emp_cursor;
    
    LOOP
        FETCH emp_cursor INTO record;
        EXIT WHEN emp_cursor%NOTFOUND;
        
        record_found := TRUE;
        
        INSERT INTO EMP_BACKUP (EID, ENAME, DEPTNO, DEPTNAME, GENDER, AGE, SAL)
        VALUES (record.EID, record.ENAME, record.DEPTNO, record.DEPTNAME, record.GENDER, record.AGE, record.SAL);
    END LOOP;
    
    CLOSE emp_cursor;

    IF NOT record_found THEN
        DBMS_OUTPUT.PUT_LINE('No records found for department ' || dept_no);
    ELSE
        DBMS_OUTPUT.PUT_LINE('Employee records successfully backed up for department ' || dept_no);
        COMMIT; 
    END IF;
END;
/
