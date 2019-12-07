/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTMaterialView, UIScrollView, UIView, CCUIModuleCollectionView, CCUIStatusLabelViewController, CCUIHeaderPocketView, UIStatusBar;


@protocol CCUIOverlayViewProvider <NSObject>
@property (nonatomic,readonly) MTMaterialView * overlayBackgroundView; 
@property (nonatomic,readonly) UIScrollView * overlayScrollView; 
@property (nonatomic,readonly) UIView * overlayContainerView; 
@property (nonatomic,readonly) CCUIModuleCollectionView * overlayModuleCollectionView; 
@property (nonatomic,readonly) CCUIStatusLabelViewController * overlayStatusLabelViewController; 
@property (nonatomic,readonly) CCUIHeaderPocketView * overlayHeaderView; 
@property (nonatomic,readonly) UIStatusBar * overlayLeadingStatusBar; 
@required
-(UIView *)overlayContainerView;
-(UIScrollView *)overlayScrollView;
-(CCUIHeaderPocketView *)overlayHeaderView;
-(MTMaterialView *)overlayBackgroundView;
-(CCUIModuleCollectionView *)overlayModuleCollectionView;
-(UIStatusBar *)overlayLeadingStatusBar;
-(CCUIStatusLabelViewController *)overlayStatusLabelViewController;
-(void)setOverlayStatusBarHidden:(BOOL)arg1;

@end
