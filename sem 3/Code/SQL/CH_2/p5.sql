DECLARE 
	CURSOR C1 IS SELECT DEPTNO,AVG(SAL) AS A,SUM(SAL) AS S FROM EMP GROUP BY DEPTNO;
	
BEGIN 
	FOR I IN C1
	LOOP
		dbms_output.put_line(i.deptno||' '||i.a||' '||i.s);
		
	end loop;
END;
/