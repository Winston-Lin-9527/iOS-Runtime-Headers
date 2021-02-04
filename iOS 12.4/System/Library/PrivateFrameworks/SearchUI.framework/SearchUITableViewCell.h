/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <SearchUI/SearchUIKeyboardableNavigationProtocol.h>

@protocol SearchUIRowModel, SearchUIFeedbackDelegateInternal, SearchUIResultShortLook;
@class UIView, SearchUIDragSource, SearchUIDropTarget, UIViewController, NSArray, NSString;

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol> {

	BOOL _isExpanded;
	id<SearchUIRowModel> _rowModel;
	unsigned long long _style;
	id<SearchUIFeedbackDelegateInternal> _delegate;
	UIView* _sizingContainer;
	SearchUIDragSource* _dragSource;
	SearchUIDropTarget* _dropTarget;
	UIViewController*<SearchUIResultShortLook> _shortLookViewController;

}

@property (retain) id<SearchUIRowModel> rowModel;                                                   //@synthesize rowModel=_rowModel - In the implementation block
@property (assign) unsigned long long style;                                                        //@synthesize style=_style - In the implementation block
@property (assign) BOOL isExpanded;                                                                 //@synthesize isExpanded=_isExpanded - In the implementation block
@property (__weak) id<SearchUIFeedbackDelegateInternal> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (retain) UIView * sizingContainer;                                                        //@synthesize sizingContainer=_sizingContainer - In the implementation block
@property (retain) SearchUIDragSource * dragSource;                                                 //@synthesize dragSource=_dragSource - In the implementation block
@property (retain) SearchUIDropTarget * dropTarget;                                                 //@synthesize dropTarget=_dropTarget - In the implementation block
@property (__weak) UIViewController*<SearchUIResultShortLook> shortLookViewController;              //@synthesize shortLookViewController=_shortLookViewController - In the implementation block
@property (readonly) NSArray * visibleResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)convertResultIfNecessary:(id)arg1 ;
+(id)cellViewForRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
+(id)reuseIdentifierForResult:(id)arg1 ;
+(BOOL)canCellExpandWithResults:(id)arg1 ;
+(double)distanceToTopOfAppIconsForMultiResultCell;
-(void)updateWithResult:(id)arg1 ;
-(BOOL)isExpandable;
-(id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setSizingContainer:(UIView *)arg1 ;
-(UIView *)sizingContainer;
-(SearchUIDragSource *)dragSource;
-(void)setRowModel:(id<SearchUIRowModel>)arg1 ;
-(id<SearchUIRowModel>)rowModel;
-(void)setDragSource:(SearchUIDragSource *)arg1 ;
-(BOOL)shouldHideBottomSeparator;
-(BOOL)canSetupKeyboardHandler;
-(void)setupKeyboardHandler;
-(BOOL)navigateKeyboardRight;
-(void)returnKeyPressed;
-(BOOL)navigateKeyboardLeft;
-(void)removeKeyboardHandler;
-(NSArray *)visibleResults;
-(void)updateWithResults:(id)arg1 ;
-(void)updateExpanded:(BOOL)arg1 ;
-(BOOL)supportsRecycling;
-(void)roundNecessaryCornersForView:(id)arg1 ;
-(SearchUIDropTarget *)dropTarget;
-(void)setDropTarget:(SearchUIDropTarget *)arg1 ;
-(UIViewController*<SearchUIResultShortLook>)shortLookViewController;
-(void)setShortLookViewController:(UIViewController*<SearchUIResultShortLook>)arg1 ;
-(void)setDelegate:(id<SearchUIFeedbackDelegateInternal>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id<SearchUIFeedbackDelegateInternal>)delegate;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(BOOL)isExpanded;
-(void)setIsExpanded:(BOOL)arg1 ;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
@end
