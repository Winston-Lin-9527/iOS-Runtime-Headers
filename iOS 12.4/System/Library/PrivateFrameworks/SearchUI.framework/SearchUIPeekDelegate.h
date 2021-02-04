/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class SearchUITableViewController, NSIndexPath, NSString;

@interface SearchUIPeekDelegate : NSObject <UIViewControllerPreviewingDelegate> {

	SearchUITableViewController* _viewController;
	NSIndexPath* _peekedIndexPath;

}

@property (__weak) SearchUITableViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (retain) NSIndexPath * peekedIndexPath;                             //@synthesize peekedIndexPath=_peekedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPeekedIndexPath:(NSIndexPath *)arg1 ;
-(id)customViewForInteractiveHighlightForIndexPath:(id)arg1 ;
-(BOOL)needToHandleTransparencyForViewController:(id)arg1 ;
-(void)unhidePeekedCell;
-(NSIndexPath *)peekedIndexPath;
-(SearchUITableViewController *)viewController;
-(void)setViewController:(SearchUITableViewController *)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)_previewingContext:(id)arg1 willPresentViewController:(id)arg2 ;
-(void)_previewingContext:(id)arg1 willDismissViewController:(id)arg2 ;
@end
