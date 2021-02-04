/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIImageView;

@interface InfoPanelViewCell : UICollectionViewCell {

	UILabel* _label;
	UIImageView* _checkmarkIcon;

}

@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkIcon;              //@synthesize checkmarkIcon=_checkmarkIcon - In the implementation block
-(void)setCheckmarkIcon:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkIcon;
-(void)configureCell;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
@end
