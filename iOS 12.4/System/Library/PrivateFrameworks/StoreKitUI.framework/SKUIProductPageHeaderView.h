/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>
#import <libobjc.A.dylib/SKUIContentRatingArtworkLoaderObserver.h>

@class UILabel, UIButton, SKUIBadgeLabel, SKUIClientContext, SKUIItemContentRating, SKUIContentRatingArtworkResourceLoader, SKUIColorScheme, UIImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemState, SKUIProductPageHeaderLabel, NSString, UIControl, UIImage;

@interface SKUIProductPageHeaderView : UIView <SKUIItemOfferButtonDelegate, SKUIContentRatingArtworkLoaderObserver> {

	UILabel* _ageBandLabel;
	UIButton* _artistButton;
	SKUIBadgeLabel* _editorialBadgeLabel;
	SKUIClientContext* _clientContext;
	SKUIItemContentRating* _contentRating;
	SKUIContentRatingArtworkResourceLoader* _contentRatingArtworkLoader;
	SKUIColorScheme* _colorScheme;
	double _headerImageHeight;
	UIImageView* _headerImageView;
	UIImageView* _iconImageView;
	UILabel* _inAppPurchasesLabel;
	SKUIItemOffer* _itemOffer;
	SKUIItemOfferButton* _itemOfferButton;
	UILabel* _itemOfferExplanationLabel;
	UILabel* _itemOfferExplanationTitleLabel;
	SKUIItemState* _itemState;
	BOOL _needsLayoutAfterButtonAnimation;
	long long _numberOfUserRatings;
	BOOL _restricted;
	SKUIItemContentRating* _secondaryContentRating;
	UIButton* _shareButton;
	SKUIProductPageHeaderLabel* _titleLabel;
	double _userRating;
	UILabel* _userRatingLabel;
	UIImageView* _userRatingStarsView;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * inAppPurchasesString; 
@property (nonatomic,copy) NSString * editorialBadge; 
@property (nonatomic,readonly) UIControl * artistButton;                                                       //@synthesize artistButton=_artistButton - In the implementation block
@property (nonatomic,retain) SKUIContentRatingArtworkResourceLoader * contentRatingArtworkLoader;              //@synthesize contentRatingArtworkLoader=_contentRatingArtworkLoader - In the implementation block
@property (nonatomic,retain) SKUIItemContentRating * contentRating;                                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) SKUIItemContentRating * secondaryContentRating;                                   //@synthesize secondaryContentRating=_secondaryContentRating - In the implementation block
@property (nonatomic,copy) NSString * ageBandString; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                                                    //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) UIImage * headerImage; 
@property (assign,nonatomic) double headerImageHeight;                                                         //@synthesize headerImageHeight=_headerImageHeight - In the implementation block
@property (nonatomic,retain) UIImage * iconImage; 
@property (nonatomic,readonly) UIControl * shareButton;                                                        //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) SKUIItemOffer * itemOffer;                                                        //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * itemOfferButton;                                          //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,copy) NSString * itemOfferExplanationText; 
@property (nonatomic,copy) NSString * itemOfferExplanationTitle; 
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                                              //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,copy) SKUIItemState * itemState;                                                          //@synthesize itemState=_itemState - In the implementation block
@property (assign,nonatomic) long long numberOfUserRatings;                                                    //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) double userRating;                                                                //@synthesize userRating=_userRating - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHeaderImage:(UIImage *)arg1 ;
-(UIImage *)headerImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(UIControl *)shareButton;
-(id)initWithClientContext:(id)arg1 ;
-(NSString *)artistName;
-(long long)numberOfUserRatings;
-(NSString *)editorialBadge;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(SKUIItemOfferButton *)itemOfferButton;
-(void)setItemOffer:(SKUIItemOffer *)arg1 ;
-(SKUIItemOffer *)itemOffer;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)itemOfferButtonDidAnimateTransition:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3 ;
-(void)setRestricted:(BOOL)arg1 ;
-(void)_reloadItemOfferButton:(BOOL)arg1 ;
-(id)contentRatingName;
-(NSString *)ageBandString;
-(void)setContentRating:(SKUIItemContentRating *)arg1 ;
-(void)_getTopLayoutProperties:(/*function pointer*/void**)arg1 origins:(double*)arg2 height:(double*)arg3 forWidth:(double)arg4 ;
-(void)_getBottomLayoutProperties:(/*function pointer*/void**)arg1 origins:(double*)arg2 height:(double*)arg3 forWidth:(double)arg4 ;
-(void)_finishButtonAnimation;
-(NSString *)inAppPurchasesString;
-(NSString *)itemOfferExplanationText;
-(NSString *)itemOfferExplanationTitle;
-(void)setAgeBandString:(NSString *)arg1 ;
-(void)setContentRatingArtworkLoader:(SKUIContentRatingArtworkResourceLoader *)arg1 ;
-(void)setEditorialBadge:(NSString *)arg1 ;
-(void)setHeaderImageHeight:(double)arg1 ;
-(void)setInAppPurchasesString:(NSString *)arg1 ;
-(void)setItemOfferExplanationText:(NSString *)arg1 ;
-(void)setItemOfferExplanationTitle:(NSString *)arg1 ;
-(void)setSecondaryContentRating:(SKUIItemContentRating *)arg1 ;
-(UIControl *)artistButton;
-(SKUIItemContentRating *)contentRating;
-(SKUIContentRatingArtworkResourceLoader *)contentRatingArtworkLoader;
-(double)headerImageHeight;
-(SKUIItemContentRating *)secondaryContentRating;
-(void)setUserRating:(double)arg1 ;
-(double)userRating;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(BOOL)isRestricted;
-(void)setItemState:(SKUIItemState *)arg1 ;
-(SKUIItemState *)itemState;
-(UIImage *)iconImage;
@end
