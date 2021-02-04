/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_UINavigationInteractiveTransitionBaseDelegate.h>

@class NSString;

@interface WKSwipeTransitionController : NSObject <_UINavigationInteractiveTransitionBaseDelegate> {

	ViewGestureController* _gestureController;
	RetainPtr<_UINavigationInteractiveTransitionBase>* _backTransitionController;
	RetainPtr<_UINavigationInteractiveTransitionBase>* _forwardTransitionController;
	WeakObjCPtr<UIView> _gestureRecognizerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)directionForTransition:(id)arg1 ;
-(id)initWithViewGestureController:(ViewGestureController*)arg1 gestureRecognizerView:(id)arg2 ;
-(id)transitionForDirection:(int)arg1 ;
-(BOOL)isNavigationSwipeGestureRecognizer:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)invalidate;
-(id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3 ;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3 ;
-(BOOL)shouldBeginInteractiveTransition:(id)arg1 ;
-(BOOL)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
@end
