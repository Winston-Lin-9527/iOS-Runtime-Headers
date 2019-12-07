/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, CAShapeLayer;

@interface MPAVRoutingTableHeaderView : UIView {

	UIEdgeInsets _edgeInsets;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	CAShapeLayer* _borderLayer;

}
-(id)initWithCoder:(id)arg1 ;
-(void)_init;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)_mirroringTitleTextAttributes;
-(id)_mirroringCompactDescription;
-(id)_mirroringCompactDescriptionTextAttributes;
@end
