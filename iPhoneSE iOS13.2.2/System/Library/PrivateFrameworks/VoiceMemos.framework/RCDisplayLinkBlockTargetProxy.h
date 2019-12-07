/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/RCDisplayLinkTargetProxy.h>

@interface RCDisplayLinkBlockTargetProxy : RCDisplayLinkTargetProxy {

	/*^block*/id _handlerBlock;

}

@property (nonatomic,copy,readonly) id handlerBlock;              //@synthesize handlerBlock=_handlerBlock - In the implementation block
-(void)dealloc;
-(void)displayLinkFired:(id)arg1 ;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(id)handlerBlock;
@end
