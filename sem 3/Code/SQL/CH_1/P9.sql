/*Write a PL/SQL block which displays all records of Male employees working in the HR Dept from the EMP table.*/
Declare
    ED EMP.EID%TYPE;
    ENME EMP.ENAME%TYPE;
    DNO EMP.DEPTNO%TYPE;
    DNM EMP.DEPTNAME%TYPE;
    GEN EMP.GENDER%TYPE;
    AG EMP.AGE%TYPE;
    SL EMP.SAL%TYPE;

BEGIN
     select EID,ENAME,DEPTNO,DEPTNAME,GENDER,AGE,SAL INTO ED,ENME,DNO,DNM,GEN,AG,SL 
     from EMP where DEPTNAME='HR' and GENDER='M';
     dbms_output.put_line('ID IS '|| ED);
     dbms_output.put_line('NAME IS '|| ENME);
     dbms_output.put_line('DEPARTMENT NO IS '|| DNO);
     dbms_output.put_line('DEPARTMENT NAME IS '|| DNM);
     dbms_output.put_line('GENDER IS '|| GEN);
     dbms_output.put_line('AGE IS '|| AG);
     dbms_output.put_line('SALARY IS '|| SL);
    
END;
/
