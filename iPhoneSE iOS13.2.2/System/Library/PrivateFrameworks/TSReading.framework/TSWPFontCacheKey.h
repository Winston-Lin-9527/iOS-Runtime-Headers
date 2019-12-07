/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSWPFontCacheKey : NSObject {

	NSString* _fontName;
	double _fontSize;
	double _fontWeight;
	unsigned long long _hash;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double fontSize;                  //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) double fontWeight;                //@synthesize fontWeight=_fontWeight - In the implementation block
+(id)cacheKeyWithFontName:(id)arg1 size:(double)arg2 weight:(double)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)fontName;
-(double)fontSize;
-(double)fontWeight;
-(id)initWithFontName:(id)arg1 size:(double)arg2 weight:(double)arg3 ;
@end
