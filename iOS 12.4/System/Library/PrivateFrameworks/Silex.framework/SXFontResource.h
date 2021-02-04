/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXFontResource.h>

@protocol SXFontResource <SXResource,SXFontFace>
@end


@class NSString, NSURL;

@interface SXFontResource : SXResource <SXFontResource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes; 
+(id)typeString;
-(id<SXFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(id)fontAttributesWithValue:(id)arg1 withType:(int)arg2 ;
@end
