/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class WLKChannelsResponse, NSString;

@interface WLKChannelsRequestOperation : WLKUTSNetworkRequestOperation {

	WLKChannelsResponse* _channelsResponse;
	NSString* _caller;

}

@property (nonatomic,copy) NSString * caller;                                     //@synthesize caller=_caller - In the implementation block
@property (nonatomic,retain) WLKChannelsResponse * channelsResponse;              //@synthesize channelsResponse=_channelsResponse - In the implementation block
-(void)setCaller:(NSString *)arg1 ;
-(id)initWithCaller:(id)arg1 ;
-(void)processResponse;
-(id)initWithCaller:(id)arg1 filtered:(BOOL)arg2 ;
-(void)setChannelsResponse:(WLKChannelsResponse *)arg1 ;
-(WLKChannelsResponse *)channelsResponse;
-(NSString *)caller;
@end
