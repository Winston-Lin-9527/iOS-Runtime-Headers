/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct VMURange {
	unsigned long long location;
	unsigned long long length;
} VMURange;

typedef struct {
	unsigned long long field1;
	unsigned field2 : 60;
	unsigned field3 : 4;
	id field4;
} SCD_Struct_VM2;

typedef struct {
	unsigned long long field1;
	unsigned field2;
	unsigned long long field3;
} SCD_Struct_VM3;

typedef struct CSTypeRef {
	unsigned long long _opaque_1;
	unsigned long long _opaque_2;
} CSTypeRef;

typedef struct timeval {
	long long tv_sec;
	int tv_usec;
} timeval;

typedef struct mapped_memory_t* mapped_memory_tRef;

typedef struct sampling_context_t* sampling_context_tRef;

typedef struct {
	unsigned long long field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	unsigned field6;
	unsigned field7;
	unsigned long long field8;
} SCD_Struct_VM8;

typedef struct objc_ivar* objc_ivarRef;

typedef struct SwiftReflectionInteropContext* SwiftReflectionInteropContextRef;

typedef struct {
	double t_begin;
	double t_end;
	int pid;
	unsigned thread;
	int run_state;
	unsigned long long dispatch_queue_serial_num;
} SCD_Struct_VM11;

typedef struct {
	SCD_Struct_VM11 context;
	unsigned long long frames;
	unsigned long long framePtrs;
	unsigned length;
} SCD_Struct_VM12;
