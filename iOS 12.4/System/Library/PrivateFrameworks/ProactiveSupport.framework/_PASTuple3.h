/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSObject;

@interface _PASTuple3 : NSObject <NSCopying> {

	NSObject* _first;
	NSObject* _second;
	NSObject* _third;

}

@property (nonatomic,readonly) NSObject * first;               //@synthesize first=_first - In the implementation block
@property (nonatomic,readonly) NSObject * second;              //@synthesize second=_second - In the implementation block
@property (nonatomic,readonly) NSObject * third;               //@synthesize third=_third - In the implementation block
+(id)tupleWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3 ;
-(BOOL)isEqualToTuple3:(id)arg1 ;
-(NSObject *)first;
-(NSObject *)third;
-(id)initWithFirst:(id)arg1 second:(id)arg2 third:(id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject *)second;
@end
