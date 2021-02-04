/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBAssertionDelegate;
@class NSString;

@interface BBAssertion : NSObject {

	NSString* _identifier;
	unsigned long long _transactionID;
	id<BBAssertionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BBAssertionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithDelegate:(id)arg1 identifier:(id)arg2 ;
-(void)increaseOrIgnoreTransactionID:(unsigned long long)arg1 ;
-(unsigned long long)transactionID;
-(void)dealloc;
-(id)identifier;
-(void)setDelegate:(id<BBAssertionDelegate>)arg1 ;
-(id<BBAssertionDelegate>)delegate;
@end
