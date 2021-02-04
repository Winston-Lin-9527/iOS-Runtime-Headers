/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol SKUIRedeemResultsViewDelegate;
@class NSArray, NSString;

@interface SKUIRedeemResultsView : UITableView <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _sections;
	UIEdgeInsets _contentInsetAdjustments;
	id<SKUIRedeemResultsViewDelegate> _resultsDelegate;

}

@property (nonatomic,retain) NSArray * sections;                                                    //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIRedeemResultsViewDelegate> resultsDelegate;              //@synthesize resultsDelegate=_resultsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIRedeemResultsViewDelegate>)resultsDelegate;
-(void)setResultsDelegate:(id<SKUIRedeemResultsViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(NSArray *)sections;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
@end
