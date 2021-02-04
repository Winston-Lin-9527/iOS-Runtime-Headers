/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController {

	SUGradient* _backgroundGradient;
	SUGradient* _defaultBackgroundGradient;
	BOOL _hideLoadingView;
	SULoadingView* _loadingView;
	SUGradientView* _gradientView;

}

@property (nonatomic,copy) SUGradient * backgroundGradient;                     //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy) SUGradient * defaultBackgroundGradient;              //@synthesize defaultBackgroundGradient=_defaultBackgroundGradient - In the implementation block
@property (nonatomic,readonly) SULoadingView * loadingView; 
@property (assign,nonatomic) BOOL shouldShowLoadingView; 
-(SULoadingView *)loadingView;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(void)parentViewControllerHierarchyDidChange;
-(SUGradient *)defaultBackgroundGradient;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(void)_reloadBackgroundGradient;
-(void)_reloadLoadingView;
-(id)_newURLBagBackgroundGradient;
-(id)_copyActiveGradient;
-(void)setShouldShowLoadingView:(BOOL)arg1 ;
-(BOOL)shouldShowLoadingView;
-(void)setScriptProperties:(id)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
-(void)setDefaultBackgroundGradient:(SUGradient *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(SUGradient *)backgroundGradient;
-(void)setBackgroundGradient:(SUGradient *)arg1 ;
@end
