/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIShadowView.h>

@interface _UIRoundedRectShadowView : _UIShadowView {

	UIEdgeInsets _shadowOutsets;
	double _maskCornerRadius;

}

@property (nonatomic,readonly) double maskCornerRadius;              //@synthesize maskCornerRadius=_maskCornerRadius - In the implementation block
+(UIEdgeInsets)_expansionInsetForShadowImage;
+(BOOL)_shouldCutoutShadow;
-(id)initWithCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGRect)frameWithContentWithFrame:(CGRect)arg1 ;
-(void)_loadImageIfNecessary;
-(void)_updateShadowOutsetsIfNecessary;
-(double)maskCornerRadius;
@end
