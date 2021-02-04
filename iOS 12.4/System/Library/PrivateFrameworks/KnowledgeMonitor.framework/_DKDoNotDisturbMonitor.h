/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@class DNDStateService, NSString;

@interface _DKDoNotDisturbMonitor : _DKMonitor <DNDStateUpdateListener> {

	DNDStateService* _dndStateService;

}

@property (nonatomic,retain) DNDStateService * dndStateService;              //@synthesize dndStateService=_dndStateService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventStream;
+(id)entitlements;
+(id)_eventWithState:(BOOL)arg1 ;
+(BOOL)shouldMergeUnchangedEvents;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(DNDStateService *)dndStateService;
-(void)setDndStateService:(DNDStateService *)arg1 ;
-(void)stop;
-(void)start;
@end
