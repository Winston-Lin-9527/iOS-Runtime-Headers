/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol _UIDocumentPickerViewServiceViewController;
@class UISegmentedControl, UIButton, NSArray;

@interface _UIDocumentPickerSortOrderView : UIControl {

	BOOL _listModeToggleHidden;
	id<_UIDocumentPickerViewServiceViewController> _serviceViewController;
	long long _listMode;
	UISegmentedControl* _sortOrder;
	UIButton* _listModeToggle;
	NSArray* _leftAlignedConstraints;
	NSArray* _centeredConstraints;

}

@property (nonatomic,retain) UISegmentedControl * sortOrder;                                                    //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,retain) UIButton * listModeToggle;                                                         //@synthesize listModeToggle=_listModeToggle - In the implementation block
@property (nonatomic,copy) NSArray * leftAlignedConstraints;                                                    //@synthesize leftAlignedConstraints=_leftAlignedConstraints - In the implementation block
@property (nonatomic,copy) NSArray * centeredConstraints;                                                       //@synthesize centeredConstraints=_centeredConstraints - In the implementation block
@property (assign,nonatomic) id<_UIDocumentPickerViewServiceViewController> serviceViewController;              //@synthesize serviceViewController=_serviceViewController - In the implementation block
@property (assign,nonatomic) int value; 
@property (assign,nonatomic) long long listMode;                                                                //@synthesize listMode=_listMode - In the implementation block
@property (assign,nonatomic) BOOL listModeToggleHidden;                                                         //@synthesize listModeToggleHidden=_listModeToggleHidden - In the implementation block
-(UISegmentedControl *)sortOrder;
-(void)setSortOrder:(UISegmentedControl *)arg1 ;
-(void)valueChanged:(id)arg1 ;
-(id<_UIDocumentPickerViewServiceViewController>)serviceViewController;
-(void)setListModeToggle:(UIButton *)arg1 ;
-(UIButton *)listModeToggle;
-(void)_toggleListMode:(id)arg1 ;
-(void)updateForListMode;
-(NSArray *)centeredConstraints;
-(NSArray *)leftAlignedConstraints;
-(void)setLeftAlignedConstraints:(NSArray *)arg1 ;
-(void)setCenteredConstraints:(NSArray *)arg1 ;
-(void)setListMode:(long long)arg1 ;
-(void)setListModeToggleHidden:(BOOL)arg1 ;
-(void)setServiceViewController:(id<_UIDocumentPickerViewServiceViewController>)arg1 ;
-(long long)listMode;
-(BOOL)listModeToggleHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(int)value;
-(void)setValue:(int)arg1 ;
@end
