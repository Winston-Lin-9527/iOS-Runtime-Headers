/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLTimer;

@interface CLTimerWeakHolder : NSObject {

	CLTimer* _timer;

}

@property (nonatomic,__weak,readonly) CLTimer * timer;              //@synthesize timer=_timer - In the implementation block
+(id)holderWithTimer:(id)arg1 ;
-(CLTimer *)timer;
-(id)initWithTimer:(id)arg1 ;
@end
