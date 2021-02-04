/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestEvent_EventMessage : CEMPayloadBase {

	NSString* _eventmessageEcho;

}

@property (nonatomic,copy) NSString * eventmessageEcho;              //@synthesize eventmessageEcho=_eventmessageEcho - In the implementation block
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
+(id)allowedEventMessageKeys;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setEventmessageEcho:(NSString *)arg1 ;
-(NSString *)eventmessageEcho;
@end
