/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSEvent;

@interface CLSEventResult : NSObject {

	float _confidence;
	CLSEvent* _event;

}

@property (nonatomic,retain) CLSEvent * event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) float confidence;              //@synthesize confidence=_confidence - In the implementation block
+(id)eventResultWithEvent:(id)arg1 andConfidence:(float)arg2 ;
-(id)description;
-(float)confidence;
-(CLSEvent *)event;
-(void)setEvent:(CLSEvent *)arg1 ;
-(void)setConfidence:(float)arg1 ;
-(BOOL)isSameEventAsResult:(id)arg1 ;
-(void)mergeWithResult:(id)arg1 ;
@end
