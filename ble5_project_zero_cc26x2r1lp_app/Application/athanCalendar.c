/*
 * athanCalendar.c
 *
 *  Created on: May 7, 2019
 *      Author: Jahid's Desktop
 */
#include <util.h>
#include "athanCalendar.h"

//------------------------------------------------------------------------------
const volatile TsDaysMonthsConfig constDaysMonthsConfig = \
{
"Sun","Mon","Tue","Wed","Thu","Fri","Sat",
"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"
};

#pragma DATA_ALIGN(ATHAN_SCHEDULE, 8)
const volatile TuAthanTimesYear ATHAN_SCHEDULE = { \
//JAN
FAJR,  5, 23, SUNRISE,  6, 51, ZUHR, 11, 57, ASR,  2, 36, MAGHRIB,  4, 59, ISHA,  6, 22,    //1
FAJR,  5, 23, SUNRISE,  6, 51, ZUHR, 11, 58, ASR,  2, 37, MAGHRIB,  4, 59, ISHA,  6, 22,    //2
FAJR,  5, 24, SUNRISE,  6, 51, ZUHR, 11, 58, ASR,  2, 37, MAGHRIB,  5,  0, ISHA,  6, 23,    //3
FAJR,  5, 24, SUNRISE,  6, 52, ZUHR, 11, 59, ASR,  2, 38, MAGHRIB,  5,  1, ISHA,  6, 24,    //4
FAJR,  5, 24, SUNRISE,  6, 52, ZUHR, 11, 59, ASR,  2, 39, MAGHRIB,  5,  2, ISHA,  6, 24,    //5
FAJR,  5, 24, SUNRISE,  6, 52, ZUHR, 12,  0, ASR,  2, 40, MAGHRIB,  5,  3, ISHA,  6, 25,    //6
FAJR,  5, 24, SUNRISE,  6, 52, ZUHR, 12,  0, ASR,  2, 40, MAGHRIB,  5,  3, ISHA,  6, 26,    //7
FAJR,  5, 24, SUNRISE,  6, 52, ZUHR, 12,  0, ASR,  2, 41, MAGHRIB,  5,  4, ISHA,  6, 27,    //8
FAJR,  5, 25, SUNRISE,  6, 52, ZUHR, 12,  1, ASR,  2, 41, MAGHRIB,  5,  5, ISHA,  6, 27,    //9
FAJR,  5, 25, SUNRISE,  6, 52, ZUHR, 12,  1, ASR,  2, 43, MAGHRIB,  5,  6, ISHA,  6, 28,    //10
FAJR,  5, 25, SUNRISE,  6, 52, ZUHR, 12,  2, ASR,  2, 43, MAGHRIB,  5,  7, ISHA,  6, 29,    //11
FAJR,  5, 25, SUNRISE,  6, 52, ZUHR, 12,  2, ASR,  2, 44, MAGHRIB,  5,  8, ISHA,  6, 30,    //12
FAJR,  5, 25, SUNRISE,  6, 51, ZUHR, 12,  2, ASR,  2, 45, MAGHRIB,  5,  9, ISHA,  6, 30,    //13
FAJR,  5, 25, SUNRISE,  6, 51, ZUHR, 12,  3, ASR,  2, 46, MAGHRIB,  5,  9, ISHA,  6, 31,    //14
FAJR,  5, 25, SUNRISE,  6, 51, ZUHR, 12,  3, ASR,  2, 47, MAGHRIB,  5, 10, ISHA,  6, 32,    //15
FAJR,  5, 24, SUNRISE,  6, 51, ZUHR, 12,  3, ASR,  2, 48, MAGHRIB,  5, 11, ISHA,  6, 33,    //16
FAJR,  5, 24, SUNRISE,  6, 51, ZUHR, 12,  4, ASR,  2, 48, MAGHRIB,  5, 12, ISHA,  6, 34,    //17
FAJR,  5, 24, SUNRISE,  6, 50, ZUHR, 12,  4, ASR,  2, 48, MAGHRIB,  5, 13, ISHA,  6, 34,    //18
FAJR,  5, 24, SUNRISE,  6, 50, ZUHR, 12,  4, ASR,  2, 50, MAGHRIB,  5, 14, ISHA,  6, 35,    //19
FAJR,  5, 24, SUNRISE,  6, 50, ZUHR, 12,  5, ASR,  2, 50, MAGHRIB,  5, 15, ISHA,  6, 36,    //20
FAJR,  5, 24, SUNRISE,  6, 49, ZUHR, 12,  5, ASR,  2, 52, MAGHRIB,  5, 16, ISHA,  6, 37,    //21
FAJR,  5, 23, SUNRISE,  6, 49, ZUHR, 12,  5, ASR,  2, 53, MAGHRIB,  5, 17, ISHA,  6, 38,    //22
FAJR,  5, 23, SUNRISE,  6, 49, ZUHR, 12,  6, ASR,  2, 53, MAGHRIB,  5, 18, ISHA,  6, 38,    //23
FAJR,  5, 23, SUNRISE,  7, 48, ZUHR, 12,  6, ASR,  2, 54, MAGHRIB,  5, 19, ISHA,  6, 39,    //24
FAJR,  5, 22, SUNRISE,  7, 48, ZUHR, 12,  6, ASR,  2, 55, MAGHRIB,  5, 20, ISHA,  6, 40,    //25
FAJR,  5, 22, SUNRISE,  7, 47, ZUHR, 12,  6, ASR,  2, 56, MAGHRIB,  5, 21, ISHA,  6, 41,    //26
FAJR,  5, 22, SUNRISE,  7, 47, ZUHR, 12,  6, ASR,  2, 57, MAGHRIB,  5, 22, ISHA,  6, 42,    //27
FAJR,  5, 21, SUNRISE,  7, 46, ZUHR, 12,  7, ASR,  2, 57, MAGHRIB,  5, 23, ISHA,  6, 43,    //28
FAJR,  5, 21, SUNRISE,  7, 45, ZUHR, 12,  7, ASR,  2, 57, MAGHRIB,  5, 24, ISHA,  6, 43,    //29
FAJR,  5, 20, SUNRISE,  7, 45, ZUHR, 12,  7, ASR,  2, 59, MAGHRIB,  5, 24, ISHA,  6, 44,    //30
FAJR,  5, 20, SUNRISE,  7, 44, ZUHR, 12,  7, ASR,  2, 59, MAGHRIB,  5, 25, ISHA,  6, 45,    //31
//FEB
FAJR,  5, 19, SUNRISE,  6, 44, ZUHR, 12,  7, ASR,  3,  1, MAGHRIB,  5, 26, ISHA,  6, 46,    //1
FAJR,  5, 19, SUNRISE,  6, 43, ZUHR, 12,  7, ASR,  3,  1, MAGHRIB,  5, 27, ISHA,  6, 47,    //2
FAJR,  5, 18, SUNRISE,  6, 42, ZUHR, 12,  7, ASR,  3,  2, MAGHRIB,  5, 28, ISHA,  6, 47,    //3
FAJR,  5, 17, SUNRISE,  6, 41, ZUHR, 12,  8, ASR,  3,  3, MAGHRIB,  5, 29, ISHA,  6, 48,    //4
FAJR,  5, 17, SUNRISE,  6, 41, ZUHR, 12,  8, ASR,  3,  4, MAGHRIB,  5, 30, ISHA,  6, 49,    //5
FAJR,  5, 16, SUNRISE,  6, 40, ZUHR, 12,  8, ASR,  3,  4, MAGHRIB,  5, 31, ISHA,  6, 50,    //6
FAJR,  5, 15, SUNRISE,  6, 39, ZUHR, 12,  8, ASR,  3,  5, MAGHRIB,  5, 32, ISHA,  6, 51,    //7
FAJR,  5, 15, SUNRISE,  6, 38, ZUHR, 12,  8, ASR,  3,  6, MAGHRIB,  5, 33, ISHA,  6, 51,    //8
FAJR,  5, 14, SUNRISE,  6, 37, ZUHR, 12,  8, ASR,  3,  6, MAGHRIB,  5, 34, ISHA,  6, 52,    //9
FAJR,  5, 13, SUNRISE,  6, 36, ZUHR, 12,  8, ASR,  3,  7, MAGHRIB,  5, 35, ISHA,  6, 53,    //10
FAJR,  5, 12, SUNRISE,  6, 36, ZUHR, 12,  8, ASR,  3,  7, MAGHRIB,  5, 36, ISHA,  6, 54,    //11
FAJR,  5, 12, SUNRISE,  6, 35, ZUHR, 12,  8, ASR,  3,  9, MAGHRIB,  5, 36, ISHA,  6, 55,    //12
FAJR,  5, 11, SUNRISE,  6, 34, ZUHR, 12,  8, ASR,  3,  9, MAGHRIB,  5, 37, ISHA,  6, 55,    //13
FAJR,  5, 10, SUNRISE,  6, 33, ZUHR, 12,  8, ASR,  3, 10, MAGHRIB,  5, 38, ISHA,  6, 56,    //14
FAJR,  5,  9, SUNRISE,  6, 32, ZUHR, 12,  8, ASR,  3, 10, MAGHRIB,  5, 39, ISHA,  6, 57,    //15
FAJR,  5,  8, SUNRISE,  6, 31, ZUHR, 12,  8, ASR,  3, 10, MAGHRIB,  5, 40, ISHA,  6, 58,    //16
FAJR,  5,  7, SUNRISE,  6, 30, ZUHR, 12,  8, ASR,  3, 12, MAGHRIB,  5, 41, ISHA,  6, 59,    //17
FAJR,  5,  6, SUNRISE,  6, 29, ZUHR, 12,  8, ASR,  3, 12, MAGHRIB,  5, 42, ISHA,  6, 59,    //18
FAJR,  5,  5, SUNRISE,  6, 28, ZUHR, 12,  7, ASR,  3, 13, MAGHRIB,  5, 43, ISHA,  7,  0,    //19
FAJR,  5,  4, SUNRISE,  6, 27, ZUHR, 12,  7, ASR,  3, 13, MAGHRIB,  5, 43, ISHA,  7,  1,    //20
FAJR,  5,  3, SUNRISE,  6, 26, ZUHR, 12,  7, ASR,  3, 14, MAGHRIB,  5, 44, ISHA,  7,  2,    //21
FAJR,  5,  2, SUNRISE,  6, 25, ZUHR, 12,  7, ASR,  3, 15, MAGHRIB,  5, 45, ISHA,  7,  2,    //22
FAJR,  5,  1, SUNRISE,  6, 23, ZUHR, 12,  7, ASR,  3, 15, MAGHRIB,  5, 46, ISHA,  7,  3,    //23
FAJR,  5,  0, SUNRISE,  6, 22, ZUHR, 12,  7, ASR,  3, 15, MAGHRIB,  5, 47, ISHA,  7,  4,    //24
FAJR,  4, 59, SUNRISE,  6, 21, ZUHR, 12,  7, ASR,  3, 16, MAGHRIB,  5, 48, ISHA,  7,  5,    //25
FAJR,  4, 58, SUNRISE,  6, 20, ZUHR, 12,  7, ASR,  3, 17, MAGHRIB,  5, 48, ISHA,  7,  5,    //26
FAJR,  4, 57, SUNRISE,  6, 19, ZUHR, 12,  6, ASR,  3, 17, MAGHRIB,  5, 49, ISHA,  7,  6,    //27
FAJR,  4, 56, SUNRISE,  6, 18, ZUHR, 12,  6, ASR,  3, 18, MAGHRIB,  5, 50, ISHA,  7,  7,    //28
FAJR,  4, 55, SUNRISE,  6, 17, ZUHR, 12,  6, ASR,  3, 18, MAGHRIB,  5, 51, ISHA,  7,  8,    //29
//MAR
FAJR,  5, 55, SUNRISE,  7, 17, ZUHR,  1,  6, ASR,  4, 18, MAGHRIB,  6, 51, ISHA,  8,  8,    //1
FAJR,  5, 54, SUNRISE,  7, 15, ZUHR,  1,  6, ASR,  4, 18, MAGHRIB,  6, 52, ISHA,  8,  9,    //2
FAJR,  5, 52, SUNRISE,  7, 14, ZUHR,  1,  6, ASR,  4, 18, MAGHRIB,  6, 52, ISHA,  8,  9,    //3
FAJR,  5, 51, SUNRISE,  7, 13, ZUHR,  1,  5, ASR,  4, 19, MAGHRIB,  6, 53, ISHA,  8, 10,    //4
FAJR,  5, 50, SUNRISE,  7, 12, ZUHR,  1,  5, ASR,  4, 20, MAGHRIB,  6, 54, ISHA,  8, 11,    //5
FAJR,  5, 49, SUNRISE,  7, 10, ZUHR,  1,  5, ASR,  4, 20, MAGHRIB,  6, 55, ISHA,  8, 12,    //6
FAJR,  5, 48, SUNRISE,  7,  9, ZUHR,  1,  5, ASR,  4, 20, MAGHRIB,  6, 56, ISHA,  8, 12,    //7
FAJR,  5, 46, SUNRISE,  7,  8, ZUHR,  1,  4, ASR,  4, 21, MAGHRIB,  6, 56, ISHA,  8, 13,    //8
FAJR,  5, 45, SUNRISE,  7,  7, ZUHR,  1,  4, ASR,  4, 21, MAGHRIB,  6, 57, ISHA,  8, 14,    //9
FAJR,  5, 44, SUNRISE,  7,  5, ZUHR,  1,  4, ASR,  4, 21, MAGHRIB,  6, 58, ISHA,  8, 15,    //10
FAJR,  5, 42, SUNRISE,  7,  4, ZUHR,  1,  4, ASR,  4, 22, MAGHRIB,  6, 59, ISHA,  8, 15,    //11
FAJR,  5, 41, SUNRISE,  7,  3, ZUHR,  1,  3, ASR,  4, 22, MAGHRIB,  6, 59, ISHA,  8, 16,    //12
FAJR,  5, 40, SUNRISE,  7,  2, ZUHR,  1,  3, ASR,  4, 22, MAGHRIB,  7,  0, ISHA,  8, 17,    //13
FAJR,  5, 39, SUNRISE,  7,  0, ZUHR,  1,  3, ASR,  4, 22, MAGHRIB,  7,  1, ISHA,  8, 18,    //14
FAJR,  5, 37, SUNRISE,  6, 59, ZUHR,  1,  3, ASR,  4, 23, MAGHRIB,  7,  2, ISHA,  8, 19,    //15
FAJR,  5, 36, SUNRISE,  6, 58, ZUHR,  1,  2, ASR,  4, 23, MAGHRIB,  7,  2, ISHA,  8, 19,    //16
FAJR,  5, 34, SUNRISE,  6, 56, ZUHR,  1,  2, ASR,  4, 23, MAGHRIB,  7,  3, ISHA,  8, 20,    //17
FAJR,  5, 33, SUNRISE,  6, 55, ZUHR,  1,  2, ASR,  4, 23, MAGHRIB,  7,  4, ISHA,  8, 21,    //18
FAJR,  5, 32, SUNRISE,  6, 54, ZUHR,  1,  1, ASR,  4, 24, MAGHRIB,  7,  4, ISHA,  8, 22,    //19
FAJR,  5, 30, SUNRISE,  6, 53, ZUHR,  1,  1, ASR,  4, 24, MAGHRIB,  7,  5, ISHA,  8, 22,    //20
FAJR,  5, 29, SUNRISE,  6, 51, ZUHR,  1,  1, ASR,  4, 24, MAGHRIB,  7,  6, ISHA,  8, 23,    //21
FAJR,  5, 28, SUNRISE,  6, 50, ZUHR,  1,  0, ASR,  4, 25, MAGHRIB,  7,  7, ISHA,  8, 24,    //22
FAJR,  5, 26, SUNRISE,  6, 49, ZUHR,  1,  0, ASR,  4, 25, MAGHRIB,  7,  7, ISHA,  8, 25,    //23
FAJR,  5, 25, SUNRISE,  6, 47, ZUHR,  1,  0, ASR,  4, 25, MAGHRIB,  7,  8, ISHA,  8, 26,    //24
FAJR,  5, 23, SUNRISE,  6, 46, ZUHR,  1,  0, ASR,  4, 25, MAGHRIB,  7,  9, ISHA,  8, 26,    //25
FAJR,  5, 22, SUNRISE,  6, 45, ZUHR, 12, 59, ASR,  4, 25, MAGHRIB,  7,  9, ISHA,  8, 27,    //26
FAJR,  5, 21, SUNRISE,  6, 43, ZUHR, 12, 59, ASR,  4, 25, MAGHRIB,  7, 10, ISHA,  8, 28,    //27
FAJR,  5, 19, SUNRISE,  6, 42, ZUHR, 12, 59, ASR,  4, 25, MAGHRIB,  7, 11, ISHA,  8, 29,    //28
FAJR,  5, 18, SUNRISE,  6, 41, ZUHR, 12, 58, ASR,  4, 26, MAGHRIB,  7, 12, ISHA,  8, 30,    //29
FAJR,  5, 16, SUNRISE,  6, 39, ZUHR, 12, 58, ASR,  4, 26, MAGHRIB,  7, 12, ISHA,  8, 31,    //30
FAJR,  5, 15, SUNRISE,  6, 38, ZUHR, 12, 58, ASR,  4, 26, MAGHRIB,  7, 13, ISHA,  8, 31,    //31
//APR
FAJR,  5, 13, SUNRISE,  6, 37, ZUHR, 12, 57, ASR,  4, 26, MAGHRIB,  7, 14, ISHA,  8, 32,    //1
FAJR,  5, 12, SUNRISE,  6, 35, ZUHR, 12, 57, ASR,  4, 26, MAGHRIB,  7, 14, ISHA,  8, 33,    //2
FAJR,  5, 10, SUNRISE,  6, 34, ZUHR, 12, 57, ASR,  4, 26, MAGHRIB,  7, 15, ISHA,  8, 34,    //3
FAJR,  5,  9, SUNRISE,  6, 33, ZUHR, 12, 57, ASR,  4, 26, MAGHRIB,  7, 16, ISHA,  8, 35,    //4
FAJR,  5,  8, SUNRISE,  6, 32, ZUHR, 12, 56, ASR,  4, 26, MAGHRIB,  7, 16, ISHA,  8, 36,    //5
FAJR,  5,  6, SUNRISE,  6, 30, ZUHR, 12, 56, ASR,  4, 26, MAGHRIB,  7, 17, ISHA,  8, 37,    //6
FAJR,  5,  5, SUNRISE,  6, 29, ZUHR, 12, 56, ASR,  4, 27, MAGHRIB,  7, 18, ISHA,  8, 38,    //7
FAJR,  5,  3, SUNRISE,  6, 28, ZUHR, 12, 55, ASR,  4, 27, MAGHRIB,  7, 19, ISHA,  8, 38,    //8
FAJR,  5,  2, SUNRISE,  6, 27, ZUHR, 12, 55, ASR,  4, 27, MAGHRIB,  7, 19, ISHA,  8, 39,    //9
FAJR,  5,  0, SUNRISE,  6, 25, ZUHR, 12, 55, ASR,  4, 27, MAGHRIB,  7, 20, ISHA,  8, 40,    //10
FAJR,  4, 59, SUNRISE,  6, 24, ZUHR, 12, 55, ASR,  4, 27, MAGHRIB,  7, 21, ISHA,  8, 41,    //11
FAJR,  4, 57, SUNRISE,  6, 23, ZUHR, 12, 54, ASR,  4, 27, MAGHRIB,  7, 21, ISHA,  8, 42,    //12
FAJR,  4, 56, SUNRISE,  6, 22, ZUHR, 12, 54, ASR,  4, 27, MAGHRIB,  7, 22, ISHA,  8, 43,    //13
FAJR,  4, 55, SUNRISE,  6, 20, ZUHR, 12, 54, ASR,  4, 27, MAGHRIB,  7, 23, ISHA,  8, 44,    //14
FAJR,  4, 53, SUNRISE,  6, 19, ZUHR, 12, 54, ASR,  4, 27, MAGHRIB,  7, 24, ISHA,  8, 45,    //15
FAJR,  4, 52, SUNRISE,  6, 18, ZUHR, 12, 53, ASR,  4, 27, MAGHRIB,  7, 24, ISHA,  8, 45,    //16
FAJR,  4, 50, SUNRISE,  6, 17, ZUHR, 12, 53, ASR,  4, 27, MAGHRIB,  7, 25, ISHA,  8, 47,    //17
FAJR,  4, 49, SUNRISE,  6, 16, ZUHR, 12, 53, ASR,  4, 27, MAGHRIB,  7, 26, ISHA,  8, 48,    //18
FAJR,  4, 47, SUNRISE,  6, 14, ZUHR, 12, 53, ASR,  4, 27, MAGHRIB,  7, 26, ISHA,  8, 49,    //19
FAJR,  4, 46, SUNRISE,  6, 13, ZUHR, 12, 52, ASR,  4, 27, MAGHRIB,  7, 27, ISHA,  8, 50,    //20
FAJR,  4, 45, SUNRISE,  6, 12, ZUHR, 12, 52, ASR,  4, 27, MAGHRIB,  7, 28, ISHA,  8, 51,    //21
FAJR,  4, 43, SUNRISE,  6, 11, ZUHR, 12, 52, ASR,  4, 27, MAGHRIB,  7, 29, ISHA,  8, 52,    //22
FAJR,  4, 42, SUNRISE,  6, 10, ZUHR, 12, 52, ASR,  4, 27, MAGHRIB,  7, 29, ISHA,  8, 53,    //23
FAJR,  4, 41, SUNRISE,  6,  9, ZUHR, 12, 52, ASR,  4, 27, MAGHRIB,  7, 30, ISHA,  8, 54,    //24
FAJR,  4, 39, SUNRISE,  6,  8, ZUHR, 12, 52, ASR,  4, 27, MAGHRIB,  7, 31, ISHA,  8, 55,    //25
FAJR,  4, 38, SUNRISE,  6,  7, ZUHR, 12, 51, ASR,  4, 27, MAGHRIB,  7, 32, ISHA,  8, 56,    //26
FAJR,  4, 37, SUNRISE,  6,  6, ZUHR, 12, 51, ASR,  4, 27, MAGHRIB,  7, 32, ISHA,  8, 57,    //27
FAJR,  4, 35, SUNRISE,  6,  5, ZUHR, 12, 51, ASR,  4, 27, MAGHRIB,  7, 33, ISHA,  8, 58,    //28
FAJR,  4, 34, SUNRISE,  6,  4, ZUHR, 12, 51, ASR,  4, 27, MAGHRIB,  7, 34, ISHA,  8, 59,    //29
FAJR,  4, 33, SUNRISE,  6,  3, ZUHR, 12, 51, ASR,  4, 27, MAGHRIB,  7, 34, ISHA,  9,  0,    //30
//MAY
FAJR,  4, 31, SUNRISE,  6,  2, ZUHR, 12, 51, ASR,  4, 27, MAGHRIB,  7, 35, ISHA,  9,  1,    //1
FAJR,  4, 30, SUNRISE,  6,  1, ZUHR, 12, 51, ASR,  4, 27, MAGHRIB,  7, 36, ISHA,  9,  2,    //2
FAJR,  4, 29, SUNRISE,  6,  0, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 37, ISHA,  9,  3,    //3
FAJR,  4, 28, SUNRISE,  5, 59, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 37, ISHA,  9,  4,    //4
FAJR,  4, 26, SUNRISE,  5, 58, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 38, ISHA,  9,  5,    //5
FAJR,  4, 25, SUNRISE,  5, 57, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 39, ISHA,  9,  6,    //6
FAJR,  4, 24, SUNRISE,  5, 56, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 40, ISHA,  9,  7,    //7
FAJR,  4, 23, SUNRISE,  5, 55, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 40, ISHA,  9,  8,    //8
FAJR,  4, 22, SUNRISE,  5, 54, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 41, ISHA,  9,  9,    //9
FAJR,  4, 21, SUNRISE,  5, 54, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 42, ISHA,  9, 10,    //10
FAJR,  4, 19, SUNRISE,  5, 53, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 42, ISHA,  9, 11,    //11
FAJR,  4, 18, SUNRISE,  5, 52, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 43, ISHA,  9, 12,    //12
FAJR,  4, 17, SUNRISE,  5, 51, ZUHR, 12, 50, ASR,  4, 27, MAGHRIB,  7, 44, ISHA,  9, 13,    //13
FAJR,  4, 16, SUNRISE,  5, 51, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 45, ISHA,  9, 14,    //14
FAJR,  4, 15, SUNRISE,  5, 50, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 45, ISHA,  9, 15,    //15
FAJR,  4, 14, SUNRISE,  5, 49, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 46, ISHA,  9, 16,    //16
FAJR,  4, 13, SUNRISE,  5, 49, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 47, ISHA,  9, 17,    //17
FAJR,  4, 12, SUNRISE,  5, 48, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 47, ISHA,  9, 18,    //18
FAJR,  4, 11, SUNRISE,  5, 47, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 48, ISHA,  9, 19,    //19
FAJR,  4, 11, SUNRISE,  5, 47, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 49, ISHA,  9, 20,    //20
FAJR,  4, 10, SUNRISE,  5, 46, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 50, ISHA,  9, 21,    //21
FAJR,  4,  9, SUNRISE,  5, 46, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 50, ISHA,  9, 22,    //22
FAJR,  4,  8, SUNRISE,  5, 45, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 51, ISHA,  9, 23,    //23
FAJR,  4,  7, SUNRISE,  5, 45, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 52, ISHA,  9, 24,    //24
FAJR,  4,  7, SUNRISE,  5, 44, ZUHR, 12, 50, ASR,  4, 28, MAGHRIB,  7, 52, ISHA,  9, 25,    //25
FAJR,  4,  6, SUNRISE,  5, 44, ZUHR, 12, 51, ASR,  4, 28, MAGHRIB,  7, 53, ISHA,  9, 26,    //26
FAJR,  4,  5, SUNRISE,  5, 43, ZUHR, 12, 51, ASR,  4, 29, MAGHRIB,  7, 53, ISHA,  9, 27,    //27
FAJR,  4,  4, SUNRISE,  5, 43, ZUHR, 12, 51, ASR,  4, 29, MAGHRIB,  7, 54, ISHA,  9, 28,    //28
FAJR,  4,  4, SUNRISE,  5, 43, ZUHR, 12, 51, ASR,  4, 29, MAGHRIB,  7, 55, ISHA,  9, 29,    //29
FAJR,  4,  3, SUNRISE,  5, 42, ZUHR, 12, 51, ASR,  4, 29, MAGHRIB,  7, 55, ISHA,  9, 29,    //30
FAJR,  4,  3, SUNRISE,  5, 42, ZUHR, 12, 51, ASR,  4, 29, MAGHRIB,  7, 56, ISHA,  9, 30,    //31
//JUNE
FAJR,  4,  2, SUNRISE,  5, 42, ZUHR, 12, 51, ASR,  4, 29, MAGHRIB,  7, 56, ISHA,  9, 31,    //1
FAJR,  4,  2, SUNRISE,  5, 41, ZUHR, 12, 52, ASR,  4, 29, MAGHRIB,  7, 57, ISHA,  9, 32,    //2
FAJR,  4,  1, SUNRISE,  5, 41, ZUHR, 12, 52, ASR,  4, 30, MAGHRIB,  7, 58, ISHA,  9, 33,    //3
FAJR,  4,  1, SUNRISE,  5, 41, ZUHR, 12, 52, ASR,  4, 30, MAGHRIB,  7, 58, ISHA,  9, 33,    //4
FAJR,  4,  0, SUNRISE,  5, 41, ZUHR, 12, 52, ASR,  4, 30, MAGHRIB,  7, 59, ISHA,  9, 34,    //5
FAJR,  4,  0, SUNRISE,  5, 41, ZUHR, 12, 52, ASR,  4, 30, MAGHRIB,  7, 59, ISHA,  9, 35,    //6
FAJR,  4,  0, SUNRISE,  5, 40, ZUHR, 12, 52, ASR,  4, 30, MAGHRIB,  8,  0, ISHA,  9, 35,    //7
FAJR,  4,  0, SUNRISE,  5, 40, ZUHR, 12, 53, ASR,  4, 30, MAGHRIB,  8,  0, ISHA,  9, 36,    //8
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 53, ASR,  4, 31, MAGHRIB,  8,  1, ISHA,  9, 37,    //9
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 53, ASR,  4, 31, MAGHRIB,  8,  1, ISHA,  9, 37,    //10
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 53, ASR,  4, 31, MAGHRIB,  8,  1, ISHA,  9, 38,    //11
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 53, ASR,  4, 31, MAGHRIB,  8,  2, ISHA,  9, 38,    //12
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 54, ASR,  4, 31, MAGHRIB,  8,  2, ISHA,  9, 39,    //13
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 54, ASR,  4, 32, MAGHRIB,  8,  3, ISHA,  9, 39,    //14
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 54, ASR,  4, 32, MAGHRIB,  8,  3, ISHA,  9, 40,    //15
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 54, ASR,  4, 32, MAGHRIB,  8,  3, ISHA,  9, 40,    //16
FAJR,  3, 59, SUNRISE,  5, 40, ZUHR, 12, 54, ASR,  4, 32, MAGHRIB,  8,  4, ISHA,  9, 40,    //17
FAJR,  3, 59, SUNRISE,  5, 41, ZUHR, 12, 55, ASR,  4, 32, MAGHRIB,  8,  4, ISHA,  9, 41,    //18
FAJR,  3, 59, SUNRISE,  5, 41, ZUHR, 12, 55, ASR,  4, 33, MAGHRIB,  8,  4, ISHA,  9, 41,    //19
FAJR,  3, 59, SUNRISE,  5, 41, ZUHR, 12, 55, ASR,  4, 33, MAGHRIB,  8,  4, ISHA,  9, 41,    //20
FAJR,  3, 59, SUNRISE,  5, 41, ZUHR, 12, 55, ASR,  4, 33, MAGHRIB,  8,  5, ISHA,  9, 41,    //21
FAJR,  3, 59, SUNRISE,  5, 41, ZUHR, 12, 56, ASR,  4, 33, MAGHRIB,  8,  5, ISHA,  9, 42,    //22
FAJR,  4,  0, SUNRISE,  5, 42, ZUHR, 12, 56, ASR,  4, 34, MAGHRIB,  8,  5, ISHA,  9, 42,    //23
FAJR,  4,  0, SUNRISE,  5, 42, ZUHR, 12, 56, ASR,  4, 34, MAGHRIB,  8,  5, ISHA,  9, 42,    //24
FAJR,  4,  0, SUNRISE,  5, 42, ZUHR, 12, 56, ASR,  4, 34, MAGHRIB,  8,  5, ISHA,  9, 42,    //25
FAJR,  4,  1, SUNRISE,  5, 42, ZUHR, 12, 56, ASR,  4, 34, MAGHRIB,  8,  5, ISHA,  9, 42,    //26
FAJR,  4,  1, SUNRISE,  5, 43, ZUHR, 12, 57, ASR,  4, 34, MAGHRIB,  8,  5, ISHA,  9, 42,    //27
FAJR,  4,  2, SUNRISE,  5, 43, ZUHR, 12, 57, ASR,  4, 35, MAGHRIB,  8,  5, ISHA,  9, 42,    //28
FAJR,  4,  2, SUNRISE,  5, 43, ZUHR, 12, 57, ASR,  4, 35, MAGHRIB,  8,  5, ISHA,  9, 42,    //29
FAJR,  4,  2, SUNRISE,  5, 44, ZUHR, 12, 57, ASR,  4, 35, MAGHRIB,  8,  5, ISHA,  9, 42,    //30
//JULY
FAJR,  4,  3, SUNRISE,  5, 44, ZUHR, 12, 57, ASR,  4, 35, MAGHRIB,  8,  5, ISHA,  9, 42,    //1
FAJR,  4,  4, SUNRISE,  5, 45, ZUHR, 12, 58, ASR,  4, 35, MAGHRIB,  8,  5, ISHA,  9, 41,    //2
FAJR,  4,  4, SUNRISE,  5, 45, ZUHR, 12, 58, ASR,  4, 36, MAGHRIB,  8,  5, ISHA,  9, 41,    //3
FAJR,  4,  5, SUNRISE,  5, 46, ZUHR, 12, 58, ASR,  4, 36, MAGHRIB,  8,  5, ISHA,  9, 41,    //4
FAJR,  4,  5, SUNRISE,  5, 46, ZUHR, 12, 58, ASR,  4, 36, MAGHRIB,  8,  5, ISHA,  9, 41,    //5
FAJR,  4,  6, SUNRISE,  5, 47, ZUHR, 12, 58, ASR,  4, 36, MAGHRIB,  8,  5, ISHA,  9, 40,    //6
FAJR,  4,  7, SUNRISE,  5, 47, ZUHR, 12, 58, ASR,  4, 36, MAGHRIB,  8,  5, ISHA,  9, 40,    //7
FAJR,  4,  7, SUNRISE,  5, 48, ZUHR, 12, 59, ASR,  4, 37, MAGHRIB,  8,  5, ISHA,  9, 39,    //8
FAJR,  4,  8, SUNRISE,  5, 48, ZUHR, 12, 59, ASR,  4, 37, MAGHRIB,  8,  4, ISHA,  9, 39,    //9
FAJR,  4,  9, SUNRISE,  5, 49, ZUHR, 12, 59, ASR,  4, 37, MAGHRIB,  8,  4, ISHA,  9, 39,    //10
FAJR,  4, 10, SUNRISE,  5, 49, ZUHR, 12, 59, ASR,  4, 37, MAGHRIB,  8,  4, ISHA,  9, 38,    //11
FAJR,  4, 10, SUNRISE,  5, 50, ZUHR, 12, 59, ASR,  4, 37, MAGHRIB,  8,  3, ISHA,  9, 38,    //12
FAJR,  4, 11, SUNRISE,  5, 50, ZUHR, 12, 59, ASR,  4, 37, MAGHRIB,  8,  3, ISHA,  9, 37,    //13
FAJR,  4, 12, SUNRISE,  5, 51, ZUHR, 12, 59, ASR,  4, 37, MAGHRIB,  8,  3, ISHA,  9, 36,    //14
FAJR,  4, 13, SUNRISE,  5, 51, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  8,  2, ISHA,  9, 36,    //15
FAJR,  4, 14, SUNRISE,  5, 52, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  8,  2, ISHA,  9, 35,    //16
FAJR,  4, 15, SUNRISE,  5, 53, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  8,  1, ISHA,  9, 34,    //17
FAJR,  4, 15, SUNRISE,  5, 53, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  8,  1, ISHA,  9, 34,    //18
FAJR,  4, 16, SUNRISE,  5, 54, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  8,  1, ISHA,  9, 33,    //19
FAJR,  4, 17, SUNRISE,  5, 54, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  8,  0, ISHA,  9, 32,    //20
FAJR,  4, 18, SUNRISE,  5, 55, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 59, ISHA,  9, 31,    //21
FAJR,  4, 19, SUNRISE,  5, 56, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 59, ISHA,  9, 30,    //22
FAJR,  4, 20, SUNRISE,  5, 56, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 58, ISHA,  9, 29,    //23
FAJR,  4, 21, SUNRISE,  5, 57, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 58, ISHA,  9, 28,    //24
FAJR,  4, 22, SUNRISE,  5, 58, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 57, ISHA,  9, 28,    //25
FAJR,  4, 23, SUNRISE,  5, 58, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 56, ISHA,  9, 27,    //26
FAJR,  4, 24, SUNRISE,  5, 59, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 56, ISHA,  9, 26,    //27
FAJR,  4, 25, SUNRISE,  6,  0, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 55, ISHA,  9, 25,    //28
FAJR,  4, 26, SUNRISE,  6,  0, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 54, ISHA,  9, 23,    //29
FAJR,  4, 27, SUNRISE,  6,  1, ZUHR,  1,  0, ASR,  4, 38, MAGHRIB,  7, 53, ISHA,  9, 22,    //30
FAJR,  4, 28, SUNRISE,  6,  2, ZUHR,  1,  0, ASR,  4, 37, MAGHRIB,  7, 53, ISHA,  9, 21,    //31
//August
FAJR,  4, 29, SUNRISE,  6,  2, ZUHR,  1,  0, ASR,  4, 37, MAGHRIB,  7, 52, ISHA,  9, 20,    //1
FAJR,  4, 30, SUNRISE,  6,  3, ZUHR,  1,  0, ASR,  4, 37, MAGHRIB,  7, 51, ISHA,  9, 19,    //2
FAJR,  4, 31, SUNRISE,  6,  4, ZUHR,  1,  0, ASR,  4, 37, MAGHRIB,  7, 50, ISHA,  9, 18,    //3
FAJR,  4, 32, SUNRISE,  6,  4, ZUHR,  1,  0, ASR,  4, 37, MAGHRIB,  7, 49, ISHA,  9, 17,    //4
FAJR,  4, 33, SUNRISE,  6,  5, ZUHR,  1,  0, ASR,  4, 37, MAGHRIB,  7, 48, ISHA,  9, 16,    //5
FAJR,  4, 34, SUNRISE,  6,  6, ZUHR, 12, 59, ASR,  4, 36, MAGHRIB,  7, 48, ISHA,  9, 14,    //6
FAJR,  4, 35, SUNRISE,  6,  7, ZUHR, 12, 59, ASR,  4, 36, MAGHRIB,  7, 47, ISHA,  9, 13,    //7
FAJR,  4, 36, SUNRISE,  6,  7, ZUHR, 12, 59, ASR,  4, 36, MAGHRIB,  7, 46, ISHA,  9, 12,    //8
FAJR,  4, 37, SUNRISE,  6,  8, ZUHR, 12, 59, ASR,  4, 36, MAGHRIB,  7, 45, ISHA,  9, 11,    //9
FAJR,  4, 38, SUNRISE,  6,  9, ZUHR, 12, 59, ASR,  4, 35, MAGHRIB,  7, 44, ISHA,  9,  9,    //10
FAJR,  4, 39, SUNRISE,  6,  9, ZUHR, 12, 59, ASR,  4, 35, MAGHRIB,  7, 43, ISHA,  9,  8,    //11
FAJR,  4, 40, SUNRISE,  6, 10, ZUHR, 12, 59, ASR,  4, 35, MAGHRIB,  7, 42, ISHA,  9,  7,    //12
FAJR,  4, 41, SUNRISE,  6, 11, ZUHR, 12, 58, ASR,  4, 34, MAGHRIB,  7, 41, ISHA,  9,  5,    //13
FAJR,  4, 42, SUNRISE,  6, 11, ZUHR, 12, 58, ASR,  4, 34, MAGHRIB,  7, 40, ISHA,  9,  4,    //14
FAJR,  4, 42, SUNRISE,  6, 12, ZUHR, 12, 58, ASR,  4, 34, MAGHRIB,  7, 39, ISHA,  9,  3,    //15
FAJR,  4, 43, SUNRISE,  6, 13, ZUHR, 12, 58, ASR,  4, 33, MAGHRIB,  7, 37, ISHA,  9,  1,    //16
FAJR,  4, 44, SUNRISE,  6, 13, ZUHR, 12, 58, ASR,  4, 33, MAGHRIB,  7, 36, ISHA,  9,  0,    //17
FAJR,  4, 45, SUNRISE,  6, 14, ZUHR, 12, 57, ASR,  4, 33, MAGHRIB,  7, 35, ISHA,  8, 59,    //18
FAJR,  4, 46, SUNRISE,  6, 15, ZUHR, 12, 57, ASR,  4, 32, MAGHRIB,  7, 34, ISHA,  8, 57,    //19
FAJR,  4, 47, SUNRISE,  6, 15, ZUHR, 12, 57, ASR,  4, 32, MAGHRIB,  7, 33, ISHA,  8, 56,    //20
FAJR,  4, 48, SUNRISE,  6, 16, ZUHR, 12, 57, ASR,  4, 31, MAGHRIB,  7, 32, ISHA,  8, 54,    //21
FAJR,  4, 49, SUNRISE,  6, 17, ZUHR, 12, 56, ASR,  4, 31, MAGHRIB,  7, 31, ISHA,  8, 53,    //22
FAJR,  4, 50, SUNRISE,  6, 17, ZUHR, 12, 56, ASR,  4, 30, MAGHRIB,  7, 29, ISHA,  8, 52,    //23
FAJR,  4, 51, SUNRISE,  6, 18, ZUHR, 12, 56, ASR,  4, 30, MAGHRIB,  7, 28, ISHA,  8, 50,    //24
FAJR,  4, 52, SUNRISE,  6, 19, ZUHR, 12, 56, ASR,  4, 29, MAGHRIB,  7, 27, ISHA,  8, 49,    //25
FAJR,  4, 53, SUNRISE,  6, 19, ZUHR, 12, 55, ASR,  4, 29, MAGHRIB,  7, 26, ISHA,  8, 47,    //26
FAJR,  4, 54, SUNRISE,  6, 20, ZUHR, 12, 55, ASR,  4, 28, MAGHRIB,  7, 25, ISHA,  8, 46,    //27
FAJR,  4, 54, SUNRISE,  6, 21, ZUHR, 12, 55, ASR,  4, 28, MAGHRIB,  7, 23, ISHA,  8, 44,    //28
FAJR,  4, 55, SUNRISE,  6, 21, ZUHR, 12, 54, ASR,  4, 27, MAGHRIB,  7, 22, ISHA,  8, 43,    //29
FAJR,  4, 56, SUNRISE,  6, 22, ZUHR, 12, 54, ASR,  4, 26, MAGHRIB,  7, 21, ISHA,  8, 41,    //30
FAJR,  4, 57, SUNRISE,  6, 23, ZUHR, 12, 54, ASR,  4, 26, MAGHRIB,  7, 20, ISHA,  8, 40,    //31
//SEP
FAJR,  4, 58, SUNRISE,  6, 23, ZUHR, 12, 54, ASR,  4, 25, MAGHRIB,  7, 18, ISHA,  8, 38,    //1
FAJR,  4, 59, SUNRISE,  6, 24, ZUHR, 12, 53, ASR,  4, 25, MAGHRIB,  7, 17, ISHA,  8, 37,    //2
FAJR,  5,  0, SUNRISE,  6, 24, ZUHR, 12, 53, ASR,  4, 24, MAGHRIB,  7, 16, ISHA,  8, 35,    //3
FAJR,  5,  0, SUNRISE,  6, 25, ZUHR, 12, 53, ASR,  4, 23, MAGHRIB,  7, 14, ISHA,  8, 34,    //4
FAJR,  5,  1, SUNRISE,  6, 26, ZUHR, 12, 52, ASR,  4, 23, MAGHRIB,  7, 13, ISHA,  8, 32,    //5
FAJR,  5,  2, SUNRISE,  6, 26, ZUHR, 12, 52, ASR,  4, 22, MAGHRIB,  7, 12, ISHA,  8, 31,    //6
FAJR,  5,  3, SUNRISE,  6, 27, ZUHR, 12, 52, ASR,  4, 21, MAGHRIB,  7, 11, ISHA,  8, 30,    //7
FAJR,  5,  4, SUNRISE,  6, 28, ZUHR, 12, 51, ASR,  4, 20, MAGHRIB,  7,  9, ISHA,  8, 28,    //8
FAJR,  5,  4, SUNRISE,  6, 28, ZUHR, 12, 51, ASR,  4, 20, MAGHRIB,  7,  8, ISHA,  8, 27,    //9
FAJR,  5,  5, SUNRISE,  6, 29, ZUHR, 12, 51, ASR,  4, 19, MAGHRIB,  7,  7, ISHA,  8, 25,    //10
FAJR,  5,  6, SUNRISE,  6, 30, ZUHR, 12, 50, ASR,  4, 18, MAGHRIB,  7,  5, ISHA,  8, 24,    //11
FAJR,  5,  7, SUNRISE,  6, 30, ZUHR, 12, 50, ASR,  4, 17, MAGHRIB,  7,  4, ISHA,  8, 22,    //12
FAJR,  5,  8, SUNRISE,  6, 31, ZUHR, 12, 49, ASR,  4, 17, MAGHRIB,  7,  3, ISHA,  8, 21,    //13
FAJR,  5,  8, SUNRISE,  6, 32, ZUHR, 12, 49, ASR,  4, 16, MAGHRIB,  7,  1, ISHA,  8, 19,    //14
FAJR,  5,  9, SUNRISE,  6, 32, ZUHR, 12, 49, ASR,  4, 15, MAGHRIB,  7,  0, ISHA,  8, 18,    //15
FAJR,  5, 10, SUNRISE,  6, 33, ZUHR, 12, 48, ASR,  4, 14, MAGHRIB,  6, 58, ISHA,  8, 16,    //16
FAJR,  5, 11, SUNRISE,  6, 33, ZUHR, 12, 48, ASR,  4, 13, MAGHRIB,  6, 57, ISHA,  8, 15,    //17
FAJR,  5, 11, SUNRISE,  6, 34, ZUHR, 12, 48, ASR,  4, 13, MAGHRIB,  6, 56, ISHA,  8, 13,    //18
FAJR,  5, 12, SUNRISE,  6, 35, ZUHR, 12, 47, ASR,  4, 12, MAGHRIB,  6, 54, ISHA,  8, 12,    //19
FAJR,  5, 13, SUNRISE,  6, 35, ZUHR, 12, 47, ASR,  4, 11, MAGHRIB,  6, 53, ISHA,  8, 10,    //20
FAJR,  5, 14, SUNRISE,  6, 36, ZUHR, 12, 47, ASR,  4, 10, MAGHRIB,  6, 52, ISHA,  8,  9,    //21
FAJR,  5, 14, SUNRISE,  6, 37, ZUHR, 12, 46, ASR,  4,  9, MAGHRIB,  6, 50, ISHA,  8,  8,    //22
FAJR,  5, 15, SUNRISE,  6, 37, ZUHR, 12, 46, ASR,  4,  8, MAGHRIB,  6, 49, ISHA,  8,  6,    //23
FAJR,  5, 16, SUNRISE,  6, 38, ZUHR, 12, 46, ASR,  4,  8, MAGHRIB,  6, 48, ISHA,  8,  5,    //24
FAJR,  5, 16, SUNRISE,  6, 39, ZUHR, 12, 45, ASR,  4,  7, MAGHRIB,  6, 46, ISHA,  8,  3,    //25
FAJR,  5, 17, SUNRISE,  6, 39, ZUHR, 12, 45, ASR,  4,  6, MAGHRIB,  6, 45, ISHA,  8,  2,    //26
FAJR,  5, 18, SUNRISE,  6, 40, ZUHR, 12, 45, ASR,  4,  5, MAGHRIB,  6, 44, ISHA,  8,  1,    //27
FAJR,  5, 19, SUNRISE,  6, 41, ZUHR, 12, 44, ASR,  4,  4, MAGHRIB,  6, 42, ISHA,  7, 59,    //28
FAJR,  5, 19, SUNRISE,  6, 41, ZUHR, 12, 44, ASR,  4,  3, MAGHRIB,  6, 41, ISHA,  7, 58,    //29
FAJR,  5, 20, SUNRISE,  6, 42, ZUHR, 12, 44, ASR,  4,  2, MAGHRIB,  6, 40, ISHA,  7, 56,    //30
//OCT
FAJR,  5, 21, SUNRISE,  6, 43, ZUHR, 12, 43, ASR,  4,  1, MAGHRIB,  6, 38, ISHA,  7, 55,    //1
FAJR,  5, 21, SUNRISE,  6, 43, ZUHR, 12, 43, ASR,  4,  1, MAGHRIB,  6, 37, ISHA,  7, 54,    //2
FAJR,  5, 22, SUNRISE,  6, 44, ZUHR, 12, 43, ASR,  4,  0, MAGHRIB,  6, 36, ISHA,  7, 52,    //3
FAJR,  5, 23, SUNRISE,  6, 45, ZUHR, 12, 42, ASR,  3, 59, MAGHRIB,  6, 34, ISHA,  7, 51,    //4
FAJR,  5, 24, SUNRISE,  6, 45, ZUHR, 12, 42, ASR,  3, 58, MAGHRIB,  6, 33, ISHA,  7, 50,    //5
FAJR,  5, 24, SUNRISE,  6, 46, ZUHR, 12, 42, ASR,  3, 57, MAGHRIB,  6, 32, ISHA,  7, 49,    //6
FAJR,  5, 25, SUNRISE,  6, 47, ZUHR, 12, 41, ASR,  3, 56, MAGHRIB,  6, 31, ISHA,  7, 47,    //7
FAJR,  5, 26, SUNRISE,  6, 47, ZUHR, 12, 41, ASR,  3, 55, MAGHRIB,  6, 29, ISHA,  7, 46,    //8
FAJR,  5, 26, SUNRISE,  6, 48, ZUHR, 12, 41, ASR,  3, 54, MAGHRIB,  6, 28, ISHA,  7, 45,    //9
FAJR,  5, 27, SUNRISE,  6, 49, ZUHR, 12, 41, ASR,  3, 53, MAGHRIB,  6, 27, ISHA,  7, 44,    //10
FAJR,  5, 28, SUNRISE,  6, 50, ZUHR, 12, 40, ASR,  3, 52, MAGHRIB,  6, 26, ISHA,  7, 42,    //11
FAJR,  5, 28, SUNRISE,  6, 50, ZUHR, 12, 40, ASR,  3, 52, MAGHRIB,  6, 24, ISHA,  7, 41,    //12
FAJR,  5, 29, SUNRISE,  6, 51, ZUHR, 12, 40, ASR,  3, 51, MAGHRIB,  6, 23, ISHA,  7, 40,    //13
FAJR,  5, 30, SUNRISE,  6, 52, ZUHR, 12, 40, ASR,  3, 50, MAGHRIB,  6, 22, ISHA,  7, 39,    //14
FAJR,  5, 31, SUNRISE,  6, 53, ZUHR, 12, 39, ASR,  3, 49, MAGHRIB,  6, 21, ISHA,  7, 38,    //15
FAJR,  5, 31, SUNRISE,  6, 53, ZUHR, 12, 39, ASR,  3, 48, MAGHRIB,  6, 19, ISHA,  7, 36,    //16
FAJR,  5, 32, SUNRISE,  6, 54, ZUHR, 12, 39, ASR,  3, 47, MAGHRIB,  6, 18, ISHA,  7, 35,    //17
FAJR,  5, 33, SUNRISE,  6, 55, ZUHR, 12, 39, ASR,  3, 46, MAGHRIB,  6, 17, ISHA,  7, 34,    //18
FAJR,  5, 33, SUNRISE,  6, 56, ZUHR, 12, 39, ASR,  3, 45, MAGHRIB,  6, 16, ISHA,  7, 33,    //19
FAJR,  5, 34, SUNRISE,  6, 56, ZUHR, 12, 38, ASR,  3, 45, MAGHRIB,  6, 15, ISHA,  7, 32,    //20
FAJR,  5, 35, SUNRISE,  6, 57, ZUHR, 12, 38, ASR,  3, 44, MAGHRIB,  6, 14, ISHA,  7, 31,    //21
FAJR,  5, 35, SUNRISE,  6, 58, ZUHR, 12, 38, ASR,  3, 43, MAGHRIB,  6, 13, ISHA,  7, 30,    //22
FAJR,  5, 36, SUNRISE,  6, 59, ZUHR, 12, 38, ASR,  3, 42, MAGHRIB,  6, 12, ISHA,  7, 29,    //23
FAJR,  5, 37, SUNRISE,  7,  0, ZUHR, 12, 38, ASR,  3, 41, MAGHRIB,  6, 11, ISHA,  7, 28,    //24
FAJR,  5, 38, SUNRISE,  7,  0, ZUHR, 12, 38, ASR,  3, 41, MAGHRIB,  6, 10, ISHA,  7, 27,    //25
FAJR,  5, 38, SUNRISE,  7,  1, ZUHR, 12, 38, ASR,  3, 40, MAGHRIB,  6,  9, ISHA,  7, 26,    //26
FAJR,  5, 39, SUNRISE,  7,  2, ZUHR, 12, 37, ASR,  3, 39, MAGHRIB,  6,  8, ISHA,  7, 25,    //27
FAJR,  5, 40, SUNRISE,  7,  3, ZUHR, 12, 37, ASR,  3, 39, MAGHRIB,  6,  7, ISHA,  7, 24,    //28
FAJR,  5, 41, SUNRISE,  7,  4, ZUHR, 12, 37, ASR,  3, 38, MAGHRIB,  6,  6, ISHA,  7, 24,    //29
FAJR,  5, 41, SUNRISE,  7,  4, ZUHR, 12, 37, ASR,  3, 37, MAGHRIB,  6,  5, ISHA,  7, 23,    //30
FAJR,  5, 42, SUNRISE,  7,  5, ZUHR, 12, 37, ASR,  3, 37, MAGHRIB,  6,  4, ISHA,  7, 22,    //31
//NOV
FAJR,  4, 43, SUNRISE,  6,  6, ZUHR, 11, 37, ASR,  2, 36, MAGHRIB,  5,  3, ISHA,  6, 21,    //1
FAJR,  4, 44, SUNRISE,  6,  7, ZUHR, 11, 37, ASR,  2, 35, MAGHRIB,  5,  2, ISHA,  6, 20,    //2
FAJR,  4, 44, SUNRISE,  6,  8, ZUHR, 11, 37, ASR,  2, 34, MAGHRIB,  5,  1, ISHA,  6, 20,    //3
FAJR,  4, 45, SUNRISE,  6,  9, ZUHR, 11, 37, ASR,  2, 34, MAGHRIB,  5,  0, ISHA,  6, 19,    //4
FAJR,  4, 46, SUNRISE,  6, 10, ZUHR, 11, 37, ASR,  2, 33, MAGHRIB,  4, 59, ISHA,  6, 18,    //5
FAJR,  4, 47, SUNRISE,  6, 11, ZUHR, 11, 37, ASR,  2, 32, MAGHRIB,  4, 59, ISHA,  6, 18,    //6
FAJR,  4, 47, SUNRISE,  6, 11, ZUHR, 11, 37, ASR,  2, 32, MAGHRIB,  4, 58, ISHA,  6, 17,    //7
FAJR,  4, 48, SUNRISE,  6, 12, ZUHR, 11, 37, ASR,  2, 32, MAGHRIB,  4, 57, ISHA,  6, 16,    //8
FAJR,  4, 49, SUNRISE,  6, 13, ZUHR, 11, 37, ASR,  2, 30, MAGHRIB,  4, 56, ISHA,  6, 16,    //9
FAJR,  4, 50, SUNRISE,  6, 14, ZUHR, 11, 38, ASR,  2, 30, MAGHRIB,  4, 56, ISHA,  6, 15,    //10
FAJR,  4, 50, SUNRISE,  6, 15, ZUHR, 11, 38, ASR,  2, 30, MAGHRIB,  4, 55, ISHA,  6, 15,    //11
FAJR,  4, 51, SUNRISE,  6, 16, ZUHR, 11, 38, ASR,  2, 29, MAGHRIB,  4, 54, ISHA,  6, 14,    //12
FAJR,  4, 52, SUNRISE,  6, 17, ZUHR, 11, 38, ASR,  2, 28, MAGHRIB,  4, 54, ISHA,  6, 14,    //13
FAJR,  4, 53, SUNRISE,  6, 18, ZUHR, 11, 38, ASR,  2, 28, MAGHRIB,  4, 53, ISHA,  6, 13,    //14
FAJR,  4, 53, SUNRISE,  6, 19, ZUHR, 11, 38, ASR,  2, 28, MAGHRIB,  4, 52, ISHA,  6, 13,    //15
FAJR,  4, 54, SUNRISE,  6, 19, ZUHR, 11, 38, ASR,  2, 27, MAGHRIB,  4, 52, ISHA,  6, 12,    //16
FAJR,  4, 55, SUNRISE,  6, 20, ZUHR, 11, 39, ASR,  2, 27, MAGHRIB,  4, 51, ISHA,  6, 12,    //17
FAJR,  4, 56, SUNRISE,  6, 21, ZUHR, 11, 39, ASR,  2, 26, MAGHRIB,  4, 51, ISHA,  6, 11,    //18
FAJR,  4, 57, SUNRISE,  6, 22, ZUHR, 11, 39, ASR,  2, 26, MAGHRIB,  4, 50, ISHA,  6, 11,    //19
FAJR,  4, 57, SUNRISE,  6, 23, ZUHR, 11, 39, ASR,  2, 26, MAGHRIB,  4, 50, ISHA,  6, 11,    //20
FAJR,  4, 58, SUNRISE,  6, 24, ZUHR, 11, 39, ASR,  2, 25, MAGHRIB,  4, 50, ISHA,  6, 11,    //21
FAJR,  4, 59, SUNRISE,  6, 25, ZUHR, 11, 40, ASR,  2, 25, MAGHRIB,  4, 49, ISHA,  6, 10,    //22
FAJR,  5,  0, SUNRISE,  6, 26, ZUHR, 11, 40, ASR,  2, 25, MAGHRIB,  4, 49, ISHA,  6, 10,    //23
FAJR,  5,  0, SUNRISE,  6, 27, ZUHR, 11, 40, ASR,  2, 25, MAGHRIB,  4, 49, ISHA,  6, 10,    //24
FAJR,  5,  1, SUNRISE,  6, 28, ZUHR, 11, 41, ASR,  2, 25, MAGHRIB,  4, 48, ISHA,  6, 10,    //25
FAJR,  5,  2, SUNRISE,  6, 28, ZUHR, 11, 41, ASR,  2, 25, MAGHRIB,  4, 48, ISHA,  6, 10,    //26
FAJR,  5,  3, SUNRISE,  6, 29, ZUHR, 11, 41, ASR,  2, 24, MAGHRIB,  4, 48, ISHA,  6, 10,    //27
FAJR,  5,  3, SUNRISE,  6, 30, ZUHR, 11, 42, ASR,  2, 24, MAGHRIB,  4, 48, ISHA,  6,  9,    //28
FAJR,  5,  4, SUNRISE,  6, 31, ZUHR, 11, 42, ASR,  2, 24, MAGHRIB,  4, 48, ISHA,  6,  9,    //29
FAJR,  5,  5, SUNRISE,  6, 32, ZUHR, 11, 42, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6,  9,    //30
//DEC
FAJR,  5,  6, SUNRISE,  6, 33, ZUHR, 11, 43, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6,  9,    //1
FAJR,  5,  6, SUNRISE,  6, 34, ZUHR, 11, 43, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6,  9,    //2
FAJR,  5,  7, SUNRISE,  6, 34, ZUHR, 11, 43, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6, 10,    //3
FAJR,  5,  8, SUNRISE,  6, 35, ZUHR, 11, 44, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6, 10,    //4
FAJR,  5,  9, SUNRISE,  6, 36, ZUHR, 11, 44, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6, 10,    //5
FAJR,  5,  9, SUNRISE,  6, 37, ZUHR, 11, 45, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6, 10,    //6
FAJR,  5, 10, SUNRISE,  6, 38, ZUHR, 11, 45, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6, 10,    //7
FAJR,  5, 11, SUNRISE,  6, 38, ZUHR, 11, 46, ASR,  2, 24, MAGHRIB,  4, 47, ISHA,  6, 10,    //8
FAJR,  5, 11, SUNRISE,  6, 39, ZUHR, 11, 46, ASR,  2, 25, MAGHRIB,  4, 48, ISHA,  6, 10,    //9
FAJR,  5, 12, SUNRISE,  6, 40, ZUHR, 11, 46, ASR,  2, 25, MAGHRIB,  4, 48, ISHA,  6, 11,    //10
FAJR,  5, 13, SUNRISE,  6, 41, ZUHR, 11, 47, ASR,  2, 25, MAGHRIB,  4, 48, ISHA,  6, 11,    //11
FAJR,  5, 13, SUNRISE,  6, 41, ZUHR, 11, 47, ASR,  2, 25, MAGHRIB,  4, 48, ISHA,  6, 11,    //12
FAJR,  5, 14, SUNRISE,  6, 42, ZUHR, 11, 48, ASR,  2, 26, MAGHRIB,  4, 48, ISHA,  6, 12,    //13
FAJR,  5, 15, SUNRISE,  6, 43, ZUHR, 11, 48, ASR,  2, 26, MAGHRIB,  4, 49, ISHA,  6, 12,    //14
FAJR,  5, 15, SUNRISE,  6, 43, ZUHR, 11, 49, ASR,  2, 26, MAGHRIB,  4, 49, ISHA,  6, 12,    //15
FAJR,  5, 16, SUNRISE,  6, 44, ZUHR, 11, 49, ASR,  2, 27, MAGHRIB,  4, 49, ISHA,  6, 13,    //16
FAJR,  5, 16, SUNRISE,  6, 45, ZUHR, 11, 50, ASR,  2, 27, MAGHRIB,  4, 50, ISHA,  6, 13,    //17
FAJR,  5, 17, SUNRISE,  6, 45, ZUHR, 11, 50, ASR,  2, 27, MAGHRIB,  4, 50, ISHA,  6, 13,    //18
FAJR,  5, 18, SUNRISE,  6, 46, ZUHR, 11, 51, ASR,  2, 28, MAGHRIB,  4, 51, ISHA,  6, 14,    //19
FAJR,  5, 18, SUNRISE,  6, 46, ZUHR, 11, 51, ASR,  2, 29, MAGHRIB,  4, 51, ISHA,  6, 14,    //20
FAJR,  5, 19, SUNRISE,  6, 47, ZUHR, 11, 52, ASR,  2, 29, MAGHRIB,  4, 52, ISHA,  6, 15,    //21
FAJR,  5, 19, SUNRISE,  6, 47, ZUHR, 11, 52, ASR,  2, 29, MAGHRIB,  4, 52, ISHA,  6, 15,    //22
FAJR,  5, 20, SUNRISE,  6, 48, ZUHR, 11, 53, ASR,  2, 30, MAGHRIB,  4, 53, ISHA,  6, 16,    //23
FAJR,  5, 20, SUNRISE,  6, 48, ZUHR, 11, 53, ASR,  2, 31, MAGHRIB,  4, 53, ISHA,  6, 16,    //24
FAJR,  5, 20, SUNRISE,  6, 49, ZUHR, 11, 54, ASR,  2, 31, MAGHRIB,  4, 54, ISHA,  6, 17,    //25
FAJR,  5, 21, SUNRISE,  6, 49, ZUHR, 11, 54, ASR,  2, 31, MAGHRIB,  4, 54, ISHA,  6, 18,    //26
FAJR,  5, 21, SUNRISE,  6, 49, ZUHR, 11, 55, ASR,  2, 32, MAGHRIB,  4, 55, ISHA,  6, 18,    //27
FAJR,  5, 22, SUNRISE,  6, 50, ZUHR, 11, 55, ASR,  2, 33, MAGHRIB,  4, 56, ISHA,  6, 19,    //28
FAJR,  5, 22, SUNRISE,  6, 50, ZUHR, 11, 56, ASR,  2, 33, MAGHRIB,  4, 56, ISHA,  6, 19,    //29
FAJR,  5, 22, SUNRISE,  6, 50, ZUHR, 11, 56, ASR,  2, 34, MAGHRIB,  4, 57, ISHA,  6, 20,    //30
FAJR,  5, 23, SUNRISE,  6, 51, ZUHR, 11, 57, ASR,  2, 35, MAGHRIB,  4, 58, ISHA,  6, 21,    //31
};


