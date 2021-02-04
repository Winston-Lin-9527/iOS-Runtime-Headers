/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SearchUIWatchListUtilities : NSObject {

	BOOL _isWatchListed;
	NSString* _watchListIdentifier;

}

@property (assign,nonatomic) BOOL isWatchListed;                //@synthesize isWatchListed=_isWatchListed - In the implementation block
@property (retain) NSString * watchListIdentifier;              //@synthesize watchListIdentifier=_watchListIdentifier - In the implementation block
+(void)generateWatchListReponseForWatchListIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithResponse:(id)arg1 ;
-(void)setWatchListIdentifier:(NSString *)arg1 ;
-(void)toggleWatchListWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)watchListIdentifier;
-(id)initWithIdentifier:(id)arg1 watchListed:(BOOL)arg2 ;
-(void)setIsWatchListed:(BOOL)arg1 ;
-(BOOL)isWatchListed;
@end
