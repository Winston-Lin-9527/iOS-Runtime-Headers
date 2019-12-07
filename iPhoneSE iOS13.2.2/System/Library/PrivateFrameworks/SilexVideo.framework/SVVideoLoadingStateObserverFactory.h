/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoLoadingStateObserverFactory.h>

@protocol SVVideoLoadingStateObserverFactory <NSObject>
@required
-(id)createLoadingStateObserverForVideo:(id)arg1;

@end


@protocol SVPlayerItemLoaderProviding;
@class NSString;

@interface SVVideoLoadingStateObserverFactory : NSObject <SVVideoLoadingStateObserverFactory> {

	id<SVPlayerItemLoaderProviding> _playerItemLoaderProvider;

}

@property (nonatomic,readonly) id<SVPlayerItemLoaderProviding> playerItemLoaderProvider;              //@synthesize playerItemLoaderProvider=_playerItemLoaderProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createLoadingStateObserverForVideo:(id)arg1 ;
-(id<SVPlayerItemLoaderProviding>)playerItemLoaderProvider;
-(id)initWithPlayeryItemLoaderProvider:(id)arg1 ;
@end
