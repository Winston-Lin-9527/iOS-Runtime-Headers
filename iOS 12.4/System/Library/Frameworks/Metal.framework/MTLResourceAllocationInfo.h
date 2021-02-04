/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>

@property (readonly) NSString * memoryPool; 
@property (readonly) unsigned long long virtualSize; 
@property (readonly) unsigned long long residentSize; 
@property (readonly) unsigned long long dirtySize; 
@property (readonly) BOOL pageoffRequired; 
@property (readonly) BOOL purgeable; 
@property (readonly) unsigned long long uniqueIdentifier; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
