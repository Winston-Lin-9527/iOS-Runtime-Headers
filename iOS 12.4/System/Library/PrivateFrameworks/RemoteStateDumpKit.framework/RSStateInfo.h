/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteStateDumpKit.framework/RemoteStateDumpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface RSStateInfo : NSObject {

	unsigned long long _stateType;
	long long _actionRevision;

}

@property (assign,nonatomic) unsigned long long stateType;              //@synthesize stateType=_stateType - In the implementation block
@property (assign,nonatomic) long long actionRevision;                  //@synthesize actionRevision=_actionRevision - In the implementation block
-(void)setStateType:(unsigned long long)arg1 ;
-(unsigned long long)stateType;
-(id)initWithType:(unsigned long long)arg1 revision:(long long)arg2 ;
-(long long)actionRevision;
-(void)setActionRevision:(long long)arg1 ;
@end
