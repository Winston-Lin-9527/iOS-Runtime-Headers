/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBFLockScreenActionContext;

@interface CSAction : NSObject {

	long long _type;
	SBFLockScreenActionContext* _context;

}

@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SBFLockScreenActionContext * context;              //@synthesize context=_context - In the implementation block
+(id)actionWithType:(long long)arg1 ;
+(id)actionWithContext:(id)arg1 ;
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(SBFLockScreenActionContext *)context;
-(void)setContext:(SBFLockScreenActionContext *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
