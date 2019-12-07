/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoViewControllerSizeObserving.h>

@class SVVideoViewController, SVKeyValueObserver, NSString;

@interface SVVideoViewControllerSizeObserver : NSObject <SVVideoViewControllerSizeObserving> {

	/*^block*/id changeBlock;
	SVVideoViewController* _videoViewController;
	SVKeyValueObserver* _boundsObserver;
	CGSize _size;

}

@property (nonatomic,__weak,readonly) SVVideoViewController * videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * boundsObserver;                             //@synthesize boundsObserver=_boundsObserver - In the implementation block
@property (assign,nonatomic) CGSize size;                                                       //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(SVVideoViewController *)videoViewController;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithVideoViewController:(id)arg1 ;
-(SVKeyValueObserver *)boundsObserver;
@end
