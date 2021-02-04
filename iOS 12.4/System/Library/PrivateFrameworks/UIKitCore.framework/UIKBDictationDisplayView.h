/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBKeyView.h>

@class UIDictationView;

@interface UIKBDictationDisplayView : UIKBKeyView {

	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
-(void)dealloc;
-(void)removeFromSuperview;
-(void)setRenderConfig:(id)arg1 ;
-(void)prepareForDisplay;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(UIDictationView *)dictationView;
-(void)setDictationView:(UIDictationView *)arg1 ;
-(void)updateDictationColor;
@end
