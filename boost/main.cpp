#include <boost/date_time/posix_time/posix_time_types.hpp>
#include <cstdio>

int main(void) {
  namespace pt = boost::posix_time;
  pt::ptime now = pt::second_clock::local_time();

  printf("%s\t->\t%04d-%02d-%02d %02d:%02d:%02d\n", "date '+%Y-%m-%d %H:%M:%S'",
         (int)now.date().year(), (int)now.date().month(), (int)now.date().day(),
         (int)now.time_of_day().hours(), (int)now.time_of_day().minutes(),
         (int)now.time_of_day().seconds());

  // getchar();
  return 0;
}