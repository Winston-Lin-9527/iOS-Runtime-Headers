/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIButton.h>

@class UIViewController, UIImage, VUIDownloadButtonViewModel, VUICircleProgressIndicator, UIAlertController;

@interface VUIDownloadButton : VUIButton {

	BOOL _showsTextInDownloadedState;
	BOOL _observingDownloadProgress;
	BOOL _wasDeleted;
	BOOL _wasCanceled;
	BOOL _isForLibrary;
	UIViewController* _presentingViewController;
	/*^block*/id _downloadStateChangeHandler;
	UIImage* _notDownloadedImage;
	UIImage* _connectingImage;
	UIImage* _downloadingImage;
	UIImage* _downloadedImage;
	VUIDownloadButtonViewModel* _viewModel;
	VUICircleProgressIndicator* _progressIndicator;
	UIAlertController* _deleteConfirmationAlertController;

}

@property (nonatomic,retain) UIImage * notDownloadedImage;                                       //@synthesize notDownloadedImage=_notDownloadedImage - In the implementation block
@property (nonatomic,retain) UIImage * connectingImage;                                          //@synthesize connectingImage=_connectingImage - In the implementation block
@property (nonatomic,retain) UIImage * downloadingImage;                                         //@synthesize downloadingImage=_downloadingImage - In the implementation block
@property (nonatomic,retain) UIImage * downloadedImage;                                          //@synthesize downloadedImage=_downloadedImage - In the implementation block
@property (nonatomic,retain) VUIDownloadButtonViewModel * viewModel;                             //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) VUICircleProgressIndicator * progressIndicator;                     //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (assign,nonatomic) BOOL observingDownloadProgress;                                     //@synthesize observingDownloadProgress=_observingDownloadProgress - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                                                    //@synthesize wasDeleted=_wasDeleted - In the implementation block
@property (assign,nonatomic) BOOL wasCanceled;                                                   //@synthesize wasCanceled=_wasCanceled - In the implementation block
@property (assign,nonatomic) BOOL isForLibrary;                                                  //@synthesize isForLibrary=_isForLibrary - In the implementation block
@property (nonatomic,retain) UIAlertController * deleteConfirmationAlertController;              //@synthesize deleteConfirmationAlertController=_deleteConfirmationAlertController - In the implementation block
@property (assign,nonatomic) BOOL showsTextInDownloadedState;                                    //@synthesize showsTextInDownloadedState=_showsTextInDownloadedState - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;                 //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id downloadStateChangeHandler;                                        //@synthesize downloadStateChangeHandler=_downloadStateChangeHandler - In the implementation block
+(id)defaultLayout;
-(VUIDownloadButtonViewModel *)viewModel;
-(void)setViewModel:(VUIDownloadButtonViewModel *)arg1 ;
-(void)_setImage:(id)arg1 ;
-(id)_buttonPropertiesForState:(unsigned long long)arg1 ;
-(VUICircleProgressIndicator *)progressIndicator;
-(void)setProgressIndicator:(VUICircleProgressIndicator *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIViewController *)presentingViewController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)updateWithElement:(id)arg1 ;
-(id)initWithAssetController:(id)arg1 layout:(id)arg2 ;
-(void)updateWithAssetController:(id)arg1 ;
-(void)setDownloadStateChangeHandler:(id)arg1 ;
-(void)setShowsTextInDownloadedState:(BOOL)arg1 ;
-(void)_handleAppDidEnterBackgroundNotification:(id)arg1 ;
-(CGSize)_imageSizeThatFits:(CGSize)arg1 ;
-(void)_downloadButtonTapped:(id)arg1 ;
-(void)setIsForLibrary:(BOOL)arg1 ;
-(void)_layoutProgressIndicator;
-(id)_notDownloadedImage;
-(void)_updateButtonToState:(unsigned long long)arg1 oldState:(unsigned long long)arg2 ;
-(void)_updateDownloadProgress:(double)arg1 animated:(BOOL)arg2 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(void)_stopObservingDownloadProgress:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)_updateButtonToState:(unsigned long long)arg1 ;
-(void)_updateButtonToDownloadedWithProperties:(id)arg1 ;
-(void)_startDownloadIfPossible;
-(void)setWasCanceled:(BOOL)arg1 ;
-(void)_askUserAndDeleteIfNeeded;
-(void)setWasDeleted:(BOOL)arg1 ;
-(void)setDeleteConfirmationAlertController:(UIAlertController *)arg1 ;
-(void)_dismissConfirmationAlertController;
-(UIAlertController *)deleteConfirmationAlertController;
-(BOOL)showsTextInDownloadedState;
-(id)_connectingImage;
-(id)_downloadingImage;
-(id)_downloadedImage;
-(id)downloadStateChangeHandler;
-(BOOL)wasDeleted;
-(BOOL)wasCanceled;
-(void)_updateButtonToNotDownloadedWithProperties:(id)arg1 ;
-(void)_updateButtonToConnectingWithProperties:(id)arg1 ;
-(void)_updateButtonToDownloadingWithProperties:(id)arg1 ;
-(void)_setTitleWithProperties:(id)arg1 ;
-(void)_insertProgressIndicatorWithFrame:(CGRect)arg1 ;
-(void)_configureProgressIndicatorWithProperties:(id)arg1 ;
-(void)_startObservingDownloadProgress:(id)arg1 ;
-(id)_imageForDownloadState:(unsigned long long)arg1 ;
-(BOOL)observingDownloadProgress;
-(void)setObservingDownloadProgress:(BOOL)arg1 ;
-(id)initWithPlayable:(id)arg1 layout:(id)arg2 ;
-(id)_pausedImage;
-(UIImage *)notDownloadedImage;
-(void)setNotDownloadedImage:(UIImage *)arg1 ;
-(UIImage *)connectingImage;
-(void)setConnectingImage:(UIImage *)arg1 ;
-(UIImage *)downloadingImage;
-(void)setDownloadingImage:(UIImage *)arg1 ;
-(UIImage *)downloadedImage;
-(void)setDownloadedImage:(UIImage *)arg1 ;
-(BOOL)isForLibrary;
@end
