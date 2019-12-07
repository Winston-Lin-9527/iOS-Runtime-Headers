/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VTGestureMonitorDelegate;
@interface VTGestureMonitor : NSObject {

	id<VTGestureMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VTGestureMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)defaultGestureMonitor;
-(id<VTGestureMonitorDelegate>)delegate;
-(void)setDelegate:(id<VTGestureMonitorDelegate>)arg1 ;
-(void)startObserving;
@end
