# # Write your MySQL query statement below
# select person.firstname, person.lastname , address.city, address.state from person left join address on person.personId = address.addressId
# SELECT 
#     person.firstname, 
#     person.lastname, 
#     address.city, 
#     address.state
# FROM 
#     person
# LEFT JOIN 
#     address 
# ON 
#     person.personId = address.personId;

SELECT 
p.firstName,
p.lastName,
a.city,
a.state
FROM person p
LEFT JOIN address a
ON p.personId = a.personId
