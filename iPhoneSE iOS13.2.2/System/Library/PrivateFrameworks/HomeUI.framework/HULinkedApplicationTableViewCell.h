/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HULinkedApplicationView, NSString, HFItem;

@interface HULinkedApplicationTableViewCell : UITableViewCell <HUCellProtocol> {

	HULinkedApplicationView* _linkedApplicationView;

}

@property (nonatomic,retain) HULinkedApplicationView * linkedApplicationView;                  //@synthesize linkedApplicationView=_linkedApplicationView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HULinkedApplicationView *)linkedApplicationView;
-(void)setLinkedApplicationView:(HULinkedApplicationView *)arg1 ;
@end
