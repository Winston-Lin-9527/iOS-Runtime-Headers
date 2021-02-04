/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SVVideoGravityProviderFactory.h>

@protocol SVVideoGravityProviderFactory <NSObject>
@required
-(id)createVideoGravityProviderForVideo:(id)arg1;

@end


@protocol SVVideoPresentationSizeObserverFactory, SVVideoViewControllerSizeObserverFactory;
@class NSString;

@interface SVVideoGravityProviderFactory : NSObject <SVVideoGravityProviderFactory> {

	id<SVVideoPresentationSizeObserverFactory> _presentationSizeObserverFactory;
	id<SVVideoViewControllerSizeObserverFactory> _videoViewControllerSizeObserverFactory;

}

@property (nonatomic,readonly) id<SVVideoPresentationSizeObserverFactory> presentationSizeObserverFactory;                       //@synthesize presentationSizeObserverFactory=_presentationSizeObserverFactory - In the implementation block
@property (nonatomic,readonly) id<SVVideoViewControllerSizeObserverFactory> videoViewControllerSizeObserverFactory;              //@synthesize videoViewControllerSizeObserverFactory=_videoViewControllerSizeObserverFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVVideoPresentationSizeObserverFactory>)presentationSizeObserverFactory;
-(id<SVVideoViewControllerSizeObserverFactory>)videoViewControllerSizeObserverFactory;
-(id)createVideoGravityProviderForVideo:(id)arg1 ;
-(id)initWithPresentationSizeObserverFactory:(id)arg1 videoViewControllerSizeObserverFactory:(id)arg2 ;
@end
