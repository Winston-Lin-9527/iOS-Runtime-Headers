/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSXPCCoder, RBSXPCMessageContext;

@interface RBSXPCMessageReply : NSObject {

	BSXPCCoder* _payload;
	RBSXPCMessageContext* _context;
	BOOL _sent;

}

@property (nonatomic,readonly) id<BSXPCEncoding><BSXPCDecoding> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageContext * context;                        //@synthesize context=_context - In the implementation block
-(RBSXPCMessageContext *)context;
-(id<BSXPCEncoding><BSXPCDecoding>)payload;
-(void)send;
-(id)_initWithMessage:(id)arg1 ;
-(void)prepareForHandoff;
-(void)encode:(/*^block*/id)arg1 ;
@end
