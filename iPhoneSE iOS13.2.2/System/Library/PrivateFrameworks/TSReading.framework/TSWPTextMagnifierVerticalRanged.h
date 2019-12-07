/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextMagnifierRanged.h>

@interface TSWPTextMagnifierVerticalRanged : TSWPTextMagnifierRanged
+(id)sharedRangedMagnifier;
-(void)dealloc;
-(void)remove;
-(double)currentOffset;
-(void)stopMagnifying:(BOOL)arg1 ;
-(void)updateFrame;
-(id)initWithDefaultFrame;
-(void)beginMagnifyingTarget:(id)arg1 magnificationPoint:(CGPoint)arg2 offset:(CGPoint)arg3 animated:(BOOL)arg4 ;
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(BOOL)shouldHideCanvasLayer;
-(id)underlayImageName;
-(id)overlayImageName;
-(id)maskImageName;
-(void)zoomLeftAnimation;
-(void)zoomRightAnimation;
@end
