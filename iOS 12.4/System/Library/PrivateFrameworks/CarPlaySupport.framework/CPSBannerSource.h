/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBannerTargetManagerObserver.h>
#import <libobjc.A.dylib/CPBannerProviding.h>
#import <libobjc.A.dylib/SBUIBannerSource.h>
#import <libobjc.A.dylib/CPSApplicationStateObserving.h>

@protocol CPBannerDelegate, SBUIBannerTarget, SBUIBannerView;
@class NSMutableArray, UIView, NSTimer, NSUUID, NSString;

@interface CPSBannerSource : NSObject <SBUIBannerTargetManagerObserver, CPBannerProviding, SBUIBannerSource, CPSApplicationStateObserving> {

	BOOL _applicationActive;
	BOOL _rateLimited;
	id<CPBannerDelegate> _delegate;
	NSMutableArray* _queuedItems;
	id<SBUIBannerTarget> _bannerTarget;
	UIView*<SBUIBannerView> _displayedBannerView;
	NSTimer* _dimissTimer;
	NSUUID* _lastUserDismissedIdentifier;
	NSTimer* _lastUserDismissedIdentifierResetTimer;

}

@property (nonatomic,retain) NSMutableArray * queuedItems;                                    //@synthesize queuedItems=_queuedItems - In the implementation block
@property (assign,nonatomic,__weak) id<SBUIBannerTarget> bannerTarget;                        //@synthesize bannerTarget=_bannerTarget - In the implementation block
@property (assign,nonatomic,__weak) UIView*<SBUIBannerView> displayedBannerView;              //@synthesize displayedBannerView=_displayedBannerView - In the implementation block
@property (nonatomic,retain) NSTimer * dimissTimer;                                           //@synthesize dimissTimer=_dimissTimer - In the implementation block
@property (assign,getter=isApplicationActive,nonatomic) BOOL applicationActive;               //@synthesize applicationActive=_applicationActive - In the implementation block
@property (assign,getter=isRateLimited,nonatomic) BOOL rateLimited;                           //@synthesize rateLimited=_rateLimited - In the implementation block
@property (nonatomic,retain) NSUUID * lastUserDismissedIdentifier;                            //@synthesize lastUserDismissedIdentifier=_lastUserDismissedIdentifier - In the implementation block
@property (nonatomic,retain) NSTimer * lastUserDismissedIdentifierResetTimer;                 //@synthesize lastUserDismissedIdentifierResetTimer=_lastUserDismissedIdentifierResetTimer - In the implementation block
@property (assign,nonatomic,__weak) id<CPBannerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setApplicationActive:(BOOL)arg1 ;
-(BOOL)isApplicationActive;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)_enqueueBannerItem:(id)arg1 ;
-(UIView*<SBUIBannerView>)displayedBannerView;
-(void)_resetDismissTimer;
-(id<SBUIBannerTarget>)bannerTarget;
-(NSUUID *)lastUserDismissedIdentifier;
-(BOOL)isRateLimited;
-(void)setRateLimited:(BOOL)arg1 ;
-(NSMutableArray *)queuedItems;
-(void)setBannerTarget:(id<SBUIBannerTarget>)arg1 ;
-(void)setDisplayedBannerView:(UIView*<SBUIBannerView>)arg1 ;
-(void)setLastUserDismissedIdentifier:(NSUUID *)arg1 ;
-(void)_resetLastUserDismissedIdentifierTimer;
-(NSTimer *)dimissTimer;
-(void)_dismissTimerFired:(id)arg1 ;
-(void)setDimissTimer:(NSTimer *)arg1 ;
-(NSTimer *)lastUserDismissedIdentifierResetTimer;
-(void)_resetLastUserDismissedIdentifierTimerFired:(id)arg1 ;
-(void)setLastUserDismissedIdentifierResetTimer:(NSTimer *)arg1 ;
-(void)_flushQueue;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(void)postBannerForManeuver:(id)arg1 travelEstimates:(id)arg2 ;
-(void)postBannerForNavigationAlert:(id)arg1 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(void)bannerViewWillAppear:(id)arg1 ;
-(void)bannerViewDidAppear:(id)arg1 ;
-(void)bannerViewWillDismiss:(id)arg1 forReason:(int)arg2 ;
-(void)bannerViewDidDismiss:(id)arg1 forReason:(int)arg2 ;
-(void)applicationStateMonitor:(id)arg1 didBecomeActive:(BOOL)arg2 ;
-(void)setQueuedItems:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<CPBannerDelegate>)arg1 ;
-(id<CPBannerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
