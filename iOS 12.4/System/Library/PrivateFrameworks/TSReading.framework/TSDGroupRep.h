/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDContainerRep.h>
#import <TSReading/TSDMagicMoveMatching.h>

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(BOOL)isDraggable;
-(CGRect)clipRect;
-(CGPoint)convertNaturalPointFromUnscaledCanvas:(CGPoint)arg1 ;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)handleDoubleTapAtPoint:(CGPoint)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(CGRect)frameInUnscaledCanvas;
-(BOOL)containsPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(void)processChangedProperty:(int)arg1 ;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(BOOL)shouldShowCommentHighlight;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)intersectsUnscaledRect:(CGRect)arg1 ;
-(id)allRepsContainedInGroup;
-(Class)layerClass;
-(void)setNeedsDisplay;
-(CGColorRef)selectionHighlightColor;
-(void)drawInContext:(CGContextRef)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
@end
