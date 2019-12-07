/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUILabeledRoundButtonViewController.h>

@class CCUIContentModuleContext;

@interface CCUIConnectivityButtonViewController : CCUILabeledRoundButtonViewController {

	BOOL _observingStateChanges;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;              //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
+(BOOL)isSupported;
-(id)displayName;
-(void)viewDidLoad;
-(void)buttonTapped:(id)arg1 ;
-(id)subtitleText;
-(id)statusText;
-(id)initWithGlyphImage:(id)arg1 highlightColor:(id)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg1 highlightColor:(id)arg2 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)containerWillTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)startObservingStateChangesIfNecessary;
-(void)stopObservingStateChangesIfNecessary;
-(void)startObservingStateChanges;
-(void)stopObservingStateChanges;
-(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 completion:(/*^block*/id)arg3 ;
@end
