/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMKeyFrame : NSObject {

	float _value;
	long long _sampleTime;

}

@property (assign,nonatomic) long long sampleTime;              //@synthesize sampleTime=_sampleTime - In the implementation block
@property (assign,nonatomic) float value;                       //@synthesize value=_value - In the implementation block
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(long long)sampleTime;
-(void)setSampleTime:(long long)arg1 ;
-(id)initWithValue:(float)arg1 atTime:(long long)arg2 ;
@end
