/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFImageContentItemCellDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface WFImageContentItemCell : UITableViewCell {

	NSMapTable* _activityIndicators;
	NSMutableArray* _imageViews;
	NSMutableArray* _selectedImageViews;
	NSArray* _items;
	id<WFImageContentItemCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * items;                                                   //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<WFImageContentItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFImageContentItemCellDelegate>)delegate;
-(void)setDelegate:(id<WFImageContentItemCellDelegate>)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)imageViewTapped:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
@end
