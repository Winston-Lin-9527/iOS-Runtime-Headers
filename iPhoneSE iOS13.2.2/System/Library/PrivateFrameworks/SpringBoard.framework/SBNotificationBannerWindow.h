/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSecureMainScreenActiveInterfaceOrientationWindow.h>

@interface SBNotificationBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow {

	BOOL _isShowingLongLook;

}

@property (assign,nonatomic) BOOL isShowingLongLook;              //@synthesize isShowingLongLook=_isShowingLongLook - In the implementation block
-(id)init;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)_canBecomeKeyWindow;
-(void)setIsShowingLongLook:(BOOL)arg1 ;
-(BOOL)isShowingLongLook;
@end
