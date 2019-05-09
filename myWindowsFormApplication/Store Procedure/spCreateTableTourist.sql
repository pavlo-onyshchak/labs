create table Tourist
(
ID int identity(1,1) primary key,
Name nvarchar(30) not null,
Surname nvarchar(30) not null,
SelectedCountry nvarchar(30) not null,
DayCount int not null,
TotalPrice int not null
)