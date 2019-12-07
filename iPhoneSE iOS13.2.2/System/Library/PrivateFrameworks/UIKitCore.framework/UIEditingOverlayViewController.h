/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIUndoGestureInteraction;

@interface UIEditingOverlayViewController : UIViewController {

	UIUndoGestureInteraction* _undoInteraction;

}

@property (nonatomic,retain) UIUndoGestureInteraction * undoInteraction;              //@synthesize undoInteraction=_undoInteraction - In the implementation block
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)_addInteractions;
-(void)_removeInteractions;
-(UIUndoGestureInteraction *)undoInteraction;
-(void)setUndoInteraction:(UIUndoGestureInteraction *)arg1 ;
-(void)updateEditingOverlayContainer;
@end
