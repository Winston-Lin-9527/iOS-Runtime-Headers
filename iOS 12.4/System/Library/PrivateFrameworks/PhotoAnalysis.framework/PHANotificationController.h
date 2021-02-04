/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGManager;

@interface PHANotificationController : NSObject {

	PGManager* _graphManager;

}
-(id)initWithGraphManager:(id)arg1 ;
-(void)fireNotificationForSuggestionIdentifiers:(id)arg1 ;
-(BOOL)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(id)bestDateForDeliveringNotification;
-(void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2 ;
-(BOOL)userIsActivelyUsingPhotos;
@end
