/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SBHUDHostViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHUDControlling.h>

@protocol SBHUDViewControlling;
@class NSString, NSTimer, UIViewController, SBHUDController;

@interface _SBHUDModel : NSObject <_SBHUDHostViewControllerDelegate, SBHUDControlling> {

	NSTimer* _dismissalTimer;
	BOOL _dismissed;
	BOOL _dismissing;
	BOOL _presenting;
	BOOL _presented;
	UIViewController*<SBHUDViewControlling> _HUDViewController;
	SBHUDController* _HUDController;
	double _dismissalInterval;
	NSString* _identifier;

}

@property (assign,setter=setPresented:,nonatomic) BOOL isPresented;                                    //@synthesize presented=_presented - In the implementation block
@property (assign,setter=setPresenting:,nonatomic) BOOL isPresenting;                                  //@synthesize presenting=_presenting - In the implementation block
@property (assign,setter=setDismissing:,nonatomic) BOOL isDismissing;                                  //@synthesize dismissing=_dismissing - In the implementation block
@property (assign,setter=setDismissed:,nonatomic) BOOL isDismissed;                                    //@synthesize dismissed=_dismissed - In the implementation block
@property (nonatomic,readonly) SBHUDController * HUDController;                                        //@synthesize HUDController=_HUDController - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBHUDViewControlling> HUDViewController;              //@synthesize HUDViewController=_HUDViewController - In the implementation block
@property (nonatomic,readonly) double dismissalInterval;                                               //@synthesize dismissalInterval=_dismissalInterval - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (getter=isDismissalScheduled,nonatomic,readonly) BOOL dismissalScheduled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isVisible; 
+(id)HUDModelForController:(id)arg1 viewController:(id)arg2 identifier:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)dismiss;
-(BOOL)isPresenting;
-(void)setPresenting:(BOOL)arg1 ;
-(BOOL)isDismissing;
-(void)setDismissing:(BOOL)arg1 ;
-(BOOL)isPresented;
-(void)setDismissed:(BOOL)arg1 ;
-(BOOL)isDismissed;
-(void)setPresented:(BOOL)arg1 ;
-(SBHUDController *)HUDController;
-(UIViewController*<SBHUDViewControlling>)HUDViewController;
-(void)presentWithDismissalInterval:(double)arg1 animated:(BOOL)arg2 ;
-(double)dismissalInterval;
-(void)presentWithDismissalInterval:(double)arg1 ;
-(void)rescheduleDismissalTimer;
-(void)invalidateDismissalTimer;
-(void)hudViewController:(id)arg1 willDismissHUD:(id)arg2 ;
-(void)hudViewController:(id)arg1 didDismissHUD:(id)arg2 ;
-(void)hudViewController:(id)arg1 didPresentHUD:(id)arg2 ;
-(void)hudViewController:(id)arg1 willPresentHUD:(id)arg2 ;
-(BOOL)isDismissalScheduled;
-(void)scheduleDismissalTimer;
@end
