/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _MFMessageContentResizeWrapperView : UIView {

	UIView* _snapshotView;
	double _snapshotViewYOrigin;

}

@property (nonatomic,retain) UIView * snapshotView;                   //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) double snapshotViewYOrigin;              //@synthesize snapshotViewYOrigin=_snapshotViewYOrigin - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 snapshotView:(id)arg2 ;
-(double)snapshotViewYOrigin;
-(void)setSnapshotViewYOrigin:(double)arg1 ;
@end
