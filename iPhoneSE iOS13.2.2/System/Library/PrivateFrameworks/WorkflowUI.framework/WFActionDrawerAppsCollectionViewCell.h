/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage, WFCircularImageView, UILabel;

@interface WFActionDrawerAppsCollectionViewCell : UICollectionViewCell {

	NSString* _title;
	UIImage* _appIconImage;
	WFCircularImageView* _imageView;
	UILabel* _titleLabel;

}

@property (assign,nonatomic,__weak) WFCircularImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * appIconImage;                            //@synthesize appIconImage=_appIconImage - In the implementation block
+(CGSize)preferredSize;
-(NSString *)title;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(WFCircularImageView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(WFCircularImageView *)arg1 ;
-(UIImage *)appIconImage;
-(void)configureWithTitle:(id)arg1 appIconImage:(id)arg2 ;
@end
