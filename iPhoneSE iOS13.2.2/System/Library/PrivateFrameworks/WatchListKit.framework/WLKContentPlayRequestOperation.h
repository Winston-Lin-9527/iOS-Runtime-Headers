/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _canonicalID;
	WLKContentPlayResponse* _response;

}

@property (nonatomic,retain) WLKContentPlayResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                  //@synthesize canonicalID=_canonicalID - In the implementation block
-(WLKContentPlayResponse *)response;
-(void)setResponse:(WLKContentPlayResponse *)arg1 ;
-(NSString *)canonicalID;
-(void)processResponse;
-(id)initWithCanonicalID:(id)arg1 caller:(id)arg2 ;
@end
