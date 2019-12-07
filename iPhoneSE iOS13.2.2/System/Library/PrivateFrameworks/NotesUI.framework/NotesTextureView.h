/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage;

@interface NotesTextureView : UIView {

	UIImage* _image;
	CGSize _phase;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) CGSize phase;                           //@synthesize phase=_phase - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)phase;
-(void)setPhase:(CGSize)arg1 ;
@end
