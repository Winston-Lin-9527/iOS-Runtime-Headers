/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {

	TIHandwritingStrokes* _strokes;

}

@property (nonatomic,retain) TIHandwritingStrokes * strokes;              //@synthesize strokes=_strokes - In the implementation block
-(void)clear;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI81)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
-(void)setStrokes:(TIHandwritingStrokes *)arg1 ;
-(TIHandwritingStrokes *)strokes;
@end
