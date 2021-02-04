/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSProgress, ASDProgress;

@interface ASDApp : NSObject <NSCopying, NSSecureCoding> {

	BOOL _betaApp;
	BOOL _familyShared;
	NSString* _bundleID;
	NSString* _bundlePath;
	NSString* _localizedName;
	long long _storeExternalVersionID;
	long long _storeItemID;
	long long _downloaderDSID;
	long long _familyID;
	long long _purchaserDSID;
	NSProgress* _progress;
	long long _extensions;
	long long _status;
	ASDProgress* _remoteProgress;

}

@property (retain) NSString * bundlePath;                                              //@synthesize bundlePath=_bundlePath - In the implementation block
@property (retain) NSString * localizedName;                                           //@synthesize localizedName=_localizedName - In the implementation block
@property (assign) long long storeExternalVersionID;                                   //@synthesize storeExternalVersionID=_storeExternalVersionID - In the implementation block
@property (assign) long long storeItemID;                                              //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign) long long downloaderDSID;                                           //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (assign) long long familyID;                                                 //@synthesize familyID=_familyID - In the implementation block
@property (assign) long long purchaserDSID;                                            //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (assign) long long extensions;                                               //@synthesize extensions=_extensions - In the implementation block
@property (assign) long long status;                                                   //@synthesize status=_status - In the implementation block
@property (retain) NSProgress * progress;                                              //@synthesize progress=_progress - In the implementation block
@property (retain) ASDProgress * remoteProgress;                                       //@synthesize remoteProgress=_remoteProgress - In the implementation block
@property (readonly) NSString * bundleID;                                              //@synthesize bundleID=_bundleID - In the implementation block
@property (getter=hasMessagesExtension,readonly) BOOL messasgesExtension; 
@property (getter=isBetaApp,readonly) BOOL betaApp;                                    //@synthesize betaApp=_betaApp - In the implementation block
@property (getter=isFamilyShared,readonly) BOOL familyShared;                          //@synthesize familyShared=_familyShared - In the implementation block
@property (getter=isInstalled,readonly) BOOL installed; 
@property (getter=isLaunchProhibited,readonly) BOOL launchProhibited; 
@property (getter=isOpenable,readonly) BOOL openable; 
@property (getter=isPlaceholder,readonly) BOOL placeholder; 
@property (getter=isStoreApp,readonly) BOOL storeApp; 
@property (getter=isSystemApp,readonly) BOOL systemApp; 
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(long long)purchaserDSID;
-(void)setStoreItemID:(long long)arg1 ;
-(BOOL)isSystemApp;
-(BOOL)isBetaApp;
-(BOOL)isStoreApp;
-(ASDProgress *)remoteProgress;
-(BOOL)isEqualToApp:(id)arg1 ;
-(BOOL)isOpenable;
-(long long)storeExternalVersionID;
-(void)setStoreExternalVersionID:(long long)arg1 ;
-(void)setDownloaderDSID:(long long)arg1 ;
-(void)setFamilyID:(long long)arg1 ;
-(void)setPurchaserDSID:(long long)arg1 ;
-(BOOL)isFamilyShared;
-(void)setRemoteProgress:(ASDProgress *)arg1 ;
-(long long)storeItemID;
-(BOOL)hasMessagesExtension;
-(BOOL)isBeta;
-(long long)downloaderDSID;
-(BOOL)isLaunchProhibited;
-(id)initWithBundleID:(id)arg1 ;
-(long long)familyID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
-(NSString *)localizedName;
-(long long)status;
-(BOOL)isPlaceholder;
-(NSString *)bundlePath;
-(NSString *)bundleID;
-(BOOL)isInstalled;
-(long long)extensions;
-(void)setExtensions:(long long)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
@end
