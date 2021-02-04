/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, HKClinicalBrand;


@protocol HKClinicalBrandable <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@property (getter=hasMultipleLocations,nonatomic,readonly) BOOL multiple; 
@optional
-(BOOL)hasMultipleLocations;

@required
-(HKClinicalBrand *)brand;
-(NSString *)title;
-(NSString *)subtitle;

@end
