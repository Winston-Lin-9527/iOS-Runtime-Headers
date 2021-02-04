/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTPredictionExpertFeatureAddon.h>

@interface RTPredictionExpertFeatureAddonWeekday : RTPredictionExpertFeatureAddon {

	long long _targetDays;

}

@property (nonatomic,readonly) long long targetDays;              //@synthesize targetDays=_targetDays - In the implementation block
-(long long)targetDays;
-(id)initWithTargetDays:(long long)arg1 ;
-(long long)addonType;
-(id)weekdayStringFromMask:(long long)arg1 ;
-(id)description;
@end
