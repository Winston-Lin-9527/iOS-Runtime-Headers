/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>

@class NTPBURLMapping, NSDictionary;

@interface FCPersonalizationURLMapping : NSObject <NSSecureCoding, NSCopying, FCJSONEncodableObjectProviding> {

	NTPBURLMapping* _pbURLMapping;
	NSDictionary* _urlMappingByDomain;

}

@property (nonatomic,retain) NSDictionary * urlMappingByDomain;              //@synthesize urlMappingByDomain=_urlMappingByDomain - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(id)domainForURL:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)jsonEncodableObject;
-(id)initWithPBURLMapping:(id)arg1 ;
-(NSDictionary *)urlMappingByDomain;
-(id)tagScoresForURL:(id)arg1 ;
-(id)popularityForURL:(id)arg1 ;
-(void)setUrlMappingByDomain:(NSDictionary *)arg1 ;
-(id)init;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
