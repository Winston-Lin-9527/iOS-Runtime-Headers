/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, HDCodableSample, NSString;

@interface HDCodableWorkout : PBCodable <HDDecoding, NSCopying> {

	double _duration;
	double _goal;
	long long _goalType;
	double _totalBasalEnergyBurnedInCanonicalUnit;
	double _totalDistanceInCanonicalUnit;
	double _totalEnergyBurnedInCanonicalUnit;
	double _totalFlightsClimbedInCanonicalUnit;
	double _totalSwimmingStrokeCountInCanonicalUnit;
	long long _type;
	NSMutableArray* _events;
	HDCodableSample* _sample;
	SCD_Struct_HD61 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasSample; 
@property (nonatomic,retain) HDCodableSample * sample;                                     //@synthesize sample=_sample - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                                      //@synthesize events=_events - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasTotalEnergyBurnedInCanonicalUnit; 
@property (assign,nonatomic) double totalEnergyBurnedInCanonicalUnit;                      //@synthesize totalEnergyBurnedInCanonicalUnit=_totalEnergyBurnedInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasTotalDistanceInCanonicalUnit; 
@property (assign,nonatomic) double totalDistanceInCanonicalUnit;                          //@synthesize totalDistanceInCanonicalUnit=_totalDistanceInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasGoalType; 
@property (assign,nonatomic) long long goalType;                                           //@synthesize goalType=_goalType - In the implementation block
@property (assign,nonatomic) BOOL hasGoal; 
@property (assign,nonatomic) double goal;                                                  //@synthesize goal=_goal - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBasalEnergyBurnedInCanonicalUnit; 
@property (assign,nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;                 //@synthesize totalBasalEnergyBurnedInCanonicalUnit=_totalBasalEnergyBurnedInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSwimmingStrokeCountInCanonicalUnit; 
@property (assign,nonatomic) double totalSwimmingStrokeCountInCanonicalUnit;               //@synthesize totalSwimmingStrokeCountInCanonicalUnit=_totalSwimmingStrokeCountInCanonicalUnit - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFlightsClimbedInCanonicalUnit; 
@property (assign,nonatomic) double totalFlightsClimbedInCanonicalUnit;                    //@synthesize totalFlightsClimbedInCanonicalUnit=_totalFlightsClimbedInCanonicalUnit - In the implementation block
+(Class)eventsType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDuration;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setHasDuration:(BOOL)arg1 ;
-(NSMutableArray *)events;
-(void)setSample:(HDCodableSample *)arg1 ;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)hasSample;
-(HDCodableSample *)sample;
-(void)setGoalType:(long long)arg1 ;
-(void)setGoal:(double)arg1 ;
-(long long)goalType;
-(double)goal;
-(void)setTotalEnergyBurnedInCanonicalUnit:(double)arg1 ;
-(void)setTotalBasalEnergyBurnedInCanonicalUnit:(double)arg1 ;
-(void)setTotalDistanceInCanonicalUnit:(double)arg1 ;
-(void)setTotalSwimmingStrokeCountInCanonicalUnit:(double)arg1 ;
-(void)setTotalFlightsClimbedInCanonicalUnit:(double)arg1 ;
-(void)addEvents:(id)arg1 ;
-(id)decodedWorkoutEvents;
-(id)decodedTotalEnergyBurned;
-(id)decodedTotalBasalEnergyBurned;
-(id)decodedTotalDistance;
-(id)decodedTotalSwimmingStrokeCount;
-(id)decodedTotalFlightsClimbed;
-(unsigned long long)decodedGoalType;
-(id)decodedGoal;
-(BOOL)hasTotalEnergyBurnedInCanonicalUnit;
-(double)totalEnergyBurnedInCanonicalUnit;
-(BOOL)hasTotalBasalEnergyBurnedInCanonicalUnit;
-(double)totalBasalEnergyBurnedInCanonicalUnit;
-(BOOL)hasTotalDistanceInCanonicalUnit;
-(double)totalDistanceInCanonicalUnit;
-(BOOL)hasGoal;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(void)setHasTotalEnergyBurnedInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasTotalDistanceInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasGoalType:(BOOL)arg1 ;
-(BOOL)hasGoalType;
-(void)setHasGoal:(BOOL)arg1 ;
-(void)setHasTotalBasalEnergyBurnedInCanonicalUnit:(BOOL)arg1 ;
-(void)setHasTotalSwimmingStrokeCountInCanonicalUnit:(BOOL)arg1 ;
-(BOOL)hasTotalSwimmingStrokeCountInCanonicalUnit;
-(void)setHasTotalFlightsClimbedInCanonicalUnit:(BOOL)arg1 ;
-(BOOL)hasTotalFlightsClimbedInCanonicalUnit;
-(double)totalSwimmingStrokeCountInCanonicalUnit;
-(double)totalFlightsClimbedInCanonicalUnit;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
