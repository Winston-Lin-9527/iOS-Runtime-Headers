/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct __CFString* CFStringRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_FB8;

typedef struct FBProcessTimes {
	double beginUserCPUElapsedTime;
	double beginSystemCPUElapsedTime;
	double beginIdleCPUElapsedTime;
	double beginApplicationCPUElapsedTime;
} FBProcessTimes;
