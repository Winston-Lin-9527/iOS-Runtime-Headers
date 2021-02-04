/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNNavigationState.h>

@class MNRoutePlanningDetails, MNNavigationSessionManager;

@interface MNNavigationStateGuidance : MNNavigationState {

	MNRoutePlanningDetails* _routePlanningDetails;
	MNNavigationSessionManager* _navigationSessionManager;

}
+(id)guidanceStateForRoutePlanningDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3 ;
-(void)setIsConnectedToCarplay:(BOOL)arg1 ;
-(void)setDisplayedStepIndex:(unsigned long long)arg1 ;
-(void)stopNavigation;
-(void)updateDestination:(id)arg1 ;
-(void)resumeOriginalDestination;
-(void)switchToRouteWithDetails:(id)arg1 ;
-(void)repeatCurrentGuidanceWithReply:(/*^block*/id)arg1 ;
-(void)repeatCurrentTrafficAlertWithReply:(/*^block*/id)arg1 ;
-(void)vibrateForPrompt:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
-(void)stopCurrentGuidancePrompt;
-(void)setHFPPreference:(BOOL)arg1 forSetting:(id)arg2 ;
-(void)setCurrentAudioOutputSetting:(id)arg1 ;
-(void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2 ;
-(void)acceptReroute:(BOOL)arg1 forTrafficIncidentAlertDetails:(id)arg2 ;
-(void)setTraceIsPlaying:(BOOL)arg1 ;
-(void)setTracePlaybackSpeed:(double)arg1 ;
-(void)setTracePosition:(double)arg1 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1 ;
-(id)traceManager;
-(void)enterState;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(unsigned long long)desiredResourcePolicy;
-(id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 routePlanningDetails:(id)arg3 ;
-(id)currentDestination;
@end
