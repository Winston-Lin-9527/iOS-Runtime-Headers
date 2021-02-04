/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKDataMetadataSection.h>

@class HKSample, NSString, HKHealthStore;

@interface HKDataMetadataReportSection : HKDataMetadataSection {

	HKSample* _sample;
	NSString* _detailedReportName;
	HKHealthStore* _healthStore;

}

@property (nonatomic,readonly) HKSample * sample;                          //@synthesize sample=_sample - In the implementation block
@property (nonatomic,readonly) NSString * detailedReportName;              //@synthesize detailedReportName=_detailedReportName - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                //@synthesize healthStore=_healthStore - In the implementation block
-(id)sectionTitle;
-(unsigned long long)numberOfRowsInSection;
-(HKSample *)sample;
-(id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithSample:(id)arg1 healthStore:(id)arg2 ;
-(NSString *)detailedReportName;
-(id)documentImageForXMLFiles;
-(HKHealthStore *)healthStore;
@end
