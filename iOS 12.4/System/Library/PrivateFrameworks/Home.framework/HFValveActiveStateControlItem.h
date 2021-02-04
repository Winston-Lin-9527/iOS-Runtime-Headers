/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFPowerStateControlItem.h>

@interface HFValveActiveStateControlItem : HFPowerStateControlItem
-(id)initWithValueSource:(id)arg1 displayResults:(id)arg2 ;
-(id)initWithValueSource:(id)arg1 auxiliaryTargetValueTuples:(id)arg2 additionalCharacteristicOptions:(id)arg3 displayResults:(id)arg4 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(id)_iconDescriptorForServiceSubtype:(id)arg1 inUse:(BOOL)arg2 active:(BOOL)arg3 hasFaucetAsParentService:(BOOL)arg4 ;
-(id)_faucetValveSubtypeToActiveIconIdentifierMap;
-(id)_faucetValveSubtypeToInactiveIconIdentifierMap;
-(id)writeValue:(id)arg1 ;
@end
