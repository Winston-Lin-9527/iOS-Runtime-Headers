/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView, UILabel;

@interface AAUISpinnerViewController : UIViewController {

	UIActivityIndicatorView* _spinnerView;
	UILabel* _label;

}

@property (nonatomic,retain) UILabel * label;                              //@synthesize label=_label - In the implementation block
@property (assign,getter=isSpinning,nonatomic) BOOL spinning; 
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(void)_commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSpinning:(BOOL)arg1 ;
-(BOOL)isSpinning;
@end
