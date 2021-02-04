/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class HKElectrocardiogramCardView, NSLayoutConstraint, HKElectrocardiogram;

@interface HKElectrocardiogramTableViewCell : UITableViewCell {

	BOOL _bottomPaddingDisabled;
	HKElectrocardiogramCardView* _cardView;
	NSLayoutConstraint* _bottomPaddingConstraint;

}

@property (nonatomic,retain) HKElectrocardiogramCardView * cardView;                    //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomPaddingConstraint;              //@synthesize bottomPaddingConstraint=_bottomPaddingConstraint - In the implementation block
@property (nonatomic,retain) HKElectrocardiogram * sample; 
@property (assign,nonatomic) BOOL bottomPaddingDisabled;                                //@synthesize bottomPaddingDisabled=_bottomPaddingDisabled - In the implementation block
+(double)estimatedHeight;
+(id)defaultReuseIdentifier;
-(void)_setupConstraints;
-(HKElectrocardiogramCardView *)cardView;
-(void)setSample:(HKElectrocardiogram *)arg1 ;
-(HKElectrocardiogram *)sample;
-(id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 ;
-(void)_setupUIWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(BOOL)arg3 ;
-(NSLayoutConstraint *)bottomPaddingConstraint;
-(void)setBottomPaddingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomPaddingDisabled:(BOOL)arg1 ;
-(BOOL)bottomPaddingDisabled;
-(void)setCardView:(HKElectrocardiogramCardView *)arg1 ;
@end
