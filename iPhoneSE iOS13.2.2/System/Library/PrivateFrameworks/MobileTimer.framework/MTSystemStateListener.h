/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTSpringboardStartMonitorObserver.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>
#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>

@protocol MTSystemStateDelegate;
@class NSString;

@interface MTSystemStateListener : NSObject <MTSpringboardStartMonitorObserver, MTAgentNotificationListener, MTAgentDiagnosticDelegate> {

	BOOL _restoreDoneHandled;
	id<MTSystemStateDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MTSystemStateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL restoreDoneHandled;                                //@synthesize restoreDoneHandled=_restoreDoneHandled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isSystemRestoreDone;
+(id)_restoreNotification;
-(id<MTSystemStateDelegate>)delegate;
-(void)setDelegate:(id<MTSystemStateDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)liveDarwinNotifications;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)printDiagnostics;
-(id)gatherDiagnostics;
-(void)springboardStartMonitor:(id)arg1 didReceiveStarted:(BOOL)arg2 ;
-(BOOL)_checkIfRestoreDone;
-(void)_handleRestoreDone;
-(void)_verifyRestoreDone;
-(BOOL)restoreDoneHandled;
-(void)setRestoreDoneHandled:(BOOL)arg1 ;
-(BOOL)checkSystemReady;
-(void)_handleF5Reset;
@end
