/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFDestinationPrivate, PDFPage;

@interface PDFDestination : NSObject <NSCopying> {

	PDFDestinationPrivate* _private;

}

@property (nonatomic,__weak,readonly) PDFPage * page; 
@property (nonatomic,readonly) CGPoint point; 
@property (assign,nonatomic) double zoom; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(long long)compare:(id)arg1 ;
-(CGPoint)point;
-(void)commonInit;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(PDFPage *)page;
-(id)document;
-(id)initWithDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 ;
-(const CFArrayRef)createArrayRef;
-(id)initWithPage:(id)arg1 atPoint:(CGPoint)arg2 ;
@end
