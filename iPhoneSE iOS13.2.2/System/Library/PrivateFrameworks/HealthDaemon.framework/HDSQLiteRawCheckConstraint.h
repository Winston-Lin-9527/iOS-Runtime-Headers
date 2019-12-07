/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSQLiteCheckConstraint.h>

@class NSString;

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint {

	NSString* __rawSQL;

}

@property (nonatomic,copy,readonly) NSString * _rawSQL;              //@synthesize _rawSQL=__rawSQL - In the implementation block
+(id)checkConstraintWithSQL:(id)arg1 ;
-(id)SQLCheckConstraint;
-(id)_initWithSQL:(id)arg1 ;
-(NSString *)_rawSQL;
@end
