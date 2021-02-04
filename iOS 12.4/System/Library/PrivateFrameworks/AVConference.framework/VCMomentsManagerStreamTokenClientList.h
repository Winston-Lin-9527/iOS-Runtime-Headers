/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMomentsMessenger;
@class NSMutableArray, NSArray;

@interface VCMomentsManagerStreamTokenClientList : NSObject {

	long long _streamToken;
	id<VCMomentsMessenger> _messenger;
	NSMutableArray* _clientContextList;

}

@property (nonatomic,readonly) id<VCMomentsMessenger> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (nonatomic,readonly) NSArray * clientContextList;                   //@synthesize clientContextList=_clientContextList - In the implementation block
+(BOOL)isValidContext:(id)arg1 ;
+(long long)streamTokenFromClientContext:(id)arg1 ;
-(id)newContext;
-(void)removeContext:(id)arg1 ;
-(NSArray *)clientContextList;
-(id)initWithStreamToken:(long long)arg1 messenger:(id)arg2 ;
-(id<VCMomentsMessenger>)messenger;
-(void)dealloc;
@end
