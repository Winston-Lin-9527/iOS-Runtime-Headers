/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTServiceDescriptorContainer : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _descriptors;

}

@property (nonatomic,retain) NSArray * descriptors;              //@synthesize descriptors=_descriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)descriptors;
-(void)setDescriptors:(NSArray *)arg1 ;
-(id)initWithDescriptors:(id)arg1 ;
@end
