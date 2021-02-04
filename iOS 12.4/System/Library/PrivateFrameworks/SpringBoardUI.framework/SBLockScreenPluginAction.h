/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject {

	BSAction* _action;
	NSString* _label;
	long long _authenticationPolicy;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long authenticationPolicy;              //@synthesize authenticationPolicy=_authenticationPolicy - In the implementation block
+(id)actionWithCompletion:(/*^block*/id)arg1 ;
+(id)action;
-(long long)authenticationPolicy;
-(void)setAuthenticationPolicy:(long long)arg1 ;
-(BOOL)isCallAction;
-(BOOL)isInCallAction;
-(void)sendResponseWithSuccess:(BOOL)arg1 ;
-(BOOL)isApplicationAction;
-(BOOL)isEmergencyDialerAction;
-(id)init;
-(id)completion;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
@end
