/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HDHeartRateIntervalPair : NSObject {

	double _startInterval;
	double _endInterval;

}

@property (nonatomic,readonly) double startInterval;              //@synthesize startInterval=_startInterval - In the implementation block
@property (nonatomic,readonly) double endInterval;                //@synthesize endInterval=_endInterval - In the implementation block
-(id)initWithStartInterval:(double)arg1 endInterval:(double)arg2 ;
-(double)startInterval;
-(double)endInterval;
@end
