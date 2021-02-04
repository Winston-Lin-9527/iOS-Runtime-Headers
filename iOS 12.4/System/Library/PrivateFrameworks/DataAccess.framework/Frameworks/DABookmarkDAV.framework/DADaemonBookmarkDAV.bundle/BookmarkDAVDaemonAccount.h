/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DABookmarkDAV/BookmarkDAVAccount.h>
#import <DADaemonBookmarkDAV/DADataclassLockWatcher.h>
#import <DADaemonBookmarkDAV/DABabysittable.h>

@class BookmarkDAVSyncDriver, NSString, NSDictionary;

@interface BookmarkDAVDaemonAccount : BookmarkDAVAccount <DADataclassLockWatcher, DABabysittable> {

	BookmarkDAVSyncDriver* _syncDriver;

}

@property (nonatomic,readonly) NSString * pushKey; 
@property (nonatomic,readonly) NSDictionary * pushTransport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(NSString *)pushKey;
-(id)waiterID;
-(void)getRootFolderWithConsumer:(id)arg1 ;
-(void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(NSDictionary *)pushTransport;
@end
