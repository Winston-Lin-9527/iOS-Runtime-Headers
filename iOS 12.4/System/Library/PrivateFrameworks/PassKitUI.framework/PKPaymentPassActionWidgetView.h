/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPaymentPassActionWidgetViewDelegate;
@class NSArray, NSString, PKPeerPaymentAccount, PKPaymentPass;

@interface PKPaymentPassActionWidgetView : UIView {

	NSArray* _displayableWidgets;
	NSString* _phoneNumber;
	NSString* _website;
	NSString* _email;
	unsigned long long _widgetViewStyle;
	BOOL _usesAccessibilityLayout;
	unsigned long long _numberOfWidgetsPerRow;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPaymentPass* _paymentPass;
	id<PKPaymentPassActionWidgetViewDelegate> _delegate;

}

@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;                              //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                            //@synthesize paymentPass=_paymentPass - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentPassActionWidgetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(PKPaymentPass *)paymentPass;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(id)initWithWidgetViewStyle:(unsigned long long)arg1 ;
-(void)cleanUpExistingWidgets;
-(id)_createButtonForTitle:(id)arg1 image:(id)arg2 ;
-(void)updateNumberOfWidgetsPerRow;
-(void)updateUseAccessibilityLayout;
-(void)_determineWidgetContentWithAvailableWidgets;
-(void)setDelegate:(id<PKPaymentPassActionWidgetViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PKPaymentPassActionWidgetViewDelegate>)delegate;
-(unsigned long long)numberOfRows;
-(void)traitCollectionDidChange:(id)arg1 ;
@end
