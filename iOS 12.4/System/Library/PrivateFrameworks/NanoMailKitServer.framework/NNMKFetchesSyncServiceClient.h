/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKFetchesSyncServiceClientDelegate;
@interface NNMKFetchesSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKFetchesSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKFetchesSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)requestFetch:(id)arg1 ;
-(id)requestMoreMessagesInBatch:(id)arg1 ;
-(void)requestMoreMessagesForConversation:(id)arg1 ;
-(id)requestContent:(id)arg1 highPriority:(BOOL)arg2 ;
-(id)requestFullSync:(id)arg1 ;
-(id)requestHaltSync:(id)arg1 ;
-(id)notifyInitialSyncFinished:(id)arg1 ;
-(id)notifyCompanionAboutWebKitStatus:(id)arg1 ;
-(void)setDelegate:(id<NNMKFetchesSyncServiceClientDelegate>)arg1 ;
-(id<NNMKFetchesSyncServiceClientDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
@end
