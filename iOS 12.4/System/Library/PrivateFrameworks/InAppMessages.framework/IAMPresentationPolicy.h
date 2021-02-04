/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IAMPresentationPolicy : NSObject {

	long long _policyGroup;
	double _minimumIntervalBetweenPresentations;

}

@property (nonatomic,readonly) long long policyGroup;                                   //@synthesize policyGroup=_policyGroup - In the implementation block
@property (nonatomic,readonly) double minimumIntervalBetweenPresentations;              //@synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations - In the implementation block
+(long long)presentationPolicyGroupForGlobalPresentationPolicyGroup:(int)arg1 ;
-(double)minimumIntervalBetweenPresentations;
-(id)initWithMinimumIntervalBetweenPresentations:(double)arg1 forPresentationPolicyGroup:(long long)arg2 ;
-(long long)policyGroup;
@end
