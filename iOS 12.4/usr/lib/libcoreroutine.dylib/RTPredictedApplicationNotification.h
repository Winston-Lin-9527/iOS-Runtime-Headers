/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTPredictedApplicationNotification : RTNotification {

	NSArray* _predictedApplications;

}

@property (nonatomic,retain) NSArray * predictedApplications;              //@synthesize predictedApplications=_predictedApplications - In the implementation block
-(id)initWithPredictedApplications:(id)arg1 ;
-(NSArray *)predictedApplications;
-(void)setPredictedApplications:(NSArray *)arg1 ;
@end
