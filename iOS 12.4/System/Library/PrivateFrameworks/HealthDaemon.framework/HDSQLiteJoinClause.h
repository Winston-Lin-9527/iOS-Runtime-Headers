/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteJoinClause : NSObject {

	NSString* _joinAsName;
	NSString* _localTable;
	Class _targetEntityClass;
	NSString* _localReferenceProperty;
	NSString* _targetKeyProperty;
	long long _joinType;

}

@property (nonatomic,copy,readonly) NSString * localTable;                          //@synthesize localTable=_localTable - In the implementation block
@property (nonatomic,readonly) Class targetEntityClass;                             //@synthesize targetEntityClass=_targetEntityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * joinAsName; 
@property (nonatomic,copy,readonly) NSString * localReferenceProperty;              //@synthesize localReferenceProperty=_localReferenceProperty - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetKeyProperty;                   //@synthesize targetKeyProperty=_targetKeyProperty - In the implementation block
@property (nonatomic,readonly) long long joinType;                                  //@synthesize joinType=_joinType - In the implementation block
+(id)innerJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5 ;
+(id)leftJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5 ;
-(id)_initWithJoinType:(long long)arg1 fromTable:(id)arg2 toTargetEntity:(Class)arg3 as:(id)arg4 localReference:(id)arg5 targetKey:(id)arg6 ;
-(NSString *)joinAsName;
-(Class)targetEntityClass;
-(NSString *)localTable;
-(long long)joinType;
-(NSString *)localReferenceProperty;
-(NSString *)targetKeyProperty;
-(id)copyWithJoinType:(long long)arg1 ;
-(id)SQLJoinClause;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
