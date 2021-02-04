/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SXVideoOverlayButton.h>

@class UIButton, _UIBackdropView;

@interface SXHighFidelityVideoOverlayButton : UIView <SXVideoOverlayButton> {

	long long _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	id _target;
	SEL _action;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)recalculateBackdropView;
-(void)dealloc;
-(int)state;
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setState:(int)arg1 ;
@end
