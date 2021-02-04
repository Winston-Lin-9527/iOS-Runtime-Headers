/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SuddenChangeParameters : NSObject {

	int margin;
	int minSamplesCount;
	int minMarginRequired;
	double percentage;
	double durationThresholdUpward;
	double durationThresholdDownward;

}

@property (assign,nonatomic) int margin; 
@property (assign,nonatomic) int minSamplesCount; 
@property (assign,nonatomic) int minMarginRequired; 
@property (assign,nonatomic) double percentage; 
@property (assign,nonatomic) double durationThresholdUpward; 
@property (assign,nonatomic) double durationThresholdDownward; 
-(void)setPercentage:(double)arg1 ;
-(double)percentage;
-(int)minSamplesCount;
-(void)setMinSamplesCount:(int)arg1 ;
-(int)minMarginRequired;
-(void)setMinMarginRequired:(int)arg1 ;
-(double)durationThresholdUpward;
-(void)setDurationThresholdUpward:(double)arg1 ;
-(double)durationThresholdDownward;
-(void)setDurationThresholdDownward:(double)arg1 ;
-(int)margin;
-(void)setMargin:(int)arg1 ;
@end
