/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject {

	NSDictionary* _dictionary;
	WLKPlayable* _playable;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) WLKPlayable * playable;                      //@synthesize playable=_playable - In the implementation block
-(WLKPlayable *)playable;
-(id)init;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
@end
