/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEventMessage.h>

@protocol OS_xpc_object;
@class NSObject;

@interface OSActivityTraceMessageEvent : OSActivityEventMessage {

	unsigned char _messageType;
	NSObject*<OS_xpc_object> _payload;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;              //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
@property (nonatomic,readonly) unsigned char messageType;                            //@synthesize messageType=_messageType - In the implementation block
-(NSObject*<OS_xpc_object>)payload;
-(unsigned char)messageType;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
@end
