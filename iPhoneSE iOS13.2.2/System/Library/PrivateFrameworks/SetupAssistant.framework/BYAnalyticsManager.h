/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject {

	NSMutableArray* _events;
	NSMutableDictionary* _producers;

}

@property (nonatomic,retain) NSMutableArray * events;                      //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * producers;              //@synthesize producers=_producers - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)commit;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(NSMutableDictionary *)producers;
-(void)addEvent:(id)arg1 withPayload:(id)arg2 ;
-(void)addEvent:(id)arg1 withPayloadBlock:(/*^block*/id)arg2 ;
-(void)setProducers:(NSMutableDictionary *)arg1 ;
@end
