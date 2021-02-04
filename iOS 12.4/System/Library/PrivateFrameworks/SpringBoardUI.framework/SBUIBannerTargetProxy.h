/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBUIBannerTarget.h>

@protocol SBUIBannerTargetImplementation;
@class NSString;

@interface SBUIBannerTargetProxy : NSObject <SBUIBannerTarget> {

	void* _identifier;
	long long _idiom;
	id<SBUIBannerTargetImplementation> _implementation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long bannerTargetIdiom;               //@synthesize idiom=_idiom - In the implementation block
-(void*)bannerTargetIdentifier;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(BOOL)isShowingModalBanner;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(id)initWithTargetImplementation:(id)arg1 ;
-(void)registerSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)signalSource:(id)arg1 ;
-(long long)bannerTargetIdiom;
-(void)unregisterSource:(id)arg1 ;
-(NSString *)description;
-(void)invalidate;
@end
