/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSString, NSMutableDictionary;

@interface ACDDatabaseMigrator : NSObject {

	NSManagedObjectContext* _migrationContext;
	NSPersistentStoreCoordinator* _privateCoordinator;
	NSPersistentStoreCoordinator* _realCoordinator;
	NSString* _databasePath;
	NSMutableDictionary* _realOptions;

}
-(id)initForDatabaseAtPath:(id)arg1 persistentStoreCoordinator:(id)arg2 options:(id)arg3 ;
-(id)_setUpContextForMigration;
-(long long)_versionForModel:(id)arg1 ;
-(void)_migrateAccessAuthorizationsToTCCFromModelVersion:(long long)arg1 ;
-(void)_migrateNameAttributeOfDataclassEntities;
-(void)_migrateOptionsAttributeOfAuthorizatinEntitiesFromModelVersion:(long long)arg1 ;
-(void)_postProcessMigrationFromVersion:(long long)arg1 migrationData:(id)arg2 ;
-(id)_fetchAllAuthorizationEntitiesForModelVersion:(long long)arg1 ;
-(id)_fetchAllDataclassEntitles;
-(id)_compatibleModelForStoreAtURL:(id)arg1 ;
-(BOOL)run;
@end
