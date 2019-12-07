/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VCRealmDataStore, NSPersistentContainer, NSManagedObjectContext, NSObject;

@interface VCCoreDataStore : NSObject {

	VCRealmDataStore* _realmDataStore;
	NSPersistentContainer* _container;
	NSManagedObjectContext* _context;
	NSManagedObjectContext* _suggestionsContext;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) VCRealmDataStore * realmDataStore;                       //@synthesize realmDataStore=_realmDataStore - In the implementation block
@property (nonatomic,retain) NSPersistentContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * suggestionsContext;               //@synthesize suggestionsContext=_suggestionsContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
+(BOOL)destroyPersistentStore:(id)arg1 error:(id*)arg2 ;
-(NSPersistentContainer *)container;
-(void)setContainer:(NSPersistentContainer *)arg1 ;
-(NSManagedObjectContext *)context;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(VCRealmDataStore *)realmDataStore;
-(id)initWithPersistentStoreDescription:(id)arg1 realmDataStore:(id)arg2 error:(id*)arg3 ;
-(BOOL)resetPersistentStore:(id*)arg1 ;
-(BOOL)loadPersistentStoreWithDescription:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveContextOrRollback:(id*)arg1 ;
-(BOOL)saveContext:(id)arg1 orRollback:(id*)arg2 ;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 accessSpecifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteShortcutSuggestionsFromApps:(id)arg1 ;
-(void)deleteStaleShortcutSuggestions;
-(NSManagedObjectContext *)suggestionsContext;
-(void)setSuggestionsContext:(NSManagedObjectContext *)arg1 ;
@end
