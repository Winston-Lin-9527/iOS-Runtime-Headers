/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView;

@interface HKFavoritesTableViewCell : UITableViewCell {

	UIImageView* _star;
	UIImageView* _filledStar;

}

@property (assign,getter=isFavorited,nonatomic) BOOL favorited; 
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFavorited:(BOOL)arg1 ;
-(BOOL)isFavorited;
@end
