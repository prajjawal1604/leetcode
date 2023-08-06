# Write your MySQL query statement below

select s.machine_id, ROUND(avg(e.timestamp-s.timestamp), 3) as processing_time 
from (select * from Activity where activity_type = 'start') s,
(select * from Activity where activity_type = 'end') e
where s.machine_id = e.machine_id and s.process_id = e.process_id
group by s.machine_id

