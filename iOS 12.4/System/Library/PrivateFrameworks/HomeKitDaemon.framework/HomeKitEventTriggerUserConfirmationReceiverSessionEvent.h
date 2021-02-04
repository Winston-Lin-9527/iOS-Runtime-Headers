/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class AWDHomeKitEventTriggerUserConfirmationReceiverSession, NSDate, NSString;

@interface HomeKitEventTriggerUserConfirmationReceiverSessionEvent : HMDLogEvent <HMDAWDLogEvent> {

	AWDHomeKitEventTriggerUserConfirmationReceiverSession* _metric;
	NSDate* _startTime;

}

@property (nonatomic,readonly) AWDHomeKitEventTriggerUserConfirmationReceiverSession * metric;              //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                                                          //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(id)initWithSessionID:(id)arg1 ;
-(AWDHomeKitEventTriggerUserConfirmationReceiverSession *)metric;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(NSDate *)startTime;
@end
