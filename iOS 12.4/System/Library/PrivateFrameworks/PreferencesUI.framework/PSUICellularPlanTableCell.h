/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class PSUIBadgeView, UILabel;

@interface PSUICellularPlanTableCell : PSTableCell {

	PSUIBadgeView* _badgeView;
	UILabel* _nameLabel;
	UILabel* _numberLabel;
	UILabel* _statusLabel;
	PSUIBadgeView* _centeredBadgeView;
	UILabel* _centeredNameLabel;

}

@property (nonatomic,retain) PSUIBadgeView * badgeView;                      //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * numberLabel;                          //@synthesize numberLabel=_numberLabel - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                          //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) PSUIBadgeView * centeredBadgeView;              //@synthesize centeredBadgeView=_centeredBadgeView - In the implementation block
@property (nonatomic,retain) UILabel * centeredNameLabel;                    //@synthesize centeredNameLabel=_centeredNameLabel - In the implementation block
+(long long)cellStyle;
-(BOOL)canBeChecked;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(UILabel *)statusLabel;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
-(UILabel *)numberLabel;
-(void)setNumberLabel:(UILabel *)arg1 ;
-(UILabel *)centeredNameLabel;
-(void)setCenteredNameLabel:(UILabel *)arg1 ;
-(PSUIBadgeView *)centeredBadgeView;
-(void)setCenteredBadgeView:(PSUIBadgeView *)arg1 ;
-(void)_setBadge:(id)arg1 andLabel:(id)arg2 andPhoneNumber:(id)arg3 ;
-(void)_setCenteredBadge:(id)arg1 andLabel:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)textLabel;
-(id)detailTextLabel;
-(PSUIBadgeView *)badgeView;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setBadgeView:(PSUIBadgeView *)arg1 ;
@end
