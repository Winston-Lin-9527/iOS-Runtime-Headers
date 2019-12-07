/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoTimeJumpObserving.h>

@protocol SVPlayerItemObserving, SVVideoTimeProviding;
@class NSString;

@interface SVVideoTimeJumpObserver : NSObject <SVVideoTimeJumpObserving> {

	/*^block*/id jumpBlock;
	id<SVPlayerItemObserving> _itemObserver;
	id<SVVideoTimeProviding> _timeProvider;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> itemObserver;              //@synthesize itemObserver=_itemObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoTimeProviding> timeProvider;               //@synthesize timeProvider=_timeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onJump:,nonatomic,copy) id jumpBlock; 
-(id<SVVideoTimeProviding>)timeProvider;
-(id)initWithItemObserver:(id)arg1 timeProvider:(id)arg2 ;
-(void)jumped:(id)arg1 ;
-(id)jumpBlock;
-(void)onJump:(/*^block*/id)arg1 ;
-(id<SVPlayerItemObserving>)itemObserver;
@end
