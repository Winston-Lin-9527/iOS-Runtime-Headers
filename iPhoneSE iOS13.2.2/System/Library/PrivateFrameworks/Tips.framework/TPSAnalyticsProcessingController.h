/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TPSAnalyticsProcessorDataSource.h>

@class NSArray, NSDictionary, TPSExperiment;

@interface TPSAnalyticsProcessingController : NSObject <TPSAnalyticsProcessorDataSource> {

	NSArray* _processors;
	NSArray* _allTipStatus;
	NSDictionary* _deliveryInfoMap;
	NSDictionary* _eventHistoryMap;
	TPSExperiment* _experiment;

}
-(id)allTipStatus;
-(id)allDeliveryInfo;
-(id)deliveryEventForIdentifier:(id)arg1 ;
-(id)deliveryInfoForIdentifier:(id)arg1 ;
-(id)experiment;
-(id)initWithAllTipStatus:(id)arg1 deliveryInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4 processors:(id)arg5 ;
-(id)initWithAllTipStatus:(id)arg1 deliveryInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4 ;
-(void)processAnalytics;
@end
