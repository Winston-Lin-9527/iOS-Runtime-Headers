/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _preferredScale;
	double _scaleOverride;
	double _refreshRate;
	long long _gamut;
	long long _hdr;
	long long _rotation;
	BOOL _virtual;

}

@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) CGSize nativePixelSize; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double refreshRate;                  //@synthesize refreshRate=_refreshRate - In the implementation block
@property (nonatomic,readonly) long long colorGamut;                //@synthesize gamut=_gamut - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                   //@synthesize hdr=_hdr - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_emptyMode;
+(BOOL)supportsSecureCoding;
-(id)_initWithCADisplayMode:(id)arg1 scale:(double)arg2 rotation:(long long)arg3 ;
-(id)_referenceSizeDescription;
-(id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 preferredScale:(unsigned long long)arg3 scaleOverride:(double)arg4 refreshRate:(double)arg5 gamut:(long long)arg6 hdr:(long long)arg7 rotation:(long long)arg8 virtual:(BOOL)arg9 validityCheck:(long long)arg10 ;
-(id)_initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 scale:(unsigned long long)arg3 refreshRate:(double)arg4 gamut:(long long)arg5 hdr:(long long)arg6 ;
-(id)_copyWithOverrideSize:(CGSize)arg1 ;
-(BOOL)_isVirtualMode;
-(unsigned long long)_caWidth;
-(unsigned long long)_caHeight;
-(unsigned long long)_caPreferredScale;
-(double)_caRefreshRate;
-(id)_caColorGamut;
-(id)_caHDRMode;
-(unsigned long long)_height;
-(CGSize)size;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_width;
-(CGSize)nativePixelSize;
-(double)refreshRate;
-(long long)hdrMode;
-(long long)_rotation;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(CGSize)pixelSize;
-(long long)colorGamut;
@end
