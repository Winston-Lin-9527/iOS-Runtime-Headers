/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, REDonatedAction, NSString, NSUserActivity, INIntent, INRelevantShortcut;

@interface REUIDonatedElementProperties : NSObject <NSSecureCoding, NSCopying> {

	UIImage* _bodyImage;
	BOOL _isUsingPlaceholderArtwork;
	BOOL _displayAppName;
	REDonatedAction* _action;
	NSString* _appName;
	UIImage* _appIcon;
	UIImage* _fullsizeAppIcon;
	NSString* _title;
	NSString* _subtitle;
	NSUserActivity* _userActivity;
	INIntent* _intent;
	INRelevantShortcut* _relevantShortcut;

}

@property (nonatomic,readonly) REDonatedAction * action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * appName;                                     //@synthesize appName=_appName - In the implementation block
@property (nonatomic,readonly) UIImage * appIcon;                                      //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,readonly) UIImage * fullsizeAppIcon;                              //@synthesize fullsizeAppIcon=_fullsizeAppIcon - In the implementation block
@property (nonatomic,readonly) BOOL displayAppName;                                    //@synthesize displayAppName=_displayAppName - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) UIImage * bodyImage; 
@property (nonatomic,readonly) NSString * bodyImageCompositingFilter; 
@property (nonatomic,readonly) NSUserActivity * userActivity;                          //@synthesize userActivity=_userActivity - In the implementation block
@property (nonatomic,readonly) INIntent * intent;                                      //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INRelevantShortcut * relevantShortcut;                  //@synthesize relevantShortcut=_relevantShortcut - In the implementation block
@property (nonatomic,readonly) unsigned long long donationType; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * remoteBundleIdentifier; 
@property (nonatomic,readonly) NSString * localBundleIdentifier; 
@property (nonatomic,readonly) BOOL requiresRemoteExecution; 
@property (nonatomic,readonly) BOOL supportsLocalIntentExecution; 
@property (nonatomic,readonly) BOOL isMediaDonation; 
@property (nonatomic,readonly) BOOL isWorkoutDonation; 
@property (nonatomic,readonly) BOOL isBeginWorkoutDonation; 
@property (nonatomic,readonly) BOOL isEndWorkoutDonation; 
@property (getter=isLocalDonation,nonatomic,readonly) BOOL localDonation; 
+(void)createWithDonatedAction:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)supportsSecureCoding;
-(INRelevantShortcut *)relevantShortcut;
-(BOOL)displayAppName;
-(NSString *)bodyImageCompositingFilter;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(UIImage *)bodyImage;
-(BOOL)isLocalDonation;
-(NSString *)remoteBundleIdentifier;
-(NSString *)localBundleIdentifier;
-(id)initWithDonatedAction:(id)arg1 ;
-(void)_loadAppContentPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadContentForIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadContentForUserActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_loadContentForRelevantShortcut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isWorkoutDonation;
-(BOOL)isMediaDonation;
-(id)_placeholderImageNameForBundleID:(id)arg1 ;
-(void)_loadContentForUserActivityOnShortcut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_scaleImageForDisplay:(id)arg1 ;
-(BOOL)_isMusicDonation;
-(BOOL)_isPodcastsDonation;
-(BOOL)supportsLocalIntentExecution;
-(unsigned long long)donationType;
-(BOOL)isBeginWorkoutDonation;
-(BOOL)isEndWorkoutDonation;
-(BOOL)requiresRemoteExecution;
-(UIImage *)fullsizeAppIcon;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subtitle;
-(REDonatedAction *)action;
-(INIntent *)intent;
-(NSUserActivity *)userActivity;
-(NSString *)appName;
-(UIImage *)appIcon;
@end
