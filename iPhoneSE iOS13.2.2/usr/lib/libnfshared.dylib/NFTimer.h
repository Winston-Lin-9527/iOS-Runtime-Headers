/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface NFTimer : NSObject {

	NSObject*<OS_dispatch_source> _src;

}
-(void)dealloc;
-(void)stopTimer;
-(void)startTimer:(double)arg1 ;
-(void)startTimer:(double)arg1 leeway:(double)arg2 ;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
@end
