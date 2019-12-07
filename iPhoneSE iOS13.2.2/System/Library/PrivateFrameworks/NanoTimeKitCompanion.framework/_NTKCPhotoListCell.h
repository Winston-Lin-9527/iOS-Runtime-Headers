/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIImageView, UIImage;

@interface _NTKCPhotoListCell : UICollectionViewCell {

	UIView* _selectionOverlayView;
	UIImageView* _selectionBadge;
	UIView* _highlightOverlayView;
	UIView* _content;
	UIImageView* _contentImageView;
	CGRect _crop;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,nonatomic) CGRect crop;                  //@synthesize crop=_crop - In the implementation block
+(id)reuseIdentifier;
-(CGRect)crop;
-(void)setCrop:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
@end
