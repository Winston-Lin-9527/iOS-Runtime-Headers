/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKUnit;

@interface FIUIWorkoutLapLengthIndexTranslator : NSObject {

	HKUnit* _distanceUnit;

}

@property (nonatomic,retain) HKUnit * distanceUnit;              //@synthesize distanceUnit=_distanceUnit - In the implementation block
-(double)valueForIndex:(long long)arg1 ;
-(HKUnit *)distanceUnit;
-(long long)indexForValue:(double)arg1 ;
-(double)valueTranslatedIntoDistanceUnit:(double)arg1 ;
-(double)valueTranslatedFromDistanceUnit:(double)arg1 ;
-(id)initWithDistanceUnit:(id)arg1 ;
-(void)setDistanceUnit:(HKUnit *)arg1 ;
@end
