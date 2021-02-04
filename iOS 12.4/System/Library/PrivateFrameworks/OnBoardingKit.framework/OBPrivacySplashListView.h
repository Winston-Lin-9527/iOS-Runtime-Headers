/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIStackView.h>

@class UITextView, NSMutableArray;

@interface OBPrivacySplashListView : UIStackView {

	BOOL _darkMode;
	BOOL _displayingPrivacyPane;
	UITextView* _footerTextView;
	NSMutableArray* _textViews;
	NSMutableArray* _stackedIconTextLists;

}

@property (assign) BOOL displayingPrivacyPane;                                   //@synthesize displayingPrivacyPane=_displayingPrivacyPane - In the implementation block
@property (nonatomic,retain) NSMutableArray * textViews;                         //@synthesize textViews=_textViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * stackedIconTextLists;              //@synthesize stackedIconTextLists=_stackedIconTextLists - In the implementation block
@property (assign,getter=isDarkMode,nonatomic) BOOL darkMode;                    //@synthesize darkMode=_darkMode - In the implementation block
@property (nonatomic,readonly) UITextView * footerTextView;                      //@synthesize footerTextView=_footerTextView - In the implementation block
-(BOOL)isDarkMode;
-(void)updateFonts;
-(void)setDarkMode:(BOOL)arg1 ;
-(void)setTextViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)textViews;
-(UITextView *)footerTextView;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 displayingPrivacyPane:(BOOL)arg3 ;
-(void)setDisplayingPrivacyPane:(BOOL)arg1 ;
-(NSMutableArray *)stackedIconTextLists;
-(void)updateSpacing;
-(BOOL)displayingPrivacyPane;
-(id)initWithContentList:(id)arg1 dataDetectorTypes:(unsigned long long)arg2 ;
-(void)setStackedIconTextLists:(NSMutableArray *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end
