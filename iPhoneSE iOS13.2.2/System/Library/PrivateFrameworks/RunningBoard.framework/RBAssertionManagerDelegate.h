/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManagerDelegate <NSObject>
@required
-(void)assertionManager:(id)arg1 didRejectAcquisitionFromOriginatorWithExcessiveAssertions:(id)arg2;
-(void)assertionManager:(id)arg1 didUpdateProcessStates:(id)arg2 completion:(/*^block*/id)arg3;
-(void)assertionManager:(id)arg1 didInvalidateAssertions:(id)arg2;
-(void)assertionManager:(id)arg1 didAddProcess:(id)arg2 withState:(id)arg3;
-(void)assertionManager:(id)arg1 didRemoveProcess:(id)arg2 withState:(id)arg3;
-(void)assertionManager:(id)arg1 willExpireAssertionsSoonForProcess:(id)arg2 expirationTime:(double)arg3;
-(void)assertionManager:(id)arg1 willInvalidateAssertion:(id)arg2;
-(void)assertionManager:(id)arg1 didBeginTrackingInFightUpdatesForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didEndTrackingInFightUpdatesForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didEndTrackingStateForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didBeginTrackingStateForProcessIdentity:(id)arg2;
-(void)assertionManager:(id)arg1 didResolveSystemState:(id)arg2;

@end
