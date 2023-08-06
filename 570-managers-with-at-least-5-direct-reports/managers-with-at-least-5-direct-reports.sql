# Write your MySQL query statement below

WITH emp AS
(SELECT managerId, COUNT(managerId) AS count
FROM Employee
GROUP BY managerId)

SELECT name
FROM Employee AS E
LEFT JOIN emp
ON E.id=emp.managerId
WHERE emp.count >= 5

