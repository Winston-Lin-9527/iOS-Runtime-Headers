/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIScopedBackgroundTask : NSObject {

	unsigned long long _taskIdentifier;

}

@property (assign,nonatomic) unsigned long long taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)taskIdentifier;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end
