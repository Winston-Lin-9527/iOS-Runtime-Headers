/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/NTKControl.h>

@class UIImageView, NSString;

@interface NTKFaceViewTapControl : UIControl <NTKControl> {

	UIImageView* _highlightImageView;

}

@property (nonatomic,retain) UIImageView * highlightImageView;              //@synthesize highlightImageView=_highlightImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImageView *)highlightImageView;
-(BOOL)shouldCancelTouchesInScrollview;
-(void)setHighlightImageView:(UIImageView *)arg1 ;
@end
