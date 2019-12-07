/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject {

	CoreTelephonyClient* _client;

}
+(id)sharedInstance;
-(id)init;
-(void)installPendingPlan:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDataFallbackEnabled:(BOOL)arg1 forIccid:(id)arg2 ;
-(void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)bootstrapPlanTransferUsingMessageSession:(id)arg1 ;
-(void)transferPlanListWithCompletion:(/*^block*/id)arg1 ;
-(void)pendingInstallItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)getTransferCapability:(unsigned long long)arg1 ;
@end
