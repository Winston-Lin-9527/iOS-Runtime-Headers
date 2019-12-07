/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKTiledView.h>

@class PKAttachmentView, UIButton;

@interface PKTiledTextView : PKTiledView {

	PKAttachmentView* _standInEndAttachmentView;
	UIButton* _tapToRadarButton;

}

@property (nonatomic,retain) PKAttachmentView * standInEndAttachmentView;              //@synthesize standInEndAttachmentView=_standInEndAttachmentView - In the implementation block
@property (nonatomic,retain) UIButton * tapToRadarButton;                              //@synthesize tapToRadarButton=_tapToRadarButton - In the implementation block
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(void)_layoutSubviews;
-(void)canvasViewDidEndDrawing:(id)arg1 ;
-(void)setLinedPaper:(id)arg1 ;
-(id)standInAttachmentView;
-(void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2 ;
-(BOOL)canAddStroke;
-(BOOL)insertAttachmentIfInBlankSpace:(CGPoint)arg1 ;
-(BOOL)_shouldUpdateHeightOfAttachments;
-(id)initInScrollView:(id)arg1 ;
-(void)textDidBeginEditing:(id)arg1 ;
-(void)textDidEndEditing:(id)arg1 ;
-(void)_setupTapToRadarButton;
-(void)updateEndAttachment;
-(PKAttachmentView *)standInEndAttachmentView;
-(UIButton *)tapToRadarButton;
-(BOOL)hasEndAttachment;
-(CGRect)frameOfEndAttachment;
-(void)setTapToRadarButton:(UIButton *)arg1 ;
-(void)_tapToRadarButtonTapped:(id)arg1 ;
-(id)saveTempData:(id)arg1 name:(id)arg2 ;
-(void)appendPath:(id)arg1 attachmentString:(id)arg2 ;
-(void)setStandInEndAttachmentView:(PKAttachmentView *)arg1 ;
@end
