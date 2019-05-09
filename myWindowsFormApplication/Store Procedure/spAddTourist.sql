create procedure AddTourist
@Name nvarchar(30),
@Surname nvarchar(30),
@SelectedCountry nvarchar(30),
@DayCount int,
@TotalPrice int
AS
insert into Tourist
(Name,
Surname,
SelectedCountry,
DayCount,
TotalPrice)
values(
@Name,
@Surname,
@SelectedCountry,
@DayCount,
@TotalPrice)
go

