/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySeriesSample : HKQuantitySample

@property (setter=_setSum:,nonatomic,copy) HKQuantity * sum; 
+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsSecureCoding;
-(HKQuantity *)sum;
-(void)_setSum:(id)arg1 ;
@end
