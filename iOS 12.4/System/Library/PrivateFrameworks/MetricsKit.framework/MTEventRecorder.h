/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventRecorderDelegate;
@interface MTEventRecorder : MTObject {

	id<MTEventRecorderDelegate> _delegate;

}

@property (assign,nonatomic) BOOL monitorsLifecycleEvents; 
@property (assign,nonatomic,__weak) id<MTEventRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)recordEvent:(id)arg1 ;
-(BOOL)monitorsLifecycleEvents;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(id)sendMethod;
-(id)recordEvent:(id)arg1 toTopic:(id)arg2 ;
-(id)recordEvent:(id)arg1 shouldSkipValidation:(BOOL)arg2 ;
-(id)_amsDelegate;
-(void)setDelegate:(id<MTEventRecorderDelegate>)arg1 ;
-(id<MTEventRecorderDelegate>)delegate;
-(id)flushUnreportedEvents;
@end
