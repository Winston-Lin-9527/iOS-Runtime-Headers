/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControlAlgorithm.h>

@class NSString;

@interface VCRedundancyControlAlgorithmVideoMultiway : NSObject <VCRedundancyControlAlgorithm> {

	unsigned _redundancyPercentage;
	double _redundancyInterval;
	double _packetLossPercentages[20];
	double _roundTripTime;
	double _packetLossThreshold;
	unsigned _targetBitrate;
	unsigned _packetLossWindowSize;
	unsigned _packetLossPercentageIndex;
	int _mode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned redundancyPercentage;              //@synthesize redundancyPercentage=_redundancyPercentage - In the implementation block
@property (nonatomic,readonly) double redundancyInterval;                  //@synthesize redundancyInterval=_redundancyInterval - In the implementation block
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV19)arg1 ;
-(unsigned)redundancyPercentage;
-(double)redundancyInterval;
-(void)updateInternalParametersWithMode:(int)arg1 ;
-(void)updateRoundTripTimeWithStatistics:(SCD_Struct_AV19)arg1 ;
-(void)updateRedundancyPercentage;
-(id)init;
@end
