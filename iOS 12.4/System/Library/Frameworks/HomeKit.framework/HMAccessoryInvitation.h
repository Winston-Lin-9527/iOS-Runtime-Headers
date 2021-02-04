/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class NSUUID, HMAccessory, NSString;

@interface HMAccessoryInvitation : NSObject <NSSecureCoding, HMObjectMerge> {

	NSUUID* _identifier;
	HMAccessory* _accessory;
	long long _state;

}

@property (nonatomic,retain) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) HMAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3 ;
-(NSUUID *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setState:(long long)arg1 ;
-(NSUUID *)uniqueIdentifier;
@end
