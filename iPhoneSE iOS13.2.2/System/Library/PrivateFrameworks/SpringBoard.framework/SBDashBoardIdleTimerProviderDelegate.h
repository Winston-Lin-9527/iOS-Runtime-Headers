/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDashBoardIdleTimerProviderDelegate
@required
-(void)idleTimerDidRefresh:(id)arg1;
-(void)idleTimerDidExpire:(id)arg1;
-(void)idleTimerDidWarn:(id)arg1;
-(void)idleTimerWillRefresh:(id)arg1;
-(id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3;
-(void)idleTimerDidChange:(id)arg1;

@end
