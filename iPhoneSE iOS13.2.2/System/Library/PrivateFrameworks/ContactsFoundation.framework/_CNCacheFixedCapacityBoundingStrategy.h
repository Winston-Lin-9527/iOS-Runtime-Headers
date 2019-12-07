/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCacheBoundingStrategy.h>

@class CNQueue, NSString;

@interface _CNCacheFixedCapacityBoundingStrategy : NSObject <CNCacheBoundingStrategy> {

	CNQueue* _keys;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) CNQueue * keys;                           //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(CNQueue *)keys;
-(unsigned long long)capacity;
-(BOOL)shouldEvictKey:(id)arg1 ;
-(void)willUpdateCacheBy:(unsigned long long)arg1 forKey:(id)arg2 keysToEvict:(id*)arg3 ;
-(void)willAccessKey:(id)arg1 ;
@end
