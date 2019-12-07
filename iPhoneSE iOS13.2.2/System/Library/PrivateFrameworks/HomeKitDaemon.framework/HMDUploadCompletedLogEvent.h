/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSError;

@interface HMDUploadCompletedLogEvent : HMDLogEvent {

	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)uuid;
+(id)uploadCompletedWithError:(id)arg1 ;
-(NSError *)error;
-(id)initUploadWithError:(id)arg1 ;
@end
