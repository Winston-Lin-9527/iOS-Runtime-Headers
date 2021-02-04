/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSEventsTableBase.h>

@interface SSMetricsEventTable : SSEventsTableBase
+(id)_eventsTableName;
+(id)databasePath;
-(BOOL)_setupDatabase;
-(id)_pragmaValueForName:(id)arg1 ;
-(BOOL)_migrateToVersion1;
-(BOOL)_migrateToVersion2;
-(BOOL)_migrateToVersion3;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 ;
@end
