/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SiriUICardLoadingMonitor : NSObject {

	NSMutableArray* _observers;

}
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isTrackingObserver:(id)arg1 ;
-(void)broadcastCardSnippet:(id)arg1 ;
@end
