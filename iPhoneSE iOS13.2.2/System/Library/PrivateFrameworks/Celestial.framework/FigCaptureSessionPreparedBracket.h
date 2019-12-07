/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSessionPreparedBracket : NSObject {

	unsigned _outputFormat;
	SCD_Struct_BW19 _outputDimensions;
	unsigned _imageCount;
	int _colorSpaceProperties;

}

@property (assign,nonatomic) unsigned outputFormat;                         //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW19 outputDimensions;              //@synthesize outputDimensions=_outputDimensions - In the implementation block
@property (assign,nonatomic) unsigned imageCount;                           //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) int colorSpaceProperties;                      //@synthesize colorSpaceProperties=_colorSpaceProperties - In the implementation block
-(unsigned)outputFormat;
-(void)setOutputFormat:(unsigned)arg1 ;
-(unsigned)imageCount;
-(void)setImageCount:(unsigned)arg1 ;
-(int)colorSpaceProperties;
-(void)setOutputDimensions:(SCD_Struct_BW19)arg1 ;
-(void)setColorSpaceProperties:(int)arg1 ;
-(SCD_Struct_BW19)outputDimensions;
@end
