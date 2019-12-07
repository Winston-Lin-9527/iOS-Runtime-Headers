/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFAddToHomeIconPreviewCell : UITableViewCell {

	UIImageView* _iconImageView;
	UILabel* _iconLabel;

}

@property (assign,nonatomic,__weak) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * iconLabel;                      //@synthesize iconLabel=_iconLabel - In the implementation block
+(double)defaultRowHeight;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UILabel *)iconLabel;
-(void)setIconLabel:(UILabel *)arg1 ;
-(void)configureWithName:(id)arg1 icon:(id)arg2 ;
-(void)configureName:(id)arg1 ;
-(void)configureIcon:(id)arg1 ;
@end
