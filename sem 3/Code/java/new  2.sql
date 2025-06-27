--system defined exception

Declare
	id emp.eid_id%type;
	name emp.ename%type;
	sal emp.salary%type;

Begin
	select ename,salary into name,sal from Emp where emp_id='&id';
	dbms_output.put_line('The Name is:' ||name);
	dbms_output.put_line('The Salary is: '||sal);
	
Exception
	When no_data_found then
	Dbms_output.put_line('No records are found');
	when invalid_number then
	dbms_output.put_line('invalid value');

End;
/