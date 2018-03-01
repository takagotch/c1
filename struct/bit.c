type [ member_name ] : width;

type
member_name
width


struct Date {
  unsigned int month : 4;
  unsigned int day : 5;
  signed int year : 22;
  _Bool isDST : 1;
};

struct Date birthday = { 5, 17, 1982 };

const char* dateAsString(struct Date d)
{
  static char strDate[12];
  sprintf(strDate, "%02d/%02d/%04d", d.month, d.day, d.year);
  return strDate;
}

puts(dateAsString(birthday));


