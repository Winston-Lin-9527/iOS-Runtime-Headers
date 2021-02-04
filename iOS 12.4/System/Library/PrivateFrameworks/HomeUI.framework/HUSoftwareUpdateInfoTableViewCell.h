/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HUSoftwareUpdateInternalResizingDelegate.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUResizableCellDelegate;
@class HUSoftwareUpdateInfoView, NSString, HFItem;

@interface HUSoftwareUpdateInfoTableViewCell : UITableViewCell <HUSoftwareUpdateInternalResizingDelegate, HUCellProtocol> {

	id<HUResizableCellDelegate> _resizingDelegate;
	HUSoftwareUpdateInfoView* _infoView;

}

@property (nonatomic,retain) HUSoftwareUpdateInfoView * infoView;                              //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate;              //@synthesize resizingDelegate=_resizingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(id<HUResizableCellDelegate>)resizingDelegate;
-(void)setResizingDelegate:(id<HUResizableCellDelegate>)arg1 ;
-(void)didUpdateRequiredHeightForSoftwareUpdateInfoView:(id)arg1 ;
-(HUSoftwareUpdateInfoView *)infoView;
-(void)setInfoView:(HUSoftwareUpdateInfoView *)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(HFItem *)item;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end
