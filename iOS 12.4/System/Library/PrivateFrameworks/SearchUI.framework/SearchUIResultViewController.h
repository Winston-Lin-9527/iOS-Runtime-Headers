/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SearchUI/SearchUIKeyboardableTableViewScrollDelegate.h>
#import <SearchUI/SearchUITableViewTesting.h>

@protocol SearchUIResultViewDelegate;
@class SearchUIResultTableViewController, SearchUIReplicatorView, NSString, UIView, SearchUISearchField;

@interface SearchUIResultViewController : UIViewController <UIGestureRecognizerDelegate, SearchUIKeyboardableTableViewScrollDelegate, SearchUITableViewTesting> {

	BOOL _shouldMonitorScrollingPastBottomOfContent;
	/*^block*/id tableViewWillUpdateHandler;
	/*^block*/id tableViewDidUpdateHandler;
	/*^block*/id cellWillDisplayHandler;
	SearchUIResultTableViewController* _resultTableViewController;
	SearchUIReplicatorView* _replicatorView;
	NSString* _previousSearchString;
	id<SearchUIResultViewDelegate> _delegate;

}

@property (retain) SearchUIResultTableViewController * resultTableViewController;              //@synthesize resultTableViewController=_resultTableViewController - In the implementation block
@property (retain) SearchUIReplicatorView * replicatorView;                                    //@synthesize replicatorView=_replicatorView - In the implementation block
@property (retain) NSString * previousSearchString;                                            //@synthesize previousSearchString=_previousSearchString - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIResultViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldHideResultsUnderKeyboard; 
@property (assign,nonatomic) BOOL shouldMonitorScrollingPastBottomOfContent;                   //@synthesize shouldMonitorScrollingPastBottomOfContent=_shouldMonitorScrollingPastBottomOfContent - In the implementation block
@property (nonatomic,readonly) double distanceToTopOfAppIcons; 
@property (nonatomic,retain) UIView * footerView; 
@property (assign,nonatomic) unsigned long long style; 
@property (assign,nonatomic) BOOL shouldUseInsetRoundedSections; 
@property (nonatomic,retain) SearchUISearchField * searchField; 
@property (assign,nonatomic,__weak) id<SFFeedbackListener> feedbackListener; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id cellWillDisplayHandler; 
@property (nonatomic,copy) id tableViewWillUpdateHandler; 
@property (nonatomic,copy) id tableViewDidUpdateHandler; 
-(id<SFFeedbackListener>)feedbackListener;
-(void)setFeedbackListener:(id<SFFeedbackListener>)arg1 ;
-(NSString *)previousSearchString;
-(void)setPreviousSearchString:(NSString *)arg1 ;
-(void)didTap;
-(BOOL)shouldUseInsetRoundedSections;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(id)tableViewWillUpdateHandler;
-(id)tableViewDidUpdateHandler;
-(id)cellWillDisplayHandler;
-(void)performScrollTestWithHandlerForFirstScrollCompletion:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performScrollTestWithCompletion:(/*^block*/id)arg1 ;
-(id)currentTableModel;
-(void)tapAtIndexPath:(id)arg1 ;
-(void)setCellWillDisplayHandler:(id)arg1 ;
-(void)setTableViewWillUpdateHandler:(id)arg1 ;
-(void)setTableViewDidUpdateHandler:(id)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 ;
-(SearchUIResultTableViewController *)resultTableViewController;
-(void)setReplicatorView:(SearchUIReplicatorView *)arg1 ;
-(SearchUIReplicatorView *)replicatorView;
-(void)setResultTableViewController:(SearchUIResultTableViewController *)arg1 ;
-(void)didScrollPastBottomOfContent;
-(void)updateWithResultSections:(id)arg1 resetScrollPoint:(BOOL)arg2 ;
-(BOOL)shouldMonitorScrollingPastBottomOfContent;
-(void)didBeginScrolling;
-(void)setShouldMonitorScrollingPastBottomOfContent:(BOOL)arg1 ;
-(void)setSearchField:(SearchUISearchField *)arg1 ;
-(void)setShouldHideResultsUnderKeyboard:(BOOL)arg1 ;
-(BOOL)shouldHideResultsUnderKeyboard;
-(void)updateWithResultSections:(id)arg1 ;
-(double)distanceToTopOfAppIcons;
-(id)init;
-(void)setDelegate:(id<SearchUIResultViewDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id<SearchUIResultViewDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(SearchUISearchField *)searchField;
-(id)contentScrollView;
-(unsigned long long)edgesForExtendedLayout;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end
