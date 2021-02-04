/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UIProgressHUD, HKHealthStore;

@interface HKHealthManageStorageViewController : PSListController {

	long long _status;
	UIProgressHUD* _spinnerView;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKHealthStore * healthStore;              //@synthesize healthStore=_healthStore - In the implementation block
-(id)specifiers;
-(void)_loadCloudSyncStorageStatus;
-(void)confirmDisable:(id)arg1 ;
-(void)_disableAndDelete:(id)arg1 ;
-(void)showSpinnerMessage:(id)arg1 ;
-(HKHealthStore *)healthStore;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)hideSpinner;
@end
