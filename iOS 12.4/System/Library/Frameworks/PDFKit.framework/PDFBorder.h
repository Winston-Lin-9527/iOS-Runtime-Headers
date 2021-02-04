/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class PDFBorderPrivateVars, NSArray, NSDictionary;

@interface PDFBorder : NSObject <NSCopying, NSCoding> {

	PDFBorderPrivateVars* _private;

}

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) double lineWidth; 
@property (nonatomic,copy) NSArray * dashPattern; 
@property (nonatomic,copy,readonly) NSDictionary * borderKeyValues; 
-(void)drawInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(NSDictionary *)borderKeyValues;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 forPage:(id)arg2 ;
-(double)horizontalCornerRadius;
-(double)verticalCornerRadius;
-(id)createDictionaryRef;
-(void)setDashPattern:(NSArray *)arg1 ;
-(void)setHorizontalCornerRadius:(double)arg1 ;
-(void)setVerticalCornerRadius:(double)arg1 ;
-(const double*)dashPatternRaw;
-(unsigned)dashCountRaw;
-(void)setDashPatternRaw;
-(void)setStyleFromDictionary:(CGPDFDictionaryRef)arg1 ;
-(BOOL)setBorderCharacteristicsFromArray:(CGPDFArrayRef)arg1 ;
-(void)setDashFromArray:(CGPDFArrayRef)arg1 ;
-(void)updateCornerBorderStyle;
-(BOOL)isRectangular;
-(NSArray *)dashPattern;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)drawInRect:(CGRect)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(double)lineWidth;
@end
