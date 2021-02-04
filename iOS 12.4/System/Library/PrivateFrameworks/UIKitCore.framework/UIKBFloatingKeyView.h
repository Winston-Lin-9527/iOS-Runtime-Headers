/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBContainerKeyView.h>

@class _UIFloatingContentView;

@interface UIKBFloatingKeyView : UIKBContainerKeyView {

	_UIFloatingContentView* _floatingContentView;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView; 
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(_UIFloatingContentView *)floatingContentView;
@end
