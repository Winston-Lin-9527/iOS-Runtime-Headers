/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Engram/Engram-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENStableGroupID, NSData;

@interface ENGroupID : NSObject <NSSecureCoding, NSCopying> {

	int _generation;
	ENStableGroupID* _stableGroupID;

}

@property (nonatomic,readonly) ENStableGroupID * stableGroupID;              //@synthesize stableGroupID=_stableGroupID - In the implementation block
@property (nonatomic,readonly) int generation;                               //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) NSData * dataRepresentation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(int)generation;
-(ENStableGroupID *)stableGroupID;
-(BOOL)compare:(id)arg1 withResult:(long long*)arg2 error:(id*)arg3 ;
-(id)initWithStableGroupID:(id)arg1 generation:(int)arg2 ;
@end
