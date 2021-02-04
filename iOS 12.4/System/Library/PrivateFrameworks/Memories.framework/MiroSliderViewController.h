/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol MiroSliderViewControllerDataSource;
@class NSObject, UICollectionView, NSString;

@interface MiroSliderViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _needsMiddlePositionUpdate;
	BOOL _ignoreScrolling;
	NSObject*<MiroSliderViewControllerDataSource> _dataSource;
	UICollectionView* _collectionView;
	long long _selectedItem;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                            //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long selectedItem;                                                       //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic) BOOL needsMiddlePositionUpdate;                                               //@synthesize needsMiddlePositionUpdate=_needsMiddlePositionUpdate - In the implementation block
@property (assign,nonatomic) BOOL ignoreScrolling;                                                         //@synthesize ignoreScrolling=_ignoreScrolling - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<MiroSliderViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateFonts;
-(id)_generateDurationSliderViewWithFrame:(CGRect)arg1 ;
-(void)setIgnoreScrolling:(BOOL)arg1 ;
-(BOOL)needsMiddlePositionUpdate;
-(void)setNeedsMiddlePositionUpdate:(BOOL)arg1 ;
-(void)invalidateSelectedItemPostion;
-(void)_setFontStyleForCell:(id)arg1 highlighted:(BOOL)arg2 ;
-(id)indexPathToMiddleItemInCollectionView:(id)arg1 ;
-(BOOL)ignoreScrolling;
-(float)moodPercentOfCenter;
-(CGPoint)pointForMiddleOfItemInCollectionView:(id)arg1 withOffset:(CGPoint)arg2 ;
-(void)performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 ;
-(id)init;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setSelectedItem:(long long)arg1 ;
-(long long)selectedItem;
-(NSObject*<MiroSliderViewControllerDataSource>)dataSource;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(void)setDataSource:(NSObject*<MiroSliderViewControllerDataSource>)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)didReceiveMemoryWarning;
@end
