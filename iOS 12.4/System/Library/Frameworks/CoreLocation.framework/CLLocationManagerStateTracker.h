/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLStateTracker.h>

@interface CLLocationManagerStateTracker : CLStateTracker {

	CLLocationManagerStateTrackerState _state;
	void* _identifier;
	BOOL _inTransaction;

}

@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) BOOL updatingLocation; 
@property (assign,nonatomic) BOOL requestingLocation; 
@property (assign,nonatomic) BOOL requestingRanging; 
@property (assign,nonatomic) BOOL updatingRanging; 
@property (assign,nonatomic) BOOL updatingHeading; 
@property (assign,nonatomic) double headingFilter; 
@property (assign,nonatomic) BOOL persistentMonitoringEnabled; 
@property (assign,nonatomic) BOOL allowsLocationPrompts; 
@property (assign,nonatomic) BOOL allowsAlteredAccessoryLocations; 
@property (assign,nonatomic) BOOL dynamicAccuracyReductionEnabled; 
@property (assign,nonatomic) BOOL previousAuthorizationStatusValid; 
@property (assign,nonatomic) int previousAuthorizationStatus; 
@property (assign,nonatomic) long long activityType; 
@property (assign,nonatomic) int pausesLocationUpdatesAutomatically; 
@property (assign,nonatomic) BOOL paused; 
@property (assign,nonatomic) BOOL allowsBackgroundLocationUpdates; 
@property (assign,nonatomic) BOOL showsBackgroundLocationIndicator; 
@property (assign,nonatomic) BOOL allowsMapCorrection; 
@property (assign,nonatomic) BOOL batchingLocation; 
@property (assign,nonatomic) BOOL updatingVehicleSpeed; 
@property (assign,nonatomic) BOOL updatingVehicleHeading; 
@property (assign,nonatomic) BOOL matchInfoEnabled; 
@property (assign,nonatomic) BOOL courtesyPromptNeeded; 
+(unsigned long long)trackerStateSize;
+(const char*)trackerStateTypeName;
-(id)initInSilo:(id)arg1 withIdentifier:(void*)arg2 state:(/*^block*/id)arg3 ;
-(id)initWithQueue:(id)arg1 identifier:(void*)arg2 state:(/*^block*/id)arg3 ;
-(id)initInSilo:(id)arg1 withIdentifier:(void*)arg2 ;
-(id)initWithQueue:(id)arg1 identifier:(void*)arg2 ;
-(BOOL)updatingLocation;
-(void)setUpdatingLocation:(BOOL)arg1 ;
-(BOOL)requestingLocation;
-(void)setRequestingLocation:(BOOL)arg1 ;
-(BOOL)requestingRanging;
-(void)setRequestingRanging:(BOOL)arg1 ;
-(BOOL)updatingRanging;
-(void)setUpdatingRanging:(BOOL)arg1 ;
-(BOOL)updatingHeading;
-(void)setUpdatingHeading:(BOOL)arg1 ;
-(double)headingFilter;
-(BOOL)persistentMonitoringEnabled;
-(void)setPersistentMonitoringEnabled:(BOOL)arg1 ;
-(BOOL)allowsLocationPrompts;
-(void)setAllowsLocationPrompts:(BOOL)arg1 ;
-(BOOL)allowsAlteredAccessoryLocations;
-(BOOL)dynamicAccuracyReductionEnabled;
-(void)setDynamicAccuracyReductionEnabled:(BOOL)arg1 ;
-(BOOL)previousAuthorizationStatusValid;
-(void)setPreviousAuthorizationStatusValid:(BOOL)arg1 ;
-(int)previousAuthorizationStatus;
-(void)setPreviousAuthorizationStatus:(int)arg1 ;
-(int)pausesLocationUpdatesAutomatically;
-(void)setPausesLocationUpdatesAutomatically:(int)arg1 ;
-(BOOL)allowsBackgroundLocationUpdates;
-(void)setAllowsBackgroundLocationUpdates:(BOOL)arg1 ;
-(BOOL)showsBackgroundLocationIndicator;
-(void)setShowsBackgroundLocationIndicator:(BOOL)arg1 ;
-(BOOL)allowsMapCorrection;
-(void)setAllowsMapCorrection:(BOOL)arg1 ;
-(BOOL)batchingLocation;
-(void)setBatchingLocation:(BOOL)arg1 ;
-(BOOL)updatingVehicleSpeed;
-(void)setUpdatingVehicleSpeed:(BOOL)arg1 ;
-(BOOL)updatingVehicleHeading;
-(void)setUpdatingVehicleHeading:(BOOL)arg1 ;
-(BOOL)courtesyPromptNeeded;
-(void)setCourtesyPromptNeeded:(BOOL)arg1 ;
-(BOOL)dumpState:(void*)arg1 withSize:(unsigned long long)arg2 hints:(os_state_hints_s*)arg3 ;
-(void)setHeadingFilter:(double)arg1 ;
-(double)desiredAccuracy;
-(double)distanceFilter;
-(BOOL)matchInfoEnabled;
-(void)setMatchInfoEnabled:(BOOL)arg1 ;
-(void)setAllowsAlteredAccessoryLocations:(BOOL)arg1 ;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)updateState:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void*)identifier;
-(void)setPaused:(BOOL)arg1 ;
-(long long)activityType;
-(void)setActivityType:(long long)arg1 ;
-(BOOL)paused;
@end
