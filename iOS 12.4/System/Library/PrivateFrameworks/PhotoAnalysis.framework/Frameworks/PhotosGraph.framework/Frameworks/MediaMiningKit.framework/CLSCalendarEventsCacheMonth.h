/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface CLSCalendarEventsCacheMonth : NSObject {

	long long _month;
	NSMutableSet* _days;

}

@property (assign,nonatomic) long long month;                    //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) NSMutableSet * days;              //@synthesize days=_days - In the implementation block
-(NSMutableSet *)days;
-(id)initWithMonth:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(long long)month;
-(void)setMonth:(long long)arg1 ;
@end
