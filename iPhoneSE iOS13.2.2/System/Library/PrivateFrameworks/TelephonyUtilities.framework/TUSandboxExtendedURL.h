/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding> {

	NSString* _sandboxExtensionClass;
	NSURL* _URL;
	NSString* _sandboxExtensionToken;
	long long _sandboxExtensionHandle;

}

@property (nonatomic,retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionToken;                //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionClass;                //@synthesize sandboxExtensionClass=_sandboxExtensionClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(NSString *)sandboxExtensionToken;
-(long long)sandboxExtensionHandle;
-(NSString *)sandboxExtensionClass;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(BOOL)isEqualToSandboxExtendedURL:(id)arg1 ;
-(void)setSandboxExtensionClass:(NSString *)arg1 ;
@end
