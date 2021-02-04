/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccountHandle, NSString;

@interface _HMDDeviceHandle : HMFObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;

}

@property (readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (getter=isLocal,readonly) BOOL local; 
@property (getter=isGlobal,readonly) BOOL global; 
@property (copy,readonly) HMDAccountHandle * accountHandle; 
@property (copy,readonly) NSString * destination; 
+(BOOL)isValidDestination:(id)arg1 ;
+(id)identifierNamespace;
+(BOOL)supportsSecureCoding;
-(id)initWithDestination:(id)arg1 ;
-(BOOL)isGlobal;
-(HMDAccountHandle *)accountHandle;
-(id)init;
-(NSUUID *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)destination;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isLocal;
@end
