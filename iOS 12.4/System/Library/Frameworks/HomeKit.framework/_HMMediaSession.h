/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol _HMMediaSessionDelegate;
@class HMFUnfairLock, NSUUID, NSString, _HMContext;

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge> {

	HMFUnfairLock* _lock;
	NSUUID* _uuid;
	NSString* _routeUID;
	long long _playbackState;
	_HMContext* _context;
	NSUUID* _uniqueIdentifier;
	NSUUID* _messageTargetUUID;
	id<_HMMediaSessionDelegate> _delegate;

}

@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * messageTargetUUID;                                      //@synthesize messageTargetUUID=_messageTargetUUID - In the implementation block
@property (assign,nonatomic,__weak) id<_HMMediaSessionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) long long playbackState;                                                 //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,readonly) NSString * routeUID;                                           //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(NSString *)routeUID;
-(void)setRouteUID:(NSString *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)updatePlaybackState:(id)arg1 ;
-(id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 ;
-(void)_handleSessionPlaybackUpdated:(id)arg1 ;
-(void)_handleSessionRouteUIDUpdated:(id)arg1 ;
-(void)_updatePlaybackState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1 ;
-(void)_notifyDelegateOfUpdatedRouteUID:(id)arg1 ;
-(void)setMessageTargetUUID:(NSUUID *)arg1 ;
-(void)refreshPlaybackStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)_registerNotificationHandlers;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(id)messageDestination;
-(void)setPlaybackState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setDelegate:(id<_HMMediaSessionDelegate>)arg1 ;
-(id<_HMMediaSessionDelegate>)delegate;
-(void)setContext:(_HMContext *)arg1 ;
-(_HMContext *)context;
-(NSUUID *)uniqueIdentifier;
@end
