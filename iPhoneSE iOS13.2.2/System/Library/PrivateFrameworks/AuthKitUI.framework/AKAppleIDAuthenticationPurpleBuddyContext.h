/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

@class NSDictionary, UIViewController, UINavigationController, NSString;

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext {

	NSDictionary* _overrideFirstActionSignal;
	UIViewController* _topViewControllerOnLoadStart;
	UINavigationController* _navigationController;

}

@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) NSString * usernameForCreating; 
@property (nonatomic,readonly) NSString * passwordForCreating; 
-(id)init;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)usernameForCreating;
-(NSString *)passwordForCreating;
@end
