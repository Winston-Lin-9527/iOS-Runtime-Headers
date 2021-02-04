/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PSUILocationServicesListController.h>

@class RTRoutineManager;

@interface PSUILocationSystemServicesListController : PSUILocationServicesListController {

	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
+(int)systemServicesLocationUsage;
+(id)locationBasedAlertBundlesForSystemVersion:(id)arg1 ;
-(id)specifiers;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(id)_locationBasedAlertBundles;
-(RTRoutineManager *)routineManager;
-(void)_performConsistencyCheck;
-(id)_productImprovementByBundlePath;
-(void)_setLocationBasedAlertsAuthorized:(id)arg1 ;
-(id)_areLocationBasedAlertsAuthorized;
-(id)coreRoutineEnabledStatus:(id)arg1 ;
-(void)_setAddressCorrectionAuthorizationStatus:(id)arg1 specifier:(id)arg2 ;
-(id)_readAddressCorrectionAuthorizationStatus:(id)arg1 ;
-(void)setStatusEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isStatusEnabled:(id)arg1 ;
-(void)_showAddressCorrectionPage;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(id)init;
@end
