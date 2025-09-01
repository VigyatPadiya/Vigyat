--System defined exception

Declare
	sal emp.salary%type;
	d Deptno%type;
	
Begin
	Select salary into sal from emp where deptno='&d';
	dbms_output.put_line('Salary is: '||sal);
	
Exception
	When TOO_MANY_ROWS THEN
	dbms_output.put_line('More Then one rows are selected for department');
	when no_data_found then
	dbms_output.put_line('no records arte found');
	
end;
/