/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIQuantityTimeSlice, HKQuantity, NSDate, HKQuantityType;

@interface FIIntervalQuantityTrigger : NSObject {

	FIQuantityTimeSlice* _slice;
	HKQuantity* _threshold;
	BOOL _finalized;
	/*^block*/id _completion;
	NSDate* _triggeredDate;

}

@property (nonatomic,readonly) HKQuantityType * quantityType; 
@property (nonatomic,readonly) BOOL triggered; 
@property (nonatomic,readonly) NSDate * triggeredDate;                     //@synthesize triggeredDate=_triggeredDate - In the implementation block
-(BOOL)triggered;
-(id)addingSample:(id)arg1 error:(id*)arg2 ;
-(id)initWithQuantityType:(id)arg1 startDate:(id)arg2 threshold:(id)arg3 ;
-(NSDate *)triggeredDate;
-(id)initWithQuantityTimeslice:(id)arg1 threshold:(id)arg2 triggeredDate:(id)arg3 ;
-(id)settingTimeSlice:(id)arg1 ;
-(id)_finalizedTriggerByAddingSample:(id)arg1 toSlice:(id)arg2 withPreviousTotal:(id)arg3 threshold:(id)arg4 ;
-(HKQuantityType *)quantityType;
-(id)description;
@end
