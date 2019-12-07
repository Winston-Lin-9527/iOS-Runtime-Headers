/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEFlowMetaData, NSObject, NSData;

@interface NEAppProxyFlow : NSObject {

	NEFlowMetaData* _metaData;
	NEFlowRef _flow;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign) NEFlowRef flow;                                  //@synthesize flow=_flow - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSData * applicationData; 
@property (readonly) NEFlowMetaData * metaData;                     //@synthesize metaData=_metaData - In the implementation block
+(id)flowErrorForVPNFlowError:(long long)arg1 ;
+(CFErrorRef)copyVPNFlowErrorFromFlowError:(id)arg1 ;
+(id)copyRemoteEndpointFromFlow:(NEFlowRef)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NEFlowMetaData *)metaData;
-(NSData *)applicationData;
-(void)setApplicationData:(NSData *)arg1 ;
-(NEFlowRef)flow;
-(id)initWithNEFlow:(NEFlowRef)arg1 queue:(id)arg2 ;
-(void)clearEventHandlers;
-(void)openWithLocalEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)closeReadWithError:(id)arg1 ;
-(void)closeWriteWithError:(id)arg1 ;
-(void)setFlow:(NEFlowRef)arg1 ;
@end
