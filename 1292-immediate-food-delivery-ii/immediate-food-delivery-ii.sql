# Write your MySQL query statement below

WITH D AS
(SELECT *, RANK() OVER(PARTITION BY customer_id ORDER BY order_date) AS order_number, CASE WHEN order_date = customer_pref_delivery_date THEN 1 ELSE 0 END AS count
FROM DElivery)

SELECT ROUND(SUM(count)/COUNT(*)*100,2) AS immediate_percentage
FROM D
WHERE order_number = 1