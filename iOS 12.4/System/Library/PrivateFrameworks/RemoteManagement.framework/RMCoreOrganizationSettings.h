/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RMUniquedManagedObject.h>
#import <libobjc.A.dylib/RMUniquelySerializableManagedObject.h>

@class RMCoreUser, NSString;

@interface RMCoreOrganizationSettings : RMUniquedManagedObject <RMUniquelySerializableManagedObject>

@property (nonatomic,retain) RMCoreUser * user; 
@property (assign,nonatomic) BOOL allLimitsEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
+(id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1 ;
-(void)delete;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)_changeAppLimitsFromAskToWarn:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
