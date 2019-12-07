/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSNumber;

@interface ADLATStatusManager : ADSingleton {

	BOOL _sendingLATToAdPlatforms;
	BOOL _sendingLATToJingle;
	NSNumber* _pendingJingleRequestToken;

}

@property (nonatomic,copy) NSNumber * pendingJingleRequestToken;              //@synthesize pendingJingleRequestToken=_pendingJingleRequestToken - In the implementation block
@property (assign,nonatomic) BOOL sendingLATToAdPlatforms;                    //@synthesize sendingLATToAdPlatforms=_sendingLATToAdPlatforms - In the implementation block
@property (assign,nonatomic) BOOL sendingLATToJingle;                         //@synthesize sendingLATToJingle=_sendingLATToJingle - In the implementation block
+(id)sharedInstance;
-(void)sendLATStatusToAdPlatforms:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendLATStatusToJingle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setSendingLATToAdPlatforms:(BOOL)arg1 ;
-(BOOL)sendingLATToJingle;
-(id)handleJingleOptOutResponse:(id)arg1 ;
-(BOOL)sendingLATToAdPlatforms;
-(void)setSendingLATToJingle:(BOOL)arg1 ;
-(NSNumber *)pendingJingleRequestToken;
-(void)setPendingJingleRequestToken:(NSNumber *)arg1 ;
@end
