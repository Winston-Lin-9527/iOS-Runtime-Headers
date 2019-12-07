/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPFuture.h>

@class NSMapTable;

@interface MPInvalidationFuture : MPFuture {

	NSMapTable* _invalidationBlocks;
	BOOL _invalid;

}

@property (getter=isInvalid,nonatomic,readonly) BOOL invalid;              //@synthesize invalid=_invalid - In the implementation block
-(void)invalidate;
-(BOOL)isInvalid;
-(id)onInvalid:(/*^block*/id)arg1 ;
-(id)onInvalid:(/*^block*/id)arg1 queue:(id)arg2 ;
@end
