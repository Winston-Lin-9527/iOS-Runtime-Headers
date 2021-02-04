/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _MiroTrimmerContainerView : UIView {

	UIView* _movieScrubber;
	UIView* _debugOverlay;

}

@property (nonatomic,retain) UIView * movieScrubber;              //@synthesize movieScrubber=_movieScrubber - In the implementation block
@property (nonatomic,retain) UIView * debugOverlay;               //@synthesize debugOverlay=_debugOverlay - In the implementation block
-(UIView *)movieScrubber;
-(UIView *)debugOverlay;
-(void)setMovieScrubber:(UIView *)arg1 ;
-(void)setDebugOverlay:(UIView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
@end
