/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICScrollViewKeyboardResizerDelegate;
#import <NotesUI/NotesUI-Structs.h>
@class UIScrollView;

@interface ICScrollViewKeyboardResizer : NSObject {

	BOOL _autoResizing;
	BOOL _showingKeyboard;
	BOOL _observingKeyboardNotifications;
	BOOL _didResizeScrollView;
	id<ICScrollViewKeyboardResizerDelegate> _delegate;

}

@property (assign,getter=isObservingKeyboardNotifications,nonatomic) BOOL observingKeyboardNotifications;              //@synthesize observingKeyboardNotifications=_observingKeyboardNotifications - In the implementation block
@property (assign,getter=isAutoResizing,nonatomic) BOOL autoResizing;                                                  //@synthesize autoResizing=_autoResizing - In the implementation block
@property (assign,nonatomic) BOOL didResizeScrollView;                                                                 //@synthesize didResizeScrollView=_didResizeScrollView - In the implementation block
@property (assign,nonatomic) BOOL showingKeyboard;                                                                     //@synthesize showingKeyboard=_showingKeyboard - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) id<ICScrollViewKeyboardResizerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isObservingKeyboardNotifications;
-(void)handleKeyboardWillShow:(id)arg1 ;
-(void)handleKeyboardWillHide:(id)arg1 ;
-(void)setObservingKeyboardNotifications:(BOOL)arg1 ;
-(void)applyInsetsFromKeyboardFrame:(CGRect)arg1 duration:(double)arg2 ;
-(BOOL)didResizeScrollView;
-(void)clearInsetsWithDuration:(double)arg1 ;
-(void)setAutoResizing:(BOOL)arg1 ;
-(void)setDidResizeScrollView:(BOOL)arg1 ;
-(void)setShowingKeyboard:(BOOL)arg1 ;
-(void)startAutoResizing;
-(void)stopAutoResizing;
-(BOOL)isAutoResizing;
-(BOOL)showingKeyboard;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<ICScrollViewKeyboardResizerDelegate>)arg1 ;
-(id<ICScrollViewKeyboardResizerDelegate>)delegate;
-(UIScrollView *)scrollView;
-(id)initWithDelegate:(id)arg1 ;
@end
