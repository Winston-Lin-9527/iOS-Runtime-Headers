/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKEventStatsCounterInternalProperty.h>

@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty> {

	_DKEventStatsCounterInternal* _internal;

}

@property (retain) _DKEventStatsCounterInternal * internal;              //@synthesize internal=_internal - In the implementation block
+(id)counterInCollection:(id)arg1 withEventName:(id)arg2 eventType:(id)arg3 eventTypePossibleValues:(id)arg4 ;
-(void)incrementCountByNumber:(unsigned long long)arg1 typeValue:(id)arg2 ;
-(id)typeValues;
-(void)incrementCountWithTypeValue:(id)arg1 ;
-(unsigned long long)countWithTypeValue:(id)arg1 ;
-(_DKEventStatsCounterInternal *)internal;
-(void)setInternal:(_DKEventStatsCounterInternal *)arg1 ;
-(id)eventType;
-(id)eventName;
@end
