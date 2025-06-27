--PROGRAM 8
--EMP TABLE

DECLARE 
	en emp.ename%type;
	dno emp.deptno%type;
BEGIN
	select ENAME,DEPTNO into en,dno from emp where EID = &EID;
	dbms_output.put_line('Employe Name is:'||en);
	dbms_output.put_line('Employe Dept.No is:'||dno);
end;
/