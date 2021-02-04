/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWRamp : NSObject {

	BOOL _isRamping;
	float _currentValue;
	int _currentIteration;
	float _startValue;
	float _targetValue;
	int _durationInIterations;
	int _shape;
	BOOL _isRampingUp;
	float _exponentialConvergenceFraction;
	float _exponentialSnapFraction;

}

@property (nonatomic,readonly) BOOL isRamping;                  //@synthesize isRamping=_isRamping - In the implementation block
@property (nonatomic,readonly) float currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(void)initialize;
-(BOOL)isRamping;
-(float)updateRampForNexIteration;
-(void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 ;
-(id)init;
-(float)currentValue;
@end
