# Write your MySQL query statement below

WITH cte AS
(SELECT * FROM Teacher
GROUP BY teacher_id,subject_id)

SELECT teacher_id, COUNT(teacher_id) AS cnt
FROM cte
GROUP BY teacher_id 