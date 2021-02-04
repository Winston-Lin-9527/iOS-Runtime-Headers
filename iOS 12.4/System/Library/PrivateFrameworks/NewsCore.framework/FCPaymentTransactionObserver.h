/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKPaymentTransactionObserver.h>

@protocol FCPaymentTransactionObserverDelegate;
@class NSString;

@interface FCPaymentTransactionObserver : NSObject <SKPaymentTransactionObserver> {

	id<FCPaymentTransactionObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FCPaymentTransactionObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishTransaction:(id)arg1 ;
-(void)failedTransaction:(id)arg1 ;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(void)setDelegate:(id<FCPaymentTransactionObserverDelegate>)arg1 ;
-(id<FCPaymentTransactionObserverDelegate>)delegate;
@end
