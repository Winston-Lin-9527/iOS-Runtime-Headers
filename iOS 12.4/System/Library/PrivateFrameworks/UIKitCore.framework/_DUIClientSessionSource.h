/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DUIClientSessionSource <_DUIClientSessionCommon>
@required
-(oneway void)checkCanHandOffCancelledItemsWithReply:(/*^block*/id)arg1;
-(oneway void)handOffCancelledItems:(id)arg1 withFence:(id)arg2;
-(oneway void)dragEndedWithOperation:(unsigned long long)arg1;
-(oneway void)dragFailed;
-(oneway void)dataTransferSessionFinished;

@end
