/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/_ASExtensionViewController.h>

@protocol _ASCredentialListViewControllerDelegate;
@interface _ASCredentialListViewController : _ASExtensionViewController {

	id<_ASCredentialListViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_ASCredentialListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithExtension:(id)arg1 serviceIdentifiers:(id)arg2 ;
-(void)prepareToCompleteRequestWithHostContext:(id)arg1 credential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_requestDidFailWithError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishWithCredential:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<_ASCredentialListViewControllerDelegate>)arg1 ;
-(id<_ASCredentialListViewControllerDelegate>)delegate;
@end
