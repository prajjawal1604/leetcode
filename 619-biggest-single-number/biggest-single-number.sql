# Write your MySQL query statement below
WITH cte AS
(SELECT *, COUNT(num) AS cnt
FROM MyNumbers
GROUP BY num)

SELECT MAX(num) AS num
FROM cte
WHERE cnt=1
