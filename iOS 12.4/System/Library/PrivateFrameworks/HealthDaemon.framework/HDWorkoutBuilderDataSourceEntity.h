/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderDataSourceEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)foreignKeys;
+(long long)protectionClass;
+(BOOL)storeDataSourceWithIdentifier:(id)arg1 archivedState:(id)arg2 workoutBuilder:(id)arg3 transaction:(id)arg4 error:(id*)arg5 ;
+(BOOL)removeDataSourceWithIdentifier:(id)arg1 fromWorkoutBuilder:(id)arg2 transaction:(id)arg3 error:(id*)arg4 ;
+(BOOL)enumerateDataSourcesForWorkoutBuilder:(id)arg1 transaction:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
@end
