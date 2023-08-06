# Write your MySQL query statement below

SELECT S.user_id, CASE WHEN C.time_stamp IS NULL THEN 0.00
ELSE ROUND(SUM(C.action='confirmed')/COUNT(*),2)
END AS confirmation_rate
FROM Signups S
LEFT JOIN Confirmations C
ON S.user_id = C.user_id
GROUP BY S.user_id