/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Accounts/Authentication/ESAccountAuthenticator.bundle/ESAccountAuthenticator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ESAccountAuthenticator/ESAccountAuthenticator-Structs.h>
#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>
#import <libobjc.A.dylib/DAValidityCheckConsumer.h>

@class NSMutableDictionary, NSString;

@interface ESAccountAuthenticator : NSObject <ACDAccountAuthenticationPlugin, DAValidityCheckConsumer> {

	NSMutableDictionary* _accountIDToVerificationHandler;
	NSMutableDictionary* _accountIDToAccount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isPushSupportedForAccount:(id)arg1 ;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 store:(id)arg3 error:(id*)arg4 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_displayBadCredentialsAlertForAccount:(id)arg1 clientName:(id)arg2 reason:(id)arg3 accountStore:(id)arg4 resetAuthenticatedOnAlertFailure:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(void)_refreshTokenForAccount:(id)arg1 store:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)showUserAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 textFieldTitle:(id)arg5 keyboardType:(id)arg6 withCompletionBlock:(/*^block*/id)arg7 ;
-(void)parkBackgroundThread:(id)arg1 ;
-(void)invokeAndReleaseBlock:(/*^block*/id)arg1 ;
-(id)backgroundThread;
-(BOOL)_isExchangeOAuthAccount:(id)arg1 ;
-(void)_renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isTransientNetworkError:(id)arg1 ;
-(BOOL)_shouldUpgradeAccountToOAuth2:(id)arg1 withCredential:(id)arg2 ;
-(id)appIdsForPromptingForDAAccount:(id)arg1 ;
-(void)_handlePasswordNotification:(CFUserNotificationRef)arg1 response:(unsigned long long)arg2 callback:(/*^block*/id)arg3 account:(id)arg4 accountStore:(id)arg5 resetAuthenticatedOnAlertFailure:(BOOL)arg6 ;
@end
