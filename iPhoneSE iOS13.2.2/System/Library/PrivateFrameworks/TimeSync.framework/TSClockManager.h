/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TimeSync/TimeSync-Structs.h>
@class NSMutableArray;

@interface TSClockManager : NSObject {

	unsigned _connection;
	NSMutableArray* _clockPersonalities;
	mach_timebase_info _timebaseInfo;
	unsigned long long _machAbsoluteNanosecondClockIdentifier;

}

@property (nonatomic,readonly) unsigned long long machAbsoluteNanosecondClockIdentifier;              //@synthesize machAbsoluteNanosecondClockIdentifier=_machAbsoluteNanosecondClockIdentifier - In the implementation block
+(id)sharedClockManager;
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)clockManager;
+(id)defaultClockPersonalities;
+(void)notifyWhenClockManagerIsAvailable:(/*^block*/id)arg1 ;
+(id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1 ;
+(id)sharedClockManagerSyncWithTimeout:(unsigned long long)arg1 ;
+(id)diagnosticDescriptionForClockService:(unsigned)arg1 withIndent:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)addgPTPServicesWithError:(id*)arg1 ;
-(BOOL)removegPTPServicesWithError:(id*)arg1 ;
-(unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1 ;
-(unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1 ;
-(BOOL)getMachAbsoluteClockID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(unsigned long long)machAbsoluteNanosecondClockIdentifier;
-(void)addClockPersonality:(id)arg1 ;
-(void)removeClockPersonality:(id)arg1 ;
-(BOOL)nextAvailableDynamicClockID:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)releaseDynamicClockID:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned*)arg2 error:(id*)arg3 ;
-(BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)addTSNCaptureServicesWithError:(id*)arg1 ;
-(BOOL)removeTSNCaptureServicesWithError:(id*)arg1 ;
-(id)availableClockIdentifiers;
-(id)clockWithClockIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id*)arg2 ;
@end
