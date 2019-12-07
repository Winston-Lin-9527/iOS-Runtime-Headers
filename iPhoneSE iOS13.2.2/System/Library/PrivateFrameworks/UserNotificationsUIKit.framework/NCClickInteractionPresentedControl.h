/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@class NSString, NCClickInteractionPresentedView, MTMaterialView, UITraitCollection;

@interface NCClickInteractionPresentedControl : UIControl <PLContentSizeCategoryAdjusting> {

	BOOL _adjustsFontForContentSizeCategory;
	NSString* _title;
	NCClickInteractionPresentedView* _presentedView;
	long long _materialRecipe;
	MTMaterialView* _backgroundMaterialView;
	UITraitCollection* _overrideTraitCollection;

}

@property (getter=_title,nonatomic,copy,readonly) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (getter=_presentedView,nonatomic,readonly) NCClickInteractionPresentedView * presentedView;               //@synthesize presentedView=_presentedView - In the implementation block
@property (getter=_materialRecipe,nonatomic,readonly) long long materialRecipe;                                     //@synthesize materialRecipe=_materialRecipe - In the implementation block
@property (getter=_backgroundMaterialView,nonatomic,readonly) MTMaterialView * backgroundMaterialView;              //@synthesize backgroundMaterialView=_backgroundMaterialView - In the implementation block
@property (nonatomic,retain) UITraitCollection * overrideTraitCollection;                                           //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                                //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory; 
-(id)_title;
-(NSString *)preferredContentSizeCategory;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(UITraitCollection *)overrideTraitCollection;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)_presentedView;
-(id)_backgroundMaterialView;
-(BOOL)adjustForContentSizeCategoryChange;
-(long long)_materialRecipe;
-(id)initWithTitle:(id)arg1 materialRecipe:(long long)arg2 ;
-(void)_configureContentViewIfNecessaryWithTitle:(id)arg1 ;
-(void)_configureMaterialViewsIfNecessary;
-(id)_newMaterialViewWithRecipe:(long long)arg1 configuration:(long long)arg2 ;
@end
