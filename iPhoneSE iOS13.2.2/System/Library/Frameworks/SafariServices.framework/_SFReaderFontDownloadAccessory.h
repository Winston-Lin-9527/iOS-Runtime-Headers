/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIButton, UIProgressView;

@interface _SFReaderFontDownloadAccessory : UIView {

	BOOL _downloading;
	UIButton* _downloadButton;
	UIProgressView* _progressView;
	/*^block*/id _tappedDownloadBlock;

}

@property (nonatomic,readonly) UIButton * downloadButton;                        //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                    //@synthesize progressView=_progressView - In the implementation block
@property (assign,getter=isDownloading,nonatomic) BOOL downloading;              //@synthesize downloading=_downloading - In the implementation block
@property (nonatomic,copy) id tappedDownloadBlock;                               //@synthesize tappedDownloadBlock=_tappedDownloadBlock - In the implementation block
-(id)viewForLastBaselineLayout;
-(BOOL)isDownloading;
-(void)setDownloading:(BOOL)arg1 ;
-(UIProgressView *)progressView;
-(id)initWithTappedDownloadBlock:(/*^block*/id)arg1 ;
-(void)_tappedDownloadButton:(id)arg1 ;
-(UIButton *)downloadButton;
-(id)tappedDownloadBlock;
-(void)setTappedDownloadBlock:(id)arg1 ;
@end
