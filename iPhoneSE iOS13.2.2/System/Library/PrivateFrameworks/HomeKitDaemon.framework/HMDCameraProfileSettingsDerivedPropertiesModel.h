/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate;

@interface HMDCameraProfileSettingsDerivedPropertiesModel : HMBModel

@property (retain) NSNumber * currentAccessModeField; 
@property (retain) NSNumber * currentAccessModeChangeReasonField; 
@property (retain) NSDate * currentAccessModeChangeDate; 
@property (assign) unsigned long long currentAccessMode; 
@property (assign) unsigned long long currentAccessModeChangeReason; 
+(id)hmbProperties;
-(unsigned long long)currentAccessMode;
-(void)setCurrentAccessMode:(unsigned long long)arg1 ;
-(void)setCurrentAccessModeChangeReason:(unsigned long long)arg1 ;
-(unsigned long long)currentAccessModeChangeReason;
@end
