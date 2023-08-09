# Write your MySQL query statement below

WITH cte AS
(SELECT reports_to AS employee_id, COUNT(reports_to) AS reports_count, ROUND(AVG(age),0) AS average_age
FROM Employees
WHERE reports_to IS NOT NULL
GROUP BY reports_to)

SELECT cte.employee_id, name, cte.reports_count, cte.average_age
FROM cte
INNER JOIN Employees E
ON E.employee_id = cte.employee_id
ORDER BY cte.employee_id