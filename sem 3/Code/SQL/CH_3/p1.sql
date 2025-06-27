-- Write a PL/SQL block that explains the use of the ZERO_DIVIDE exception. 
Declare
    num1 number:= &num1;
    num2 number:= &num2;
    ans number;
Begin
    ans:=num1/num2;
    dbms_output.put_line('The Answer is :'||ans);

Exception
    when ZERO_DIVIDE then
    dbms_output.put_line('Divide By zreo is not possible');

end;
/