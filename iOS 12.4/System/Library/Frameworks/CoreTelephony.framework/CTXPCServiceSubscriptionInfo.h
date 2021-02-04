/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _subscriptions;
	NSArray* _subscriptionsInUse;

}

@property (nonatomic,retain) NSArray * subscriptions;                   //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionsInUse;              //@synthesize subscriptionsInUse=_subscriptionsInUse - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubscriptionsInUse:(NSArray *)arg1 ;
-(NSArray *)subscriptionsInUse;
-(NSArray *)subscriptions;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
