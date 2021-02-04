/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol SXWebContentInteractionProvider, SXWebContentErrorProvider, SXWebContentConfigurationManager, SXWebContentPresentationManager;
@class SXWebContentViewController;

@interface SXWebContentContainerViewController : UIViewController {

	id<SXWebContentInteractionProvider> _interactionProvider;
	id<SXWebContentErrorProvider> _errorProvider;
	id<SXWebContentConfigurationManager> _configurationManager;
	id<SXWebContentPresentationManager> _presentationManager;
	SXWebContentViewController* _webContentViewController;

}

@property (nonatomic,readonly) SXWebContentViewController * webContentViewController;                  //@synthesize webContentViewController=_webContentViewController - In the implementation block
@property (nonatomic,readonly) id<SXWebContentInteractionProvider> interactionProvider;                //@synthesize interactionProvider=_interactionProvider - In the implementation block
@property (nonatomic,readonly) id<SXWebContentErrorProvider> errorProvider;                            //@synthesize errorProvider=_errorProvider - In the implementation block
@property (nonatomic,readonly) id<SXWebContentConfigurationManager> configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) id<SXWebContentPresentationManager> presentationManager;                //@synthesize presentationManager=_presentationManager - In the implementation block
-(void)loadURL:(id)arg1 ;
-(id<SXWebContentConfigurationManager>)configurationManager;
-(id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5 ;
-(id<SXWebContentInteractionProvider>)interactionProvider;
-(id<SXWebContentPresentationManager>)presentationManager;
-(id<SXWebContentErrorProvider>)errorProvider;
-(SXWebContentViewController *)webContentViewController;
-(BOOL)allowUserInteractionForInteractionType:(unsigned long long)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
@end
