/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class GEORouteHypothesizer, NSObject;

@interface GEORouteHypothesizerDelayer : NSObject {

	CFBinaryHeapRef _minHeap;
	GEORouteHypothesizer* _nextHypothesizer;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(void)checkin;
-(void)_setNextHypothesizer:(id)arg1 ;
-(void)_startValidHypothesizers;
-(void)delayStartOfHypothesizer:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
