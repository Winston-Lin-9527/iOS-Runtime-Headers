/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REMXPCDaemonController;

@interface REMDataAccessBehaviorManager : NSObject {

	REMXPCDaemonController* _daemonController;

}

@property (nonatomic,retain) REMXPCDaemonController * daemonController;              //@synthesize daemonController=_daemonController - In the implementation block
-(id)init;
-(REMXPCDaemonController *)daemonController;
-(void)setDaemonController:(REMXPCDaemonController *)arg1 ;
-(id)initWithDaemonController:(id)arg1 ;
-(id)_debugPerformerWithReason:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)_getBoolForKey:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)_setBoolValue:(BOOL)arg1 forBehaviorKey:(id)arg2 ;
-(void)_crashDaemonWithMessage:(id)arg1 ;
-(long long)_getIntegerForKey:(id)arg1 withDefaultValue:(long long)arg2 ;
-(long long)changeTrackingBehaviors;
-(void)_setIntegerValue:(long long)arg1 forBehaviorKey:(id)arg2 ;
-(id)fetchStatusReportsWithError:(id*)arg1 ;
-(BOOL)isDataAccessEnabled;
-(void)enableDataAccess;
-(void)disableDataAccess;
-(BOOL)isBabySitterEnabled;
-(void)enableBabySitter;
-(void)disableBabySitter;
-(void)applyChangeTrackingBehavior:(long long)arg1 ;
-(void)unapplyChangeTrackingBehavior:(long long)arg1 ;
@end
