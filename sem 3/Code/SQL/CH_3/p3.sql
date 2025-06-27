--Write a PL/SQL block to accept employee name from a user if it exists, display his/her basic salary otherwise display appropriate message using exception handling.
Declare
    salary emp.sal%type;
    enm emp.ename%type := &enm;

Begin   
    select sal into salary from emp where ename=enm;
    dbms_output.put_line('The salary is:'||salary);

Exception
    when NO_DATA_FOUND then
    dbms_output.put_line('No Records Found');

End;
/