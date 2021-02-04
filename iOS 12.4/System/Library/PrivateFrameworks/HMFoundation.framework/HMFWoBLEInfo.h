/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMFWoBLEInfo : HMFObject <NSSecureCoding> {

	NSData* _bleIdentifier;

}

@property (nonatomic,readonly) NSData * bleIdentifier;              //@synthesize bleIdentifier=_bleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(id)initWithBLEIdentifier:(id)arg1 ;
-(NSData *)bleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
