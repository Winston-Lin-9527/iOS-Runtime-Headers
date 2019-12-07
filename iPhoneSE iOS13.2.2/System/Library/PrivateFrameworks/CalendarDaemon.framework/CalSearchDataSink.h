/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CalSearchDataSink <NSObject>
@optional
-(BOOL)calSearchShouldStopSearching:(id)arg1;
-(void)calSearch:(id)arg1 showResultsStartingOnDate:(double)arg2;

@required
-(void)calSearch:(id)arg1 foundOccurrences:(CFArrayRef)arg2 cachedDays:(CFArrayRef)arg3 cachedDaysIndexes:(CFArrayRef)arg4;
-(void)calSearchComplete:(id)arg1;

@end
