/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DataAccess-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSData, ASTrafficLogger;

@interface DAConvertCRtoCRLFStream : NSInputStream {

	NSData* _mimeData;
	NSData* _preflightData;
	NSData* _postflightData;
	unsigned long long _totalLength;
	unsigned long long _readOffset;
	BOOL _lastByteCopiedWasCR;
	BOOL _openEventSent;
	unsigned long long _streamStatus;
	BOOL _intendToStream;
	id _delegate;
	CFRunLoopSourceRef _rls;
	/*function pointer*/void* _clientCallback;
	SCD_Struct_DA4* _clientContext;
	ASTrafficLogger* _trafficLogger;

}
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_DA4*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)streamError;
-(void)_scheduleCallback;
-(void)_streamEventTrigger;
-(id)initWithMIMEData:(id)arg1 preflightData:(id)arg2 postflightData:(id)arg3 intendToStream:(BOOL)arg4 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasBytesAvailable;
-(unsigned long long)streamStatus;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)open;
-(void)close;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithData:(id)arg1 ;
@end
