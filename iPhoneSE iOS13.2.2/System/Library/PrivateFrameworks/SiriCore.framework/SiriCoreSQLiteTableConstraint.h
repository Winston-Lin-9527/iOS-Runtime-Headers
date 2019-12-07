/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SiriCoreSQLiteTableConstraint : NSObject <NSCopying> {

	NSString* _name;
	long long _type;
	NSArray* _columnNames;

}

@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSArray * columnNames;              //@synthesize columnNames=_columnNames - In the implementation block
+(id)primaryKeyTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
+(id)uniqueTableConstraintWithName:(id)arg1 columnNames:(id)arg2 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSArray *)columnNames;
-(id)initWithName:(id)arg1 type:(long long)arg2 columnNames:(id)arg3 ;
@end
