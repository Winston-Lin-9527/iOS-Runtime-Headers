/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, HKHealthStore;

@interface FIUIUnitManager : NSObject {

	NSMutableDictionary* _preferredUnits;
	HKHealthStore* _healthStore;

}
+(id)sharedManager;
-(void)_localeDidChange:(id)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_userPreferencesDidChange:(id)arg1 ;
-(id)userDistanceWalkingRunningHKUnit;
-(id)userActiveEnergyBurnedUnit;
-(unsigned long long)userDistanceWalkingRunningUnit;
-(id)_loadPreferredUnitsFromDefaults;
-(void)_updatePreferredUnits;
-(void)_storePreferredUnitsInDefaults:(id)arg1 ;
-(void)_notifyUnitPreferencesChanged;
-(id)_preferredHKUnitForQuantityType:(id)arg1 ;
-(id)userDistanceHKUnitForDistanceType:(unsigned long long)arg1 ;
-(id)userDistanceCyclingHKUnit;
-(id)userLapLengthHKUnit;
-(id)userDistanceElevationHKUnit;
-(void)_setPreferredHKUnit:(id)arg1 forQuantityType:(id)arg2 ;
-(unsigned long long)userDistanceElevationUnit;
-(unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)arg1 ;
-(double)distanceInDistanceUnit:(unsigned long long)arg1 forDistanceInMeters:(double)arg2 ;
-(id)userDistanceHKUnitForActivityType:(id)arg1 ;
-(void)setUserDistanceUnit:(unsigned long long)arg1 forDistanceType:(unsigned long long)arg2 ;
-(void)setUserDistanceWalkingRunningUnit:(unsigned long long)arg1 ;
-(unsigned long long)userDistanceCyclingUnit;
-(void)setUserDistanceCyclingUnit:(unsigned long long)arg1 ;
-(double)paceWithDistance:(id)arg1 overDuration:(double)arg2 paceFormat:(long long)arg3 ;
-(double)distanceInMetersForDistanceInUserUnit:(double)arg1 distanceType:(unsigned long long)arg2 ;
-(double)distanceInUserDistanceUnitForDistanceInMeters:(double)arg1 distanceType:(unsigned long long)arg2 ;
-(void)setUserActiveEnergyBurnedUnit:(id)arg1 ;
-(id)userBasalEnergyBurnedUnit;
-(void)setUserBasalEnergyBurnedUnit:(id)arg1 ;
-(void)setPreferredUnitsForTesting:(id)arg1 ;
@end
