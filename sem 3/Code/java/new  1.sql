--system defined exception

Declare
	sal number;
	
Begin
	select salary into sal from emp where emp_id=10;
	dbms_output.put_line('The Salary is: || SAL);
	
Exception
	when no_data_found then 
	dbms_output.put_line('No records are found for empno 10');
	
End;
/