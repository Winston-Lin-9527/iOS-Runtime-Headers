/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCSyncDataHandling
@required
-(void)applyChangeSet:(id)arg1 fromSyncServiceWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)getUnsyncedChangesForSyncServiceWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(void)markChangesAsSynced:(id)arg1 withSyncServiceWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeSyncStateForChanges:(id)arg1 withSyncServiceWithIdentifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeSyncStateForSyncServiceWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(int)handledMessageType;
-(id)createMessageFromData:(id)arg1;
-(void)registerSyncService:(id)arg1 asMaster:(BOOL)arg2;
-(void)deregisterSyncServiceWithIdentifier:(id)arg1;
-(BOOL)deleteSyncedData:(id*)arg1;

@end
