create procedure DeleteTourist
@Name nvarchar(30),
@Surname nvarchar(30)
as
delete from Tourist
where Name = @Name and Surname = @Surname
go