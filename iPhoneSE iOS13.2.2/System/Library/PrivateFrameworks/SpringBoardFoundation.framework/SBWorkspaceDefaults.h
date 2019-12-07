/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=isMedusaEnabled,nonatomic,readonly) BOOL medusaEnabled; 
@property (nonatomic,readonly) long long medusaDeviceSimulation; 
@property (getter=isBreadcrumbDisabled,nonatomic,readonly) BOOL breadcrumbDisabled; 
-(void)setMedusaEnabled:(BOOL)arg1 ;
-(BOOL)isMedusaEnabled;
-(void)setBreadcrumbDisabled:(BOOL)arg1 ;
-(BOOL)isBreadcrumbDisabled;
-(void)setMedusaDeviceSimulation:(long long)arg1 ;
-(long long)medusaDeviceSimulation;
-(void)_bindAndRegisterDefaults;
@end
