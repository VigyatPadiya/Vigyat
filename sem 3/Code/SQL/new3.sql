declare 
	i number(3);
	veno emp.empno%type;
	venm emp.enm%type;
	vsal emp.sal%type;
	vdno emp.deptno%type;
	
	cursor cur_emp is select empno,enm,sal from emp where deptno=&deptno;
	
	no_dept_found expection;
	
begin 
	i=0;
	open cur_emp;
	loop
		fetch cur_emp into veno,venm,vsal;
		exit when cur_emp%notfound;
		i := i+1;
		
		dbms_output.put_line(veno||' '||vnm||' '||vsal);
		insert into emp.backup values (veno,vnm,vsal);
		end loop;
		
	If cur_emp%rowcount = then
	close cur_emp;
	raise no_dept_found;
	end if;
	dbms_output.put_line('total No. of Records inserted into emp_backup table are:-'|i);
	close cur_emp;

exception
	when no_dept_found then
	dbms_output.put_line('no records are found for given dept no.');
	when other then
		dbms_output.put_line('pl/sql code encountered an error');
	end;
	/
	