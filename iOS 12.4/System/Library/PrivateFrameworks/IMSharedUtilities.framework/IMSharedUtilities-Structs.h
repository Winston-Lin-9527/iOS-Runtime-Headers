/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct {
	unsigned associatedMessageType : 1;
	unsigned expireState : 1;
	unsigned timeDelivered : 1;
	unsigned timeExpressiveSentPlayed : 1;
	unsigned timePlayed : 1;
	unsigned timeRead : 1;
	unsigned associatedMessageRangeLength : 1;
	unsigned associatedMessageRangeLocation : 1;
	unsigned version : 1;
} SCD_Struct_IM2;

typedef struct {
	unsigned shareDirection : 1;
	unsigned shareStatus : 1;
	unsigned version : 1;
} SCD_Struct_IM3;

typedef struct {
	unsigned messageActionType : 1;
	unsigned version : 1;
} SCD_Struct_IM4;

typedef struct {
	unsigned version : 1;
} SCD_Struct_IM5;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;
