/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRKComposableView.h>

@class NSArray, NSMutableArray, NSString;

@interface CRKComposedView : UIView <CRKComposableView> {

	NSMutableArray* _mutableCardSectionSubviews;
	NSArray* _cardSectionSubviews;

}

@property (nonatomic,retain) NSArray * cardSectionSubviews;                         //@synthesize cardSectionSubviews=_cardSectionSubviews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIEdgeInsets cardSectionContentMargins; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)cardSectionSubviews;
-(void)setCardSectionSubviews:(NSArray *)arg1 ;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2 ;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1 ;
-(UIEdgeInsets)cardSectionContentMargins;
@end
