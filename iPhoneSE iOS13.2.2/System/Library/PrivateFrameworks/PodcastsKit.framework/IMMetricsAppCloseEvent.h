/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/IMAMSMetricsEvent.h>

@class NSString;

@interface IMMetricsAppCloseEvent : IMAMSMetricsEvent

@property (nonatomic,retain) NSString * exitURL; 
-(id)initWithReason:(long long)arg1 ;
-(NSString *)exitURL;
-(void)setExitTypeWithSuspendReason:(long long)arg1 ;
-(void)setExitURL:(NSString *)arg1 ;
@end
