/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface _GEOThrottler : NSObject {

	vector<(anonymous namespace)::Timestamp, std::__1::allocator<(anonymous namespace)::Timestamp> >* _lastRequestTimes;
	unsigned _currentIndex;
	double _timeWindow;

}
-(BOOL)addRequestTimestamp;
-(unsigned long long)remainingEntries;
-(id)initForKey:(GEOThrottleKey)arg1 ;
-(id)initWithRequestCount:(unsigned long long)arg1 interval:(double)arg2 ;
-(id)description;
@end
