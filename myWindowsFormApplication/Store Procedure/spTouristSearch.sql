create procedure TouristSearch
@Name nvarchar(30),
@Surname nvarchar(30)
As
Select * from Tourist
where Name = @Name and Surname = @Surname
go