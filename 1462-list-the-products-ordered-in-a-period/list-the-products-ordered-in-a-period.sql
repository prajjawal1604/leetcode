# Write your MySQL query statement below
WITH cte AS
(SELECT product_id, SUM(unit) AS unit
FROM Orders
WHERE order_date >= '2020-02-01' AND order_date <= '2020-02-29'
GROUP BY product_id)

SELECT product_name, unit
FROM cte c
JOIN Products p
ON c.product_id = p.product_id
WHERE unit >= 100