/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFViewControllerPrivate;

@interface PDFViewController : NSObject {

	PDFViewControllerPrivate* _private;

}
-(void)_clearSelection;
-(int)textSelectionState;
-(void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 ;
-(unsigned long long)_typeForGestureRecognizer:(id)arg1 ;
-(void)removeActiveAnnotation;
-(void)interactWithAnnotation:(id)arg1 ;
-(id)activeAnnotation;
-(void)_hideTextSelectionMenu;
-(void)_showTextSelectionMenu;
-(id)_annotationPreceding:(id)arg1 wrapAround:(BOOL)arg2 ;
-(id)_annotationFollowing:(id)arg1 wrapAround:(BOOL)arg2 ;
-(void)_postAnnotationHitNotification:(id)arg1 ;
-(void)_doButtonHit:(id)arg1 ;
-(void)_postAnnotationWillHitNotification:(id)arg1 ;
-(void)_handleButtonHit:(id)arg1 ;
-(BOOL)_canWordDragAtLocation:(CGPoint)arg1 ;
-(BOOL)isTouchingLollipopAtLocation:(CGPoint)arg1 locationOfFirstTouch:(CGPoint)arg2 gestureType:(unsigned long long)arg3 ;
-(id)_annotationAtGestureLocation:(CGPoint)arg1 ;
-(BOOL)_shouldHandleAnnotation:(id)arg1 ;
-(void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(CGPoint)arg3 ;
-(void)_updateState:(int)arg1 forGesture:(unsigned long long)arg2 atLocation:(CGPoint)arg3 locationOfFirstTouch:(CGPoint)arg4 ;
-(void)_annotationHit:(id)arg1 atLocation:(CGPoint)arg2 ;
-(void)_performDoubleTapAtLocation:(CGPoint)arg1 ;
-(int)_canLollipopDragAtLocation:(CGPoint)arg1 locationOfFirstTouch:(CGPoint)arg2 gestureType:(unsigned long long)arg3 ;
-(void)showTextSelectionMenu:(BOOL)arg1 ;
-(void)_updateWordDragAtLocation:(CGPoint)arg1 ;
-(void)_updateLollipopDragAtLocation:(CGPoint)arg1 ;
-(id)_getPagePoint:(CGPoint*)arg1 forGestureLocation:(CGPoint)arg2 ;
-(CGPoint)_convertPoint:(CGPoint)arg1 toPageView:(id)arg2 ;
-(void)setActiveAnnotation:(id)arg1 ;
-(void)activateNextAnnotation:(BOOL)arg1 ;
-(BOOL)isDraggingLollipop;
-(void)_updateLollipopDragAtLocation:(CGPoint)arg1 locationOfFirstTouch:(CGPoint)arg2 ;
-(void)setActiveSelection:(id)arg1 ;
-(void)handleGesture:(id)arg1 ;
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)clearSelection;
@end
