/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFDropTargetDelegate <NSObject>
@optional
-(void)dropTarget:(id)arg1 didDropDragItems:(id)arg2 atPoint:(CGPoint)arg3;
-(BOOL)dropTarget:(id)arg1 canDropDraggedItemsAtPoint:(CGPoint)arg2;
-(void)dropTarget:(id)arg1 dragDidMoveToPoint:(CGPoint)arg2;
-(void)dropTarget:(id)arg1 dragEnteredAtPoint:(CGPoint)arg2;
-(void)dropTargetDragExited:(id)arg1;
-(long long)dropTarget:(id)arg1 dataOwnerForSession:(id)arg2;

@end
