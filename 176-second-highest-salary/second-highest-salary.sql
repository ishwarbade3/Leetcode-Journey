# Write your MySQL query statement below
#select distinct salary as SecondHighestSalary from Employee order by salary desc limit 1 2;
#SELECT NULLIF (null,SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT 1 OFFSET 1)AS SecondHighestSalary ;
SELECT COALESCE(
    (SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT 1 OFFSET 1), 
    NULL
) AS SecondHighestSalary;