DECLARE
	cursor c1 is select ename,deptno,sal from emp order by sal desc;
	en emp.ename%type;
	de emp.deptno%type;
	sal emp.sal%type;

BEGIN	
	open c1;
	loop
		exit when c1%notfound;
		exit when c1%rowcount>5;
		fetch c1 into en,de,sal;
		dbms_output.put_line(en);
		dbms_output.put_line(de);
		dbms_output.put_line(sal);
	end loop;
	close c1;
END;
/