# Write your MySQL query statement below
# SELECT MAX(Salary) AS SecondHighestSalary
# FROM Employee
# WHERE Salary < (SELECT MAX(Salary) FROM Employee);

SELECT 
    IFNULL((
        SELECT DISTINCT Salary 
        FROM Employee 
        ORDER BY Salary DESC 
        LIMIT 1 OFFSET 1
    ), NULL) AS SecondHighestSalary;



# select salary as SecondHighestSalary  from employee order by salary desc LIMIT 1,1;
