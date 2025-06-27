--invalid number exception

Decalre
	no number(5);

Begin
	Select to_number('0001A') Into no from Dual;
	dbms_output.put_line(NO);
	
Exception
	When Invalid_number Then
	Dbms_output.put_line('Wrong Data Type / Data Conversion');
	
End;
/