/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface SBExternalSoundsDefaults : BSAbstractDefaultDomain

@property (assign,nonatomic) BOOL keyboardPlaysSounds; 
@property (assign,nonatomic) BOOL systemHapticsEnabled; 
@property (assign,nonatomic) BOOL buttonsCanChangeRingerVolume; 
-(void)setButtonsCanChangeRingerVolume:(BOOL)arg1 ;
-(BOOL)buttonsCanChangeRingerVolume;
-(void)setSystemHapticsEnabled:(BOOL)arg1 ;
-(BOOL)systemHapticsEnabled;
-(void)setKeyboardPlaysSounds:(BOOL)arg1 ;
-(BOOL)keyboardPlaysSounds;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end
