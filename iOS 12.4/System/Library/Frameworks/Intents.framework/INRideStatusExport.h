/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, INRideCompletionStatus, INRideVehicle, INRideDriver, NSDate, CLPlacemark, NSArray, INRideOption, NSUserActivity;


@protocol INRideStatusExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * rideIdentifier; 
@property (assign,nonatomic) long long phase; 
@property (nonatomic,copy) INRideCompletionStatus * completionStatus; 
@property (nonatomic,copy) INRideVehicle * vehicle; 
@property (nonatomic,copy) INRideDriver * driver; 
@property (nonatomic,copy) NSDate * estimatedPickupDate; 
@property (nonatomic,copy) NSDate * estimatedDropOffDate; 
@property (nonatomic,copy) NSDate * estimatedPickupEndDate; 
@property (nonatomic,copy) CLPlacemark * pickupLocation; 
@property (nonatomic,copy) NSArray * waypoints; 
@property (nonatomic,copy) CLPlacemark * dropOffLocation; 
@property (nonatomic,copy) INRideOption * rideOption; 
@property (nonatomic,retain) NSUserActivity * userActivityForCancelingInApplication; 
@property (nonatomic,copy) NSArray * additionalActionActivities; 
@required
-(NSArray *)waypoints;
-(void)setWaypoints:(id)arg1;
-(INRideVehicle *)vehicle;
-(INRideOption *)rideOption;
-(NSUserActivity *)userActivityForCancelingInApplication;
-(INRideCompletionStatus *)completionStatus;
-(NSArray *)additionalActionActivities;
-(void)setPickupLocation:(id)arg1;
-(void)setDropOffLocation:(id)arg1;
-(NSString *)rideIdentifier;
-(void)setRideIdentifier:(id)arg1;
-(void)setVehicle:(id)arg1;
-(NSDate *)estimatedDropOffDate;
-(void)setEstimatedDropOffDate:(id)arg1;
-(NSDate *)estimatedPickupEndDate;
-(void)setEstimatedPickupEndDate:(id)arg1;
-(void)setRideOption:(id)arg1;
-(void)setUserActivityForCancelingInApplication:(id)arg1;
-(void)setCompletionStatus:(id)arg1;
-(void)setAdditionalActionActivities:(id)arg1;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(CLPlacemark *)pickupLocation;
-(CLPlacemark *)dropOffLocation;
-(id)init;
-(long long)phase;
-(void)setPhase:(long long)arg1;
-(INRideDriver *)driver;
-(void)setDriver:(id)arg1;

@end
