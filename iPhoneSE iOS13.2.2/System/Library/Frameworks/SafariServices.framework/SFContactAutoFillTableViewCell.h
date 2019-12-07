/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class SFContactAutoFillValue, UIButton, UILabel;

@interface SFContactAutoFillTableViewCell : UITableViewCell {

	SFContactAutoFillValue* _value;
	UIButton* _checkmarkButton;
	UILabel* _categoryLabel;
	UILabel* _optionLabel;
	BOOL _usesDetailAppearance;
	BOOL _checked;

}

@property (assign,nonatomic) BOOL usesDetailAppearance;              //@synthesize usesDetailAppearance=_usesDetailAppearance - In the implementation block
@property (assign,nonatomic) BOOL checked;                           //@synthesize checked=_checked - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)setUsesDetailAppearance:(BOOL)arg1 ;
-(void)setValue:(id)arg1 property:(id)arg2 ;
-(void)checkmarkButtonTapped:(id)arg1 ;
-(BOOL)usesDetailAppearance;
@end
