/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <UIKitCore/UITableViewHeaderFooterView.h>

@interface HRTimelineHeaderView : UITableViewHeaderFooterView {

	 delegate;
	 $__lazy_storage_$_titleLabel;
	 $__lazy_storage_$_subtitleLabel;
	 $__lazy_storage_$_backgroundEffectView;
	 $__lazy_storage_$_separatorView;

}

@property (assign,__weak,nonatomic) id<HRTimelineHeaderViewDelegate> delegate; 
@property (assign,nonatomic) BOOL floating; 
+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id<HRTimelineHeaderViewDelegate>)delegate;
-(void)setDelegate:(id<HRTimelineHeaderViewDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(BOOL)floating;
-(void)setFloating:(BOOL)arg1 ;
-(void)applyStyleFromNavigationBar:(id)arg1 ;
-(void)applyTitle:(id)arg1 subtitle:(id)arg2 ;
@end
