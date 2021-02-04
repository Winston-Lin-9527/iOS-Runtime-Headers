/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient <NSObject>
@property (nonatomic,readonly) BOOL delaysContentTouches; 
@property (getter=_touchDelayForScrollDetection,nonatomic,readonly) double touchDelayForScrollDetection; 
@property (getter=_scrollHysteresis,nonatomic,readonly) double scrollHysteresis; 
@property (getter=_canScrollX,nonatomic,readonly) BOOL canScrollX; 
@property (getter=_canScrollY,nonatomic,readonly) BOOL canScrollY; 
@required
-(BOOL)_canScrollY;
-(BOOL)_canScrollX;
-(BOOL)delaysContentTouches;
-(BOOL)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
-(double)_touchDelayForScrollDetection;
-(double)_scrollHysteresis;

@end
