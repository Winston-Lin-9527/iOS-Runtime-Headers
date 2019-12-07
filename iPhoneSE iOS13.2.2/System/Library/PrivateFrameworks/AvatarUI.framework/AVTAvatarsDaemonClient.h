/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTAvatarsDaemon.h>

@protocol AVTUILogger;
@interface AVTAvatarsDaemonClient : NSObject <AVTAvatarsDaemon> {

	id<AVTUILogger> _logger;
	/*^block*/id _connectionFactory;

}

@property (nonatomic,readonly) id<AVTUILogger> logger;                 //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy,readonly) id connectionFactory;              //@synthesize connectionFactory=_connectionFactory - In the implementation block
-(void)checkIn;
-(id<AVTUILogger>)logger;
-(id)initWithLogger:(id)arg1 ;
-(id)connectionFactory;
-(id)initWithConnectionFactory:(/*^block*/id)arg1 logger:(id)arg2 ;
-(void)performWorkWithConnection:(/*^block*/id)arg1 ;
-(void)performWorkWithSynchronousProxy:(/*^block*/id)arg1 ;
@end
