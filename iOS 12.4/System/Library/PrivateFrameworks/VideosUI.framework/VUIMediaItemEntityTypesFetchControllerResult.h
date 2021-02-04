/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUIMediaItemEntityTypesFetchResponse, VUIMediaItemEntityTypesFetchResponseChanges;

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject {

	long long _fetchReason;
	VUIMediaItemEntityTypesFetchResponse* _fetchResponse;
	VUIMediaItemEntityTypesFetchResponseChanges* _fetchChanges;

}

@property (assign,nonatomic) long long fetchReason;                                                   //@synthesize fetchReason=_fetchReason - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponse * fetchResponse;                    //@synthesize fetchResponse=_fetchResponse - In the implementation block
@property (nonatomic,retain) VUIMediaItemEntityTypesFetchResponseChanges * fetchChanges;              //@synthesize fetchChanges=_fetchChanges - In the implementation block
-(id)init;
-(id)description;
-(long long)fetchReason;
-(VUIMediaItemEntityTypesFetchResponse *)fetchResponse;
-(VUIMediaItemEntityTypesFetchResponseChanges *)fetchChanges;
-(void)setFetchReason:(long long)arg1 ;
-(id)initWithFetchReason:(long long)arg1 fetchResponse:(id)arg2 ;
-(void)setFetchResponse:(VUIMediaItemEntityTypesFetchResponse *)arg1 ;
-(void)setFetchChanges:(VUIMediaItemEntityTypesFetchResponseChanges *)arg1 ;
@end
