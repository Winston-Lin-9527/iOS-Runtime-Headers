/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRedundancyControllerProtocol.h>

@protocol VCRedundancyControlAlgorithm;
@class AVCStatisticsCollector, NSString;

@interface VCRedundancyControllerVideo : NSObject <VCRedundancyControllerProtocol> {

	id _redundancyControllerDelegate;
	AVCStatisticsCollector* _statisticsCollector;
	unsigned _mode;
	id<VCRedundancyControlAlgorithm> _algorithm;
	unsigned _currentRedundancyPercentage;
	int _forceRedundancyPercentage;
	double _lastDefaultSettingLoadingTime;
	int _type;
	unsigned long long _statisticsID;

}

@property (assign,nonatomic) unsigned long long statisticsID;              //@synthesize statisticsID=_statisticsID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadDefaultSettings;
-(void)updateRedundancyStrategyWithNetworkStatistics:(SCD_Struct_AV19)arg1 ;
-(void)reportRedundancyPercentage:(unsigned)arg1 redundancyInterval:(double)arg2 ;
-(id)initWithDelegate:(id)arg1 statisticsCollector:(id)arg2 mode:(unsigned)arg3 ;
-(unsigned long long)statisticsID;
-(void)setStatisticsID:(unsigned long long)arg1 ;
-(void)dealloc;
@end
