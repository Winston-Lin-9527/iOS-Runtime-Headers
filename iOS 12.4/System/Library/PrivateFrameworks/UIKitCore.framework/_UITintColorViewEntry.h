/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

@interface _UITintColorViewEntry : _UIVisualEffectViewEntry {

	UIColor* _tintColor;

}

@property (nonatomic,copy) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
@end
