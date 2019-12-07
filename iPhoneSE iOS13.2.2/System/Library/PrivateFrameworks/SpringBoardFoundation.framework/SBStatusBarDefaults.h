/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBStatusBarDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) NSArray * countryCodesShowingEmergencyOnlyStatus; 
@property (nonatomic,readonly) BOOL showBatteryLevel; 
@property (nonatomic,readonly) BOOL showBatteryPercentage; 
@property (nonatomic,readonly) BOOL suppressStatusBarOverrideForScreenSharing; 
@property (nonatomic,readonly) BOOL showOptimalCellDataForCarPlay; 
@property (nonatomic,readonly) BOOL showRSSI; 
@property (nonatomic,readonly) unsigned long long statusBarLogLevel; 
@property (nonatomic,readonly) BOOL showThermalWarning; 
-(void)setShowThermalWarning:(BOOL)arg1 ;
-(BOOL)showThermalWarning;
-(void)setShowRSSI:(BOOL)arg1 ;
-(BOOL)showRSSI;
-(void)setShowOptimalCellDataForCarPlay:(BOOL)arg1 ;
-(BOOL)showOptimalCellDataForCarPlay;
-(void)setShowBatteryLevel:(BOOL)arg1 ;
-(BOOL)showBatteryLevel;
-(void)setCountryCodesShowingEmergencyOnlyStatus:(NSArray *)arg1 ;
-(NSArray *)countryCodesShowingEmergencyOnlyStatus;
-(void)setStatusBarLogLevel:(unsigned long long)arg1 ;
-(unsigned long long)statusBarLogLevel;
-(void)setShowBatteryPercentage:(BOOL)arg1 ;
-(BOOL)showBatteryPercentage;
-(void)setSuppressStatusBarOverrideForScreenSharing:(BOOL)arg1 ;
-(BOOL)suppressStatusBarOverrideForScreenSharing;
-(void)_bindAndRegisterDefaults;
@end
