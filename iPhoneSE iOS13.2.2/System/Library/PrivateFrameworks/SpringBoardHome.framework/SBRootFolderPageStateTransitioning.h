/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRootFolderPageStateTransitioning <SBRootFolderPageStateProviding>
@property (getter=isTransitioningPageState,nonatomic,readonly) BOOL transitioningPageState; 
@property (nonatomic,readonly) long long destinationPageState; 
@required
-(long long)destinationPageState;
-(BOOL)isTransitioningPageState;
-(void)performPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(BOOL)canTransitionPageStateToState:(long long)arg1;
-(id)beginPageStateTransitionToState:(long long)arg1 reason:(id)arg2 animated:(BOOL)arg3 interactive:(BOOL)arg4;

@end
