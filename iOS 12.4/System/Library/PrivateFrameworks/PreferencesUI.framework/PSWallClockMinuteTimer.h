/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface PSWallClockMinuteTimer : NSObject {

	id _target;
	SEL _action;
	NSTimer* _timer;

}
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)_fireAction;
-(void)invalidate;
-(void)startTimer;
@end
