/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol AVTimeControlling;
@class AVTimer;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {

	id<AVTimeControlling> _playerController;
	double _interval;
	double _resolution;
	double _currentTime;
	AVTimer* _timer;
	double _minTime;
	double _maxTime;

}

@property (assign) double targetTime; 
@property (assign) double targetTimeWithinEndTimes; 
@property (readonly) double remainingTargetTimeWithinEndTimes; 
@property (assign) double currentTimeWithinEndTimes; 
@property (readonly) double remainingTime; 
@property (readonly) double remainingTimeWithinEndTimes; 
@property (readonly) double seekableTimeRangeDuration; 
@property (getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges,readonly) BOOL thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges; 
@property (getter=isCurrentTimeAtEndOfSeekableTimeRanges,readonly) BOOL currentTimeAtEndOfSeekableTimeRanges; 
@property (assign) double minTime;                                                                                                                             //@synthesize minTime=_minTime - In the implementation block
@property (assign) double maxTime;                                                                                                                             //@synthesize maxTime=_maxTime - In the implementation block
@property (retain) id<AVTimeControlling> playerController; 
@property (assign) double interval; 
@property (assign) double resolution; 
@property (assign) double currentTime; 
+(BOOL)automaticallyNotifiesObserversOfCurrentTime;
+(id)keyPathsForValuesAffectingTargetTime;
+(id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingRemainingTime;
+(id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+(id)keyPathForValuesAffectingSeekableTimeRangeDuration;
+(id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
-(double)remainingTime;
-(double)maxTime;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(double)seekableTimeRangeDuration;
-(double)targetTimeWithinEndTimes;
-(void)setTargetTimeWithinEndTimes:(double)arg1 ;
-(double)remainingTargetTimeWithinEndTimes;
-(double)currentTimeWithinEndTimes;
-(void)setCurrentTimeWithinEndTimes:(double)arg1 ;
-(double)remainingTimeWithinEndTimes;
-(BOOL)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
-(BOOL)isCurrentTimeAtEndOfSeekableTimeRanges;
-(double)targetTime;
-(void)setTargetTime:(double)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id<AVTimeControlling>)playerController;
-(void)setPlayerController:(id<AVTimeControlling>)arg1 ;
-(double)resolution;
-(void)setResolution:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)currentTime;
-(void)setInterval:(double)arg1 ;
-(double)interval;
@end
