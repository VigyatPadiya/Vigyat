/*Write a PL/SQL block which displays the gross 
salary of employees as per user input EID. (Consider 
an EMP table with EID, EName, Deptno, Deptname 
Gender, Age, BasicSal) with appropriate data types.)
Gross_Salary: BASICSAL + (DA + HRA + Medical) –
PF.
Rules: HRA = 15% of basic, DA = 50% of basic, 
Medical = Rs. 500, PF = 10% of basic.*/

DECLARE 
	en emp.ename%type;
	dno emp.deptno%type;
	sal emp.salary%type;
	HRA NUMBER;
	DA NUMBER;
	PF NUMBER;
	Gross_Salary NUMBER;
	MEDICAL NUMBER := 500;
	eno emp.Eid%type := &eno;
BEGIN
	select ENAME,DEPTNO,SALARY into en,dno,sal from emp where Eid=eno;
	dbms_output.put_line('Employe Name is:'||en);
	dbms_output.put_line('Employe Dept.No is:'||dno);
	dbms_output.put_line('Employee basic salary is :'||sal);
	
	HRA := sal * (15/100);
	DA := sal * (5/100);
	PF := sal * (10/100);
	Gross_Salary := sal + (DA + HRA + MEDICAL) - PF;
	
	dbms_output.put_line('Employee Gross Salary is:'|| Gross_Salary);
	UPDATE EMP SET GSAL = Gross_Salary  WHERE EID=eno;
end;
/