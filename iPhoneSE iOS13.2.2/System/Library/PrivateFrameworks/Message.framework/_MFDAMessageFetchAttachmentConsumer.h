/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMessageFetchAttachmentConsumer.h>

@class MFProgressFilterDataConsumer, MFActivityMonitor;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {

	MFProgressFilterDataConsumer* _progressFilter;
	unsigned long long _expectedLength;
	unsigned long long _accumulatedLength;
	MFActivityMonitor* _monitor;
	BOOL _dataWasBase64;
	BOOL _fetchSucceeded;

}

@property (nonatomic,retain) MFProgressFilterDataConsumer * progressFilter;              //@synthesize progressFilter=_progressFilter - In the implementation block
@property (assign,nonatomic) unsigned long long expectedLength;                          //@synthesize expectedLength=_expectedLength - In the implementation block
@property (readonly) BOOL dataWasBase64;                                                 //@synthesize dataWasBase64=_dataWasBase64 - In the implementation block
@property (readonly) BOOL fetchSucceeded;                                                //@synthesize fetchSucceeded=_fetchSucceeded - In the implementation block
-(void)setExpectedLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedLength;
-(id)initWithActivityMonitor:(id)arg1 ;
-(void)setProgressFilter:(MFProgressFilterDataConsumer *)arg1 ;
-(BOOL)fetchSucceeded;
-(BOOL)dataWasBase64;
-(MFProgressFilterDataConsumer *)progressFilter;
-(void)consumeData:(id)arg1 ofContentType:(id)arg2 forAttachmentNamed:(id)arg3 ofMessageWithServerID:(id)arg4 ;
-(void)attachmentFetchCompletedWithStatus:(long long)arg1 forAttachmentNamed:(id)arg2 ofMessageWithServerID:(id)arg3 dataWasBase64:(BOOL)arg4 sentBytesCount:(unsigned long long)arg5 receivedBytesCount:(unsigned long long)arg6 ;
@end
