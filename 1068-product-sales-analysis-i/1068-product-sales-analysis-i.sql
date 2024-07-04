# Write your MySQL query statement below
select t.product_name, s.year, s.price from sales s left join product t on t.product_id = s.product_id;
