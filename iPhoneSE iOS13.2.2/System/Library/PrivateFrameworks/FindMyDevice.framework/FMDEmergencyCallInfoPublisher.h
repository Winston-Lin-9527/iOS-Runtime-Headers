/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMDEmergencyCallInfoPublisherConfiguration;

@interface FMDEmergencyCallInfoPublisher : NSObject {

	FMDEmergencyCallInfoPublisherConfiguration* _publisherConfig;

}

@property (nonatomic,retain) FMDEmergencyCallInfoPublisherConfiguration * publisherConfig;              //@synthesize publisherConfig=_publisherConfig - In the implementation block
-(id)initWithConfiguration:(id)arg1 ;
-(void)publishInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(FMDEmergencyCallInfoPublisherConfiguration *)publisherConfig;
-(void)setPublisherConfig:(FMDEmergencyCallInfoPublisherConfiguration *)arg1 ;
@end
