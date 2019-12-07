/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/UIPDFMarkupAnnotation.h>

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation
-(id)url;
-(unsigned long long)pageNumber;
-(BOOL)recognizeGestures;
-(BOOL)shouldRecognizeTapOrPress:(CGPoint)arg1 ;
-(id)newBaseURL;
-(unsigned long long)getDestination:(CGPDFDictionaryRef)arg1 ;
-(unsigned long long)getNamedDestination:(CGPDFDictionaryRef)arg1 ;
-(BOOL)quadPoints:(CGPDFArrayRef)arg1 within:(CGRect)arg2 ;
-(CGRect)linkRectangle;
@end
