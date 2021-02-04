/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NDNewsService <NSObject>
@required
-(void)fetchLatestResultsWithParameters:(id)arg1 completion:(/*^block*/id)arg2;
-(void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(/*^block*/id)arg3;

@end
