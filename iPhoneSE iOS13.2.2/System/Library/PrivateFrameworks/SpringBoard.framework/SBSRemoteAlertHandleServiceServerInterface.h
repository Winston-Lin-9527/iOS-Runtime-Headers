/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSRemoteAlertHandleServiceServerInterface
@required
-(id)remoteAlertHandleContextsForDefinition:(id)arg1 allowsCreationValue:(id)arg2 configurationContext:(id)arg3;
-(id)createRemoteAlertHandleContextWithDefinition:(id)arg1 configurationContext:(id)arg2;
-(oneway void)activateRemoteAlertHandleWithID:(id)arg1 activationContext:(id)arg2;
-(oneway void)invalidateRemoteAlertHandleWithID:(id)arg1;

@end
