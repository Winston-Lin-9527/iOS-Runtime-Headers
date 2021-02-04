/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/NCToggleControlDelegate.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol NCNotificationListSectionHeaderViewDelegate;
@class NCToggleControl, NSString, NCNotificationListHeaderTitleView, _UILegibilitySettings, UIControl;

@interface NCNotificationListSectionHeaderView : UICollectionReusableView <NCToggleControlDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {

	NCToggleControl* _clearButton;
	BOOL _adjustsFontForContentSizeCategory;
	BOOL _shouldOverrideForReveal;
	NSString* _preferredContentSizeCategory;
	id<NCNotificationListSectionHeaderViewDelegate> _delegate;
	NSString* _sectionIdentifier;
	NSString* _title;
	NSString* _backgroundGroupName;
	double _overrideAlpha;
	NCNotificationListHeaderTitleView* _headerTitleView;
	_UILegibilitySettings* _legibilitySettings;
	CGPoint _overrideCenter;

}

@property (nonatomic,retain) NCNotificationListHeaderTitleView * headerTitleView;                          //@synthesize headerTitleView=_headerTitleView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sectionIdentifier;                                                   //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * backgroundGroupName;                                                 //@synthesize backgroundGroupName=_backgroundGroupName - In the implementation block
@property (nonatomic,readonly) UIControl * clearButton; 
@property (assign,nonatomic) BOOL shouldOverrideForReveal;                                                 //@synthesize shouldOverrideForReveal=_shouldOverrideForReveal - In the implementation block
@property (assign,nonatomic) double overrideAlpha;                                                         //@synthesize overrideAlpha=_overrideAlpha - In the implementation block
@property (assign,nonatomic) CGPoint overrideCenter;                                                       //@synthesize overrideCenter=_overrideCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                        //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
+(void)_contentSizeCategoryDidChange:(id)arg1 ;
+(CGSize)_clearButtonPreferredSize;
+(double)headerHeightWithWidth:(double)arg1 title:(id)arg2 ;
+(void)initialize;
-(NSString *)sectionIdentifier;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)_resetRevealOverrides;
-(void)_configureClearButtonIfNecessary;
-(void)_configureHeaderTitleViewIfNecessary;
-(void)_layoutClearButton;
-(void)_layoutHeaderTitleView;
-(void)_resetClearButtonStateAnimated:(BOOL)arg1 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)shouldOverrideForReveal;
-(void)_updateHeaderTitleViewWithLegibilitySettings:(id)arg1 ;
-(void)_handleClearButtonTouchUpInside:(id)arg1 ;
-(void)_handleClearButtonPrimaryActionTriggered:(id)arg1 ;
-(void)_handleClearAll:(id)arg1 ;
-(id)containerViewForToggleControlPreviewInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidBeginPreviewInteraction:(id)arg1 ;
-(void)toggleControlDidPresentPreviewInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidDismssPreviewInteractionPresentedContent:(id)arg1 ;
-(void)setBackgroundGroupName:(NSString *)arg1 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg1 ;
-(void)setOverrideAlpha:(double)arg1 ;
-(void)setOverrideCenter:(CGPoint)arg1 ;
-(NSString *)backgroundGroupName;
-(void)setShouldOverrideForReveal:(BOOL)arg1 ;
-(double)overrideAlpha;
-(CGPoint)overrideCenter;
-(NCNotificationListHeaderTitleView *)headerTitleView;
-(void)setHeaderTitleView:(NCNotificationListHeaderTitleView *)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(void)setDelegate:(id<NCNotificationListSectionHeaderViewDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<NCNotificationListSectionHeaderViewDelegate>)delegate;
-(void)prepareForReuse;
-(void)applyLayoutAttributes:(id)arg1 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(id)_legibilitySettings;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(UIControl *)clearButton;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
@end
