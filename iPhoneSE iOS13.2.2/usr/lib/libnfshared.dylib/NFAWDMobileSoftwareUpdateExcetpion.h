/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFAWDEventProtocol.h>

@class AWDNFCMobileSoftwareUpdateExceptionEvent, NSString;

@interface NFAWDMobileSoftwareUpdateExcetpion : NSObject <NFAWDEventProtocol> {

	AWDNFCMobileSoftwareUpdateExceptionEvent* _metric;

}

@property (nonatomic,retain) AWDNFCMobileSoftwareUpdateExceptionEvent * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(AWDNFCMobileSoftwareUpdateExceptionEvent *)metric;
-(void)setMetric:(AWDNFCMobileSoftwareUpdateExceptionEvent *)arg1 ;
-(unsigned)getMetricId;
-(id)getMetric;
@end
