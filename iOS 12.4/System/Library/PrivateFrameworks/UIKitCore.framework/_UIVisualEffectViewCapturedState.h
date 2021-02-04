/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIVisualEffect, NSArray;

@interface _UIVisualEffectViewCapturedState : NSObject {

	BOOL _restoreEffect;
	BOOL _restoreContentEffects;
	BOOL _restoreBackgroundEffects;
	UIVisualEffect* _effect;
	NSArray* _contentEffects;
	NSArray* _backgroundEffects;

}

@property (assign,nonatomic) BOOL restoreEffect;                         //@synthesize restoreEffect=_restoreEffect - In the implementation block
@property (assign,nonatomic) BOOL restoreContentEffects;                 //@synthesize restoreContentEffects=_restoreContentEffects - In the implementation block
@property (assign,nonatomic) BOOL restoreBackgroundEffects;              //@synthesize restoreBackgroundEffects=_restoreBackgroundEffects - In the implementation block
@property (nonatomic,retain) UIVisualEffect * effect;                    //@synthesize effect=_effect - In the implementation block
@property (nonatomic,retain) NSArray * contentEffects;                   //@synthesize contentEffects=_contentEffects - In the implementation block
@property (nonatomic,retain) NSArray * backgroundEffects;                //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)setContentEffects:(NSArray *)arg1 ;
-(void)setEffect:(UIVisualEffect *)arg1 ;
-(UIVisualEffect *)effect;
-(void)restoreStateForVisualEffectView:(id)arg1 ;
-(BOOL)restoreEffect;
-(void)setRestoreEffect:(BOOL)arg1 ;
-(BOOL)restoreContentEffects;
-(void)setRestoreContentEffects:(BOOL)arg1 ;
-(BOOL)restoreBackgroundEffects;
-(void)setRestoreBackgroundEffects:(BOOL)arg1 ;
-(NSArray *)contentEffects;
-(NSArray *)backgroundEffects;
@end
