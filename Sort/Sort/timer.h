#ifndef __TIMER_H__
#define __TIMER_H__

#include <Windows.h>
#pragma comment(lib, "Winmm")

__int64 GetQPTick()
{
	LARGE_INTEGER liTime;
	QueryPerformanceCounter(&liTime);
	return static_cast<__int64>(liTime.QuadPart);
}

#endif // !__TIMER_H__
