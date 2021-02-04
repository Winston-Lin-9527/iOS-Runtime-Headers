/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostAuthorizationViewControllerDelegate;
@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostAuthorizationViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<HKHealthPrivacyServiceRemoteAuthorizationViewController> _healthPrivacyServiceViewControllerProxy; 
@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostAuthorizationViewControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2 ;
-(id<HKHealthPrivacyServiceRemoteAuthorizationViewController>)_healthPrivacyServiceViewControllerProxy;
-(void)didFinishWithError:(id)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyHostAuthorizationViewControllerDelegate>)arg1 ;
-(id<HKHealthPrivacyHostAuthorizationViewControllerDelegate>)delegate;
-(void)show;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end
