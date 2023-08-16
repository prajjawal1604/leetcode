# Write your MySQL query statement below

WITH cte AS
(SELECT d.Name AS Department, e.Name as Employee, e.Salary AS Salary, DENSE_RANK() OVER(PARTITION BY d.Id ORDER BY Salary DESC) rnk
FROM Employee e
INNER JOIN Department d
ON e.DepartmentId = d.Id)

SELECT Department, Employee, Salary
FROM cte
WHERE rnk < 4