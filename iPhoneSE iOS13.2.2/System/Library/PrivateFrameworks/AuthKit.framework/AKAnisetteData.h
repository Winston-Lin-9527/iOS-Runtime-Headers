/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding> {

	NSString* _machineID;
	NSString* _oneTimePassword;
	unsigned long long _routingInfo;

}

@property (nonatomic,copy) NSString * machineID;                          //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * oneTimePassword;                    //@synthesize oneTimePassword=_oneTimePassword - In the implementation block
@property (assign,nonatomic) unsigned long long routingInfo;              //@synthesize routingInfo=_routingInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)machineID;
-(NSString *)oneTimePassword;
-(unsigned long long)routingInfo;
-(void)setMachineID:(NSString *)arg1 ;
-(void)setOneTimePassword:(NSString *)arg1 ;
-(void)setRoutingInfo:(unsigned long long)arg1 ;
@end
