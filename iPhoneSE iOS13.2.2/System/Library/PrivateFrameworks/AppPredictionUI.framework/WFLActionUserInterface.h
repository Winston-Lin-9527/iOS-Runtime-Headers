/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFLActionUserInterface <NSObject>
@optional
-(void)action:(id)arg1 requiresContinuingInAppWithProceedHandler:(/*^block*/id)arg2;
-(void)handleIntentAction:(id)arg1 requiresUserConfirmation:(BOOL)arg2 requiresUserAuthentication:(BOOL)arg3 withIntentResponse:(id)arg4 proceedHandler:(/*^block*/id)arg5;
-(void)logDebugInformation:(id)arg1;
-(void)action:(id)arg1 requiresUserConfirmation:(BOOL)arg2 proceedHandler:(/*^block*/id)arg3;
-(void)action:(id)arg1 requiresUserConfirmation:(BOOL)arg2 requiresUserAuthentication:(BOOL)arg3 proceedHandler:(/*^block*/id)arg4;

@end
