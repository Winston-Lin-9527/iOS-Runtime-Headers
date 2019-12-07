/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FLReachabilityObserver : NSObject {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(BOOL)isNetworkReachable;
+(BOOL)isAirplaneModeActiveWithoutWifi;
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)disableAirplaneModeAndWaitForNetworkWithCompletionHandler:(/*^block*/id)arg1 ;
@end
