/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/DataClassMigrators/DAAccount.migrator/DAAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface DAAccountMigrator : DataClassMigrator
-(float)migrationProgress;
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(void)_moveExchangeCredentialsToAppleAccessGroup;
-(void)_updateFacebookAccountAuthenticationTypes;
-(void)_upgradeDAAccounts;
-(void)_writeDeviceSpecificID;
-(void)_notifyDaHolidaySubCalAccount;
@end
