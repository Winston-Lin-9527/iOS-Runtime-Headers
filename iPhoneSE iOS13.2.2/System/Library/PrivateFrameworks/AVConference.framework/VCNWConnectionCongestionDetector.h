/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class AVCStatisticsCollector;

@interface VCNWConnectionCongestionDetector : NSObject {

	AVCStatisticsCollector* _statisticsCollector;
	SCD_Struct_VC28 _previousStatistics;
	unsigned _averageThroughputBps;
	unsigned _averagePacketDelayMs;
	unsigned _lastTimestampWithPacketDrop;
	unsigned _packetDropCount;
	unsigned _packetDropCountPerFrame;
	BOOL _didSendCongestionEvent;
	void* _logNWDump;

}

@property (nonatomic,retain) AVCStatisticsCollector * statisticsCollector;              //@synthesize statisticsCollector=_statisticsCollector - In the implementation block
@property (readonly) unsigned averageThroughputBps;                                     //@synthesize averageThroughputBps=_averageThroughputBps - In the implementation block
@property (readonly) unsigned averagePacketDelayMs;                                     //@synthesize averagePacketDelayMs=_averagePacketDelayMs - In the implementation block
@property (readonly) unsigned packetDropCount;                                          //@synthesize packetDropCount=_packetDropCount - In the implementation block
-(void)dealloc;
-(void)setStatisticsCollector:(AVCStatisticsCollector *)arg1 ;
-(void)enableNWLogDump:(void*)arg1 ;
-(unsigned)averagePacketDelayMs;
-(unsigned)averageThroughputBps;
-(unsigned)packetDropCount;
-(AVCStatisticsCollector *)statisticsCollector;
-(void)sendCongestionEventWithTimestamp:(unsigned)arg1 ;
-(BOOL)processNWConnectionNotification:(ifnet_interface_advisory*)arg1 ;
-(BOOL)processNWConnectionPacketEvent:(packet_id*)arg1 eventType:(int)arg2 ;
@end
