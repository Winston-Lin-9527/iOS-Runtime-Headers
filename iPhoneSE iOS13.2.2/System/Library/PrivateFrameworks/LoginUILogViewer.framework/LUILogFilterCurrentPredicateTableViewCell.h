/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;
@class UILabel, UIButton;

@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell {

	id<LUILogFilterCurrentPredicateTableViewCellDelegate> _delegate;
	UILabel* _titleLabel;
	UIButton* _deleteButton;

}

@property (assign,nonatomic,__weak) id<LUILogFilterCurrentPredicateTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * deleteButton;                                                          //@synthesize deleteButton=_deleteButton - In the implementation block
-(id<LUILogFilterCurrentPredicateTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<LUILogFilterCurrentPredicateTableViewCellDelegate>)arg1 ;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(UIButton *)deleteButton;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupUI;
-(id)_createTitleLabel;
-(id)_createDeleteButton;
-(void)_deleteButtonTapped:(id)arg1 ;
@end
