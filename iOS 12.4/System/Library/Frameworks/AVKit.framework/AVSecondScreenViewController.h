/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UIView, AVPlayerLayer, UILabel, AVSecondScreenPlayerLayerView;

@interface AVSecondScreenViewController : UIViewController {

	BOOL _playingOnSecondScreen;
	UIView* _contentView;
	AVPlayerLayer* _sourcePlayerLayer;
	UILabel* _debugLabel;
	AVSecondScreenPlayerLayerView* _playerLayerView;

}

@property (nonatomic,readonly) UILabel * debugLabel;                                                 //@synthesize debugLabel=_debugLabel - In the implementation block
@property (nonatomic,retain) AVSecondScreenPlayerLayerView * playerLayerView;                        //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,getter=isPlayingOnSecondScreen,nonatomic) BOOL playingOnSecondScreen;              //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                   //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerLayer * sourcePlayerLayer;                               //@synthesize sourcePlayerLayer=_sourcePlayerLayer - In the implementation block
@property (nonatomic,readonly) CGSize videoDisplaySize; 
-(AVSecondScreenPlayerLayerView *)playerLayerView;
-(void)setDebugText:(id)arg1 ;
-(id)debugText;
-(void)setPlayerLayerView:(AVSecondScreenPlayerLayerView *)arg1 ;
-(void)setPlayingOnSecondScreen:(BOOL)arg1 ;
-(BOOL)isPlayingOnSecondScreen;
-(void)loadPlayerLayerViewIfNeeded;
-(void)setSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)_updateContentViewIfNeeded;
-(AVPlayerLayer *)sourcePlayerLayer;
-(void)_updateLayout;
-(UILabel *)debugLabel;
-(void)dealloc;
-(UIView *)contentView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(CGSize)videoDisplaySize;
@end
