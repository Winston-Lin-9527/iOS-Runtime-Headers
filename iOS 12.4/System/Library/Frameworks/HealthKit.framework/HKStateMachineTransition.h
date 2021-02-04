/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HKStateMachineState;

@interface HKStateMachineTransition : NSObject {

	long long _event;
	NSString* _label;
	HKStateMachineState* _fromState;
	HKStateMachineState* _toState;

}

@property (nonatomic,readonly) long long event;                                     //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,__weak,readonly) HKStateMachineState * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,__weak,readonly) HKStateMachineState * toState;                //@synthesize toState=_toState - In the implementation block
-(id)initWithEvent:(long long)arg1 label:(id)arg2 from:(id)arg3 to:(id)arg4 ;
-(HKStateMachineState *)toState;
-(HKStateMachineState *)fromState;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)event;
-(NSString *)label;
@end
