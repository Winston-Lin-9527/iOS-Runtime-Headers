/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_RWIRelayToClientMessageProxy.h>

@protocol _RWIRelayClientConnectionDelegate;
@class NSString;

@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy> {

	BOOL _closed;
	BOOL _sleeping;
	id<_RWIRelayClientConnectionDelegate> _delegate;
	NSString* _tag;

}

@property (nonatomic,readonly) id<_RWIRelayClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * tag;                                                  //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) BOOL sleeping;                                                 //@synthesize sleeping=_sleeping - In the implementation block
-(void)closeInternal;
-(void)_closeAndNotifyDelegate:(BOOL)arg1 ;
-(void)closeFromConnection;
-(void)dispatchRelayMessage:(id)arg1 ;
-(BOOL)sleeping;
-(void)setSleeping:(BOOL)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<_RWIRelayClientConnectionDelegate>)delegate;
-(void)setTag:(NSString *)arg1 ;
-(NSString *)tag;
-(id)initWithDelegate:(id)arg1 ;
-(void)close;
-(void)forwardInvocation:(id)arg1 ;
@end
