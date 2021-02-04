/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface ILClassificationReportRequest : NSObject <NSSecureCoding> {

	NSString* _extensionIdentifier;
	NSDictionary* _jsonDictionary;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier;              //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * jsonDictionary;                        //@synthesize jsonDictionary=_jsonDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)jsonDictionary;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(void)setJsonDictionary:(NSDictionary *)arg1 ;
-(id)initWithExtensionIdentifier:(id)arg1 jsonDictionary:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)extensionIdentifier;
@end
