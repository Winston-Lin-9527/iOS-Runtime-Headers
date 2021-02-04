/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AXSpeechPronunciationOptions : NSObject <NSSecureCoding> {

	NSString* _orthography;
	NSString* _language;

}

@property (nonatomic,retain) NSString * orthography;              //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,retain) NSString * language;                 //@synthesize language=_language - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)orthography;
-(void)setOrthography:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
