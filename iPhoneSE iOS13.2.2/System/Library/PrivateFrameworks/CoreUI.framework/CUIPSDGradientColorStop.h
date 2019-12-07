/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientStop.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CUIPSDGradientColorStop : CUIPSDGradientStop <NSCoding> {

	psdGradientColor gradientColor;

}
+(void)initialize;
+(id)colorStopWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isColorStop;
-(double)colorLocation;
-(psdGradientColor)gradientColor;
-(id)initWithLocation:(double)arg1 gradientColor:(psdGradientColor)arg2 ;
@end
