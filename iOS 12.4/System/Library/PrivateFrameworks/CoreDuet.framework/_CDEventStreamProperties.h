/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _CDEventStreamProperties : NSObject {

	NSString* name;
	NSString* knowledgeBaseName;
	NSString* descriptionString;
	long long valueType;
	BOOL futureEvent;
	BOOL setupOnDemand;
	BOOL canBeSpeculative;
	double timeToLive;
	BOOL canPersistOnStorage;
	double temporalPrecision;
	long long deResolitionPolicy;
	NSString* dataProtectionClass;
	long long totalSizeLimit;
	long long eventsPerPeriod;
	double period;
	BOOL canBeShared;
	long long sharingPolicy;
	double maxLatency;
	BOOL canSendToServer;
	BOOL hasStats;
	long long statisticsType;
	BOOL isInstant;
	BOOL isHistorical;
	long long pollingPeriod;
	BOOL shouldSaveCurrentEventOnShutdown;
	NSString* knowledgeBaseMetadataClass;
	NSString* _keyPathString;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * knowledgeBaseName; 
@property (nonatomic,readonly) NSString * knowledgeBaseMetadataClass; 
@property (nonatomic,readonly) NSString * descriptionString; 
@property (nonatomic,readonly) long long valueType; 
@property (nonatomic,readonly) BOOL futureEvent; 
@property (nonatomic,readonly) BOOL setupOnDemand; 
@property (nonatomic,readonly) BOOL canBeSpeculative; 
@property (nonatomic,readonly) double timeToLive; 
@property (nonatomic,readonly) BOOL canPersistOnStorage; 
@property (nonatomic,readonly) double temporalPrecision; 
@property (nonatomic,readonly) long long deResolitionPolicy; 
@property (nonatomic,readonly) NSString * dataProtectionClass; 
@property (nonatomic,readonly) long long totalSizeLimit; 
@property (nonatomic,readonly) double period; 
@property (nonatomic,readonly) long long eventsPerPeriod; 
@property (nonatomic,readonly) BOOL canBeShared; 
@property (nonatomic,readonly) long long sharingPolicy; 
@property (nonatomic,readonly) double maxLatency; 
@property (nonatomic,readonly) BOOL canSendToServer; 
@property (nonatomic,readonly) BOOL hasStats; 
@property (nonatomic,readonly) long long statisticsType; 
@property (nonatomic,readonly) BOOL isInstant; 
@property (nonatomic,readonly) BOOL isHistorical; 
@property (nonatomic,readonly) BOOL shouldSaveCurrentEventOnShutdown; 
@property (nonatomic,readonly) long long pollingPeriod; 
@property (nonatomic,readonly) NSString * keyPathString;                           //@synthesize keyPathString=_keyPathString - In the implementation block
+(id)eventStreamPropertiesFromDictionary:(id)arg1 ;
-(NSString *)keyPathString;
-(long long)valueType;
-(NSString *)knowledgeBaseName;
-(long long)totalSizeLimit;
-(long long)eventsPerPeriod;
-(double)temporalPrecision;
-(BOOL)canPersistOnStorage;
-(BOOL)futureEvent;
-(BOOL)setupOnDemand;
-(BOOL)canBeSpeculative;
-(long long)deResolitionPolicy;
-(NSString *)dataProtectionClass;
-(double)maxLatency;
-(BOOL)canSendToServer;
-(BOOL)hasStats;
-(BOOL)isInstant;
-(BOOL)isHistorical;
-(BOOL)shouldSaveCurrentEventOnShutdown;
-(long long)pollingPeriod;
-(NSString *)knowledgeBaseMetadataClass;
-(double)timeToLive;
-(BOOL)canBeShared;
-(double)period;
-(long long)sharingPolicy;
-(long long)statisticsType;
-(id)initFromDictionary:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(NSString *)descriptionString;
@end
