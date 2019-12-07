/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKRequest.h>

@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest {

	NSArray* _statsIDs;

}

@property (nonatomic,copy,readonly) NSArray * statsIDs;              //@synthesize statsIDs=_statsIDs - In the implementation block
-(id)init;
-(void)makeRequestWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)statsIDs;
-(id)initWithStatsIDs:(id)arg1 ;
@end
