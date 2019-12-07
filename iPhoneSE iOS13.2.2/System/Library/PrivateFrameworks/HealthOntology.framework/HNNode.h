/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthOntology.framework/HealthOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthOntology/HealthOntology-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface HNNode : NSObject <NSCopying> {

	NSString* _identifier;
	NSDictionary* _properties;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)properties;
-(id)initWithIdentifier:(id)arg1 properties:(id)arg2 ;
@end
