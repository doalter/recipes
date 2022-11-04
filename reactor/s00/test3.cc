#include "EventLoop.h"
#include "thread/Thread.h"

int main()
{
  muduo::EventLoop loop1;
  muduo::EventLoop loop2;

  loop1.loop();
  loop2.loop();
}
