--Program 3ā
/*Write a PL/SQL block to accept product name, qty 
and price from user and then calculate discount in Rs. 
based on the given (%) and print it.*/

DECLARE
	p_name VARCHAR2(20) := '&p_name';
	qty number := &qty;
	price number := &price;
	dis number := &dis;
	dis_pr number;
	final_amt number;
	
BEGIN
	dbms_output.put_line('Product Name :'||p_name);
	dbms_output.put_line('Product Quality :'||qty);
	dbms_output.put_line('Product Price :'||price);
	dis_pr :=(qty*price)*(dis/100);
	dbms_output.put_line('Product Discount:'||dis_pr);
	final_amt :=(qty*price)-dis_pr;
	dbms_output.put_line('Product Name :'||final_amt);
End;
/