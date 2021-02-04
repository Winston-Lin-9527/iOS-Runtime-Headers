/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class PKPaymentPass, NSString, UIImageView, UILabel, UIView, NSMutableArray;

@interface PKAMPEnrollmentCardView : UIView {

	PKPaymentPass* _paymentPass;
	NSString* _buttonText;
	UIImageView* _passView;
	UILabel* _descriptionView;
	UILabel* _subtitleView;
	UILabel* _buttonSpacerView;
	UIView* _topLine;
	UIView* _bottomLine;
	NSMutableArray* _constraints;

}
-(void)_setupConstraints;
-(void)_createSubviews;
-(id)initWithPaymentPass:(id)arg1 buttonText:(id)arg2 ;
-(id)_buttonFont;
@end
