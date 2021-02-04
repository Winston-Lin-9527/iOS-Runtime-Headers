/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVPlayback/TVPlayback-Structs.h>
@interface TVPTimeRange : NSObject {

	double _startTime;
	double _duration;

}

@property (assign,nonatomic) double startTime;              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double endTime; 
+(SCD_Struct_TV2)forwardmostCMTimeRangeInCMTimeRanges:(id)arg1 ;
-(double)endTime;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(id)initWithCMTimeRange:(SCD_Struct_TV2)arg1 ;
-(id)intersectTimeRange:(id)arg1 ;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 ;
-(BOOL)containsTime:(double)arg1 ;
@end
