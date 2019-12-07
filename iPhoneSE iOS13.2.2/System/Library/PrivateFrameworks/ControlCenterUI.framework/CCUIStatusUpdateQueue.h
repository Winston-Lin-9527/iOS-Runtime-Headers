/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {

	NSMutableArray* _queuedIdentifiers;
	NSMutableDictionary* _latestUpdateByIdentifier;

}
-(id)init;
-(void)removeAllStatusUpdates;
-(void)enqueueStatusUpdate:(id)arg1 forIdentifier:(id)arg2 ;
-(id)dequeueNextStatusUpdate;
@end
