/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, HKClinicalBrand;


@protocol HKClinicalBrandable <NSObject>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) HKClinicalBrand * brand; 
@required
-(NSString *)title;
-(NSString *)subtitle;
-(HKClinicalBrand *)brand;

@end
