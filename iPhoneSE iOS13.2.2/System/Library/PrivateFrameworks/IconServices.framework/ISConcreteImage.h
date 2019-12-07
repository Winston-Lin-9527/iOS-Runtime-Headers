/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISConcreteImage : ISImage <NSCopying> {

	BOOL _placeholder;
	CGImageRef _cgImage;
	double _scale;
	CGSize _size;
	CGSize _minimumSize;

}

@property (assign) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(CGSize)size;
-(double)scale;
-(CGSize)minimumSize;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(BOOL)placeholder;
-(CGImageRef)cgImage;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
@end
