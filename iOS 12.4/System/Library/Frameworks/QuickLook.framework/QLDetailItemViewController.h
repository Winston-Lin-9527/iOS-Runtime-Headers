/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>

@class QLFileIconImageView, UIStackView, UIButton, UIView, NSString, QLDetailItemViewControllerState, NSArray;

@interface QLDetailItemViewController : QLItemViewController {

	QLFileIconImageView* _filePreviewImageView;
	UIStackView* _informationStackView;
	UIButton* _actionIconButton;
	UIButton* _actionButton;
	BOOL _isSettingStateAnimated;
	UIView* _currentActionButtonView;
	NSString* _previewTitle;
	QLDetailItemViewControllerState* _state;
	NSArray* _information;

}

@property (nonatomic,retain) QLDetailItemViewControllerState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSArray * information;                                //@synthesize information=_information - In the implementation block
@property (assign,nonatomic) CGRect fileThumbnailFrame; 
-(void)performAction;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)setFileThumbnailFrame:(CGRect)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(void)_setActionButtonView:(id)arg1 animated:(BOOL)arg2 actionButtonLabel:(id)arg3 informationVisible:(BOOL)arg4 ;
-(void)_updateInformation;
-(CGRect)fileThumbnailFrame;
-(BOOL)canSwipeToDismiss;
-(void)setInformation:(NSArray *)arg1 ;
-(void)setState:(id)arg1 animated:(BOOL)arg2 ;
-(NSArray *)information;
-(QLDetailItemViewControllerState *)state;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setState:(QLDetailItemViewControllerState *)arg1 ;
-(void)viewDidLoad;
@end
