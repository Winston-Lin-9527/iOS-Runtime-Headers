/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest {

	BOOL _allowAuthentication;
	WLKContinueWatchingResponse* _response;

}

@property (assign,nonatomic) BOOL allowAuthentication;                              //@synthesize allowAuthentication=_allowAuthentication - In the implementation block
@property (nonatomic,readonly) WLKContinueWatchingResponse * response;              //@synthesize response=_response - In the implementation block
-(BOOL)allowAuthentication;
-(void)setAllowAuthentication:(BOOL)arg1 ;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(WLKContinueWatchingResponse *)response;
@end
