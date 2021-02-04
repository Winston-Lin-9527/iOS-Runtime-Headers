/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, WBSSQLiteDatabase, NSObject, NSMutableDictionary, WBSSQLiteStatement;

@interface SFBrowserStateSQLiteStore : NSObject {

	NSURL* _databaseURL;
	WBSSQLiteDatabase* _database;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	NSMutableDictionary* _tabUUIDStrings;
	NSMutableDictionary* _browserWindowDatabaseIDs;
	WBSSQLiteStatement* _cachedTabDeleteStatement;

}
-(void)closeDatabase;
-(void)_vacuum;
-(void)_openDatabaseAndCheckIntegrity:(BOOL)arg1 ;
-(BOOL)_isDatabaseOpen;
-(id)initWithDatabaseURL:(id)arg1 ;
-(BOOL)_checkDatabaseIntegrity;
-(void)_closeDatabase;
-(int)_migrateToCurrentSchemaVersionIfNeeded;
-(int)_schemaVersion;
-(int)_createFreshDatabaseSchema;
-(void)_migrateFromLegacyPlistIfNeeded;
-(int)_migrateToSchemaVersion:(int)arg1 ;
-(int)_setDatabaseSchemaVersion:(int)arg1 ;
-(void)_migrateFromLegacyPlistWithPath:(id)arg1 ;
-(void)_updateBrowserWindowStateWithDictionary:(id)arg1 ;
-(int)_migrateToSchemaVersion_2;
-(int)_recoverFromDatabaseInconsistencyFromSchemaVersion3Migration;
-(int)_migrateToSchemaVersion_3;
-(int)_createTableForTabs;
-(int)_createTableForTabSession;
-(BOOL)_updateTabStateWithData:(id)arg1 ;
-(void)_insertTabStateWithData:(id)arg1 ;
-(void)_readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cacheUUIDForTabStateData:(id)arg1 ;
-(void)_setDatabaseID:(long long)arg1 browserWindow:(id)arg2 ;
-(long long)_saveBrowserWindowStateWithData:(id)arg1 ;
-(long long)_databaseIDForBrowserWindow:(id)arg1 ;
-(BOOL)_isTabStateCached:(id)arg1 ;
-(long long)_saveBrowserWindowStateWithDictionary:(id)arg1 ;
-(void)_updateOrInsertTabStateWithData:(id)arg1 ;
-(id)_tabUUIDsInWindow:(id)arg1 ;
-(id)_sqliteStatementForTabDeleting;
-(void)_updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(id)_readSavedSessionStateDataForTabWithUUID:(id)arg1 ;
-(id)browserWindowUUIDs;
-(void)saveTabStateWithDictionary:(id)arg1 ;
-(void)readTabStatesWithBrowserWindowUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)tabStatesWithBrowserWindowUUID:(id)arg1 ;
-(void)updateBrowserWindowWithData:(id)arg1 tabs:(id)arg2 ;
-(void)updateBrowserWindowStateWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readSavedSessionStateDataForTabWithUUID:(id)arg1 ;
-(BOOL)deleteTabStateWithBrowserWindowUUID:(id)arg1 andRemoveWindow:(BOOL)arg2 ;
-(void)updateTabWithTabStateData:(id)arg1 ;
-(void)removeTabWithTabData:(id)arg1 ;
-(BOOL)deleteAllSavedStates;
-(void)checkPointWriteAheadLog;
-(void)setSecureDeleteEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end
