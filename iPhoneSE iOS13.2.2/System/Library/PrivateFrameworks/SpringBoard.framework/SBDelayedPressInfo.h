/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBDelayedPressInfo : NSObject {

	long long _type;
	long long _phase;
	double _timestamp;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long phase;               //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
@end
