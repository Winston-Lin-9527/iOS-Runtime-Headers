/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCountedSet : NSMutableSet {

	id _table;
	void* _reserved;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSet:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)member:(id)arg1 ;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)countForObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)getObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithSet:(id)arg1 ;
@end
