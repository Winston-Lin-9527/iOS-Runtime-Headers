/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <SilexVideo/SVButton.h>

@interface SVVideoPlayButton : SVButton {

	BOOL _paused;

}

@property (assign,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
-(void)displayAsPaused;
-(void)displayAsPlaying;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPaused:(BOOL)arg1 ;
-(void)updateBackgroundColor;
-(BOOL)paused;
@end
