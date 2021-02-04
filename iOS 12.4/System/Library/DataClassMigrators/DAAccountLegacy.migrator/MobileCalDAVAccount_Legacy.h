/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/DataClassMigrators/DAAccountLegacy.migrator/DAAccountLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAAccountLegacy/DALegacyAccount.h>

@class NSURL;

@interface MobileCalDAVAccount_Legacy : DALegacyAccount {

	NSURL* _originalPrincipalURL;

}
-(id)addUsernameToURL:(id)arg1 ;
-(id)overriddenServer;
-(int)overriddenPort;
-(id)overriddenScheme;
-(id)serverBaseURL;
-(BOOL)upgradeAccountWithParent:(id)arg1 ;
-(id)_oldURLsForKeychain;
-(BOOL)_needsNewAccountIDForOldVersion:(int)arg1 ;
-(id)fullURLFromKey:(id)arg1 ;
-(void)_upgradeAccountToTelluride;
-(BOOL)_upgradeSelfFromVersion:(int)arg1 isChildAccount:(BOOL)arg2 ;
-(void)_upgradeiCloudAccountFromVersion:(int)arg1 ;
-(id)mainPrincipalProperties;
-(id)scheme;
-(id)host;
-(long long)port;
@end
