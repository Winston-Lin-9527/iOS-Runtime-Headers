/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSDate, NSMutableDictionary;

@interface AWEventStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	BOOL _timerResumed;
	unsigned long long _lastLogTime;
	NSDate* _lastLogDate;
	NSMutableDictionary* _stats;

}
+(id)sharedStatistics;
-(void)logEvent:(unsigned long long)arg1 ;
-(id)init;
@end
