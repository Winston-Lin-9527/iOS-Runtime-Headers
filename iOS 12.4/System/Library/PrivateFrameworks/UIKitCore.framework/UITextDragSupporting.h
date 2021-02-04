/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextDragSupporting <UITextDraggable>
@optional
-(NSRange*)_visibleRangeWithLayout:(BOOL)arg1;
-(id)willGenerateCancelPreview;
-(void)didGenerateCancelPreview:(id)arg1;
-(void)performCancelAnimations;
-(BOOL)_shouldObscureInput;

@required
-(BOOL)allowsDraggingAttachments;
-(BOOL)allowsEditingTextAttributes;
-(void)draggingStarted;
-(void)draggingFinished:(id)arg1;

@end
