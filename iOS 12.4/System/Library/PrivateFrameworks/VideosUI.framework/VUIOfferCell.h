/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@class IKViewElement, VUIOfferView, NSString;

@interface VUIOfferCell : VUIFocusableCollectionViewCell <VUIRentalExpirationLabelDelegate> {

	IKViewElement* _viewElement;
	VUIOfferView* _offerView;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIOfferView * offerView;                 //@synthesize offerView=_offerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIOfferView *)offerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)setOfferView:(VUIOfferView *)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
@end
