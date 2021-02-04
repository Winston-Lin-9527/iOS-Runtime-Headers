/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
+(void)_createDatabaseDirectory;
+(BOOL)_setupDatabase:(id)arg1 ;
+(id)accountUniqueIdentifierKey;
+(id)newDefaultInstance;
-(id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)readUsingTransactionBlock:(/*^block*/id)arg1 ;
-(BOOL)removeValueForDatabaseProperty:(id)arg1 ;
-(void)modifyUsingAppPurchaseHistoryTransactionBlock:(/*^block*/id)arg1 ;
-(id)currentAccountUniqueIdentifier;
-(BOOL)setCurrentAccountUniqueIdentifier:(id)arg1 ;
-(long long)localRevisionForAccountUniqueIdentifier:(id)arg1 ;
-(BOOL)setLocalRevision:(long long)arg1 forAccountUniqueIdentifier:(id)arg2 ;
-(BOOL)resetCacheForNewAccountID:(id)arg1 ;
-(id)allProperties:(id)arg1 accountID:(id)arg2 includingHidden:(BOOL)arg3 ;
-(BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(void)readAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)database;
-(id)init;
-(void)dealloc;
@end
