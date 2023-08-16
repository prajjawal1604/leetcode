# Write your MySQL query statement below

WITH cte AS
(SELECT salary, DENSE_RANK() OVER(ORDER BY Salary DESC) rnk
FROM Employee e)

SELECT IFNULL((SELECT Salary FROM cte WHERE rnk = 2 LIMIT 1),null) AS SecondHighestSalary