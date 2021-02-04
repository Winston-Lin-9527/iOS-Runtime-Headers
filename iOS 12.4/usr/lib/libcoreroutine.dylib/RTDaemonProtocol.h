/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTDaemonProtocol <NSObject>
@required
-(void)stopMonitoringVisits;
-(void)fetchCloudSyncAuthorizationState:(/*^block*/id)arg1;
-(void)stopMonitoringVehicleEvents;
-(void)startMonitoringForPredictedApplicationsUsingPredicate:(id)arg1;
-(void)stopMonitoringForPredictedApplications;
-(void)fetchPredictedApplications:(/*^block*/id)arg1;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
-(void)startMonitoringPredictedConditionsForAction:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchLastVehicleEventsWithHandler:(/*^block*/id)arg1;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2;
-(void)engageInVehicleEventWithIdentifier:(id)arg1;
-(void)startMonitoringVehicleEvents;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/id)arg1;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1;
-(void)setRoutineEnabled:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)clearRoutineWithReply:(/*^block*/id)arg1;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)simulateApplicationPredictionWithBundleIdentifier:(id)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3;
-(void)submitMetricWithIdentifier:(id)arg1 dictionary:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchAllLocationsOfInterestForSettingsWithReply:(/*^block*/id)arg1;
-(void)stopMonitoringPredictedConditionsForAction:(id)arg1 reply:(/*^block*/id)arg2;
-(void)provideFeedbackForAction:(id)arg1 engagementResult:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)fetchPredictedConditionsForAction:(id)arg1 dateInterval:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchRoutineModeFromLocation:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3;
-(void)startMonitoringVisits;
-(void)startLeechingVisits;
-(void)stopLeechingVisits;
-(void)startLeechingLowConfidenceVisits;
-(void)stopLeechingLowConfidenceVisits;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1;
-(void)fetchPredictedApplicationsAtLocation:(id)arg1 reply:(/*^block*/id)arg2;
-(void)fetchPredictedApplicationsWithPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)startMonitoringNextPredictedLocationsOfInterest;
-(void)stopMonitoringNextPredictedLocationsOfInterest;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)clearAllVehicleEventsWithReply:(/*^block*/id)arg1;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(/*^block*/id)arg1;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(id)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItemStorage:(id)arg3 customLabel:(id)arg4 reply:(/*^block*/id)arg5;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 reply:(/*^block*/id)arg3;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeVisitWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 reply:(/*^block*/id)arg5;
-(void)sortRoutes:(id)arg1 toLocationOfInterestWithIdentifier:(id)arg2 fromLocation:(id)arg3 reply:(/*^block*/id)arg4;
-(void)fetchAllRoutesForSettingsWithReply:(/*^block*/id)arg1;
-(void)setRestorationIdentifier:(id)arg1;

@end
