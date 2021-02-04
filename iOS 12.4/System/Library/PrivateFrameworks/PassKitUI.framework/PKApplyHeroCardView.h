/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView;

@interface PKApplyHeroCardView : UIView {

	UIImageView* _cardImageView;
	UIView* _cardImageShadowView;
	BOOL _usesCompactLayout;
	unsigned long long _featureIdentifier;
	double _cardHeight;
	double _cardTopPadding;
	double _cardBottomPadding;
	double _cardBackingHeight;

}
-(id)initWithFeatureIdentifier:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
