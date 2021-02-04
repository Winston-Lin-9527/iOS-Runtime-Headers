/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/_ASExtensionViewController.h>

@protocol _ASCredentialProviderExtensionConfigurationViewControllerDelegate;
@interface _ASCredentialProviderExtensionConfigurationViewController : _ASExtensionViewController {

	id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)beginConfiguringExtension;
-(void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate>)arg1 ;
-(id<_ASCredentialProviderExtensionConfigurationViewControllerDelegate>)delegate;
@end
