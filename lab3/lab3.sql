create database week05;
use week05;

create table T1 (
sno CHAR(20),
 rno int,
 cpi float
);
insert into T1 (sno,rno,cpi)
VALUES ROW("student01", 270101001, 9.8), ROW("student02", 270101002, 8.9), ROW("student03", 270101003, 7.6);
 UPDATE T1 SET cpi=8.1
 where sno = "student03";
delete from T1 where sno = "student02" ;
create table T2 (
a1 CHAR(20),
 a2 int,
 a3 float,
 primary key (a2)
);

insert into T2 (a1,a2,a3)
VALUES ROW("student01", 270101001, 9.8), ROW("student01", 270101002, 8.9), ROW("student02", 270101003, 7.6);
 UPDATE T2 SET a2=270101002
 where a1 ="student01" ;  -- gives error since a2 is primary key it should contain unique entries
delete from T2 where a1="student02";
create table T3(
b1 CHAR(20) not null,
 b2 int unique,
 b3 float);
 insert into T3 (b1,b2,b3)
VALUES (NULL, 270101001, 9.8);  -- gives error because we have defined b1 to not be null 
  insert into T3 (b1,b2,b3)
VALUES("student02", 270101002, 8.9);
 insert into T3 (b1,b2,b3)
VALUES ("student03", 270101002, 7.6); -- gives error because b2 should be unique

 UPDATE T3 SET b1 = null; -- gives error because b1 is not null
delete from T3 where b1 ="student02" ;
create table T4(
c1 CHAR(20),
 c2 int,
 c3 float default '0.0',
 primary key(c2)
);

 insert into T4 (c1,c2) VALUES (NULL, 270101001);
 insert into T4 (c1,c2,c3) values (null, 270101002, 8.9); 
 insert into T4 (c1,c2,c3) VALUES("student03", 270101002, -7.6);   -- gives error since c2 is primary key it should contain unique entries
 insert into T4 (c1,c2,c3) VALUES("student03", 270101003, 8.2); 
 insert into T4 (c1,c2) VALUES("student03", 270101004);
 
create table T5(
d1 CHAR(20) not null,
 d2 int,
 d3 float default '0.0',
 primary key(d2)
);

insert into T5 (d1,d2) VALUES (NULL, 270101001);  -- gives error because we have defined d1 to not be null 
insert into T5 (d1,d2,d3) VALUES("student01", 270101001, 9.6); 
insert into T5 (d1,d2,d3) VALUES("student02", 270101002, 8.2); 
insert into T5 (d1,d2,d3) VALUES("student02", 270101003, 7.6); 
insert into T5 (d1,d2,d3) VALUES("student03", 270101003, 7.2);  -- gives error since d2 is primary key it should contain unique entries
insert into T5 (d1,d2) VALUES("student04", 270101004); 

 
create table T6(
e1 CHAR(20) ,
 e2 int,
 e3 float
);

insert into T6 (e1,e2,e3) VALUES("student01", 270101001, 9.6); 
insert into T6 (e1,e2,e3) VALUES("student02", 270101001, 9.4); 
insert into T6 (e1,e2,e3) VALUES("student03", 270101001, 9.2); 
alter table T6 add primary key(e2); -- gives error because e2 has duplicate values and cannot be made a primary key
alter table T6 add column sem int default (1);
insert into T6 (e1,e2,e3,sem) VALUES("student03", 270101002, 9.2,3); 
insert into T6 (e1,e2,e3) VALUES("student03", 270101001, 9.2); 
alter table T6 drop column e2;
