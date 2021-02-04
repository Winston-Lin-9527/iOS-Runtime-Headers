/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCActionDonationRecommender : NSObject
+(void)initialize;
+(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 filteringActiveShortcuts:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)donationsByRemovingDuplicatesFromDonations:(id)arg1 query:(id)arg2 excludingAppIdentifiers:(id)arg3 includingSingleDonationPerApp:(BOOL)arg4 ;
+(id)getDonationsFromActionResponse:(id)arg1 ;
+(BOOL)actionDonation:(id)arg1 matchesQuery:(id)arg2 ;
+(void)fetchRecommendedDonationsWithLimit:(unsigned long long)arg1 filteringActiveShortcuts:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)fetchRecommendedDonationsWithLimit:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchRecommendedDonationsWithLimit:(unsigned long long)arg1 query:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)fetchSuggestedDonationsForAllAppsWithLimit:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchSuggestedDonationsForForApplicationBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)fetchRecentDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 filteringForTopLevel:(BOOL)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
+(void)fetchPredictedDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2 ;
+(id)filterDonationsForTitleLength:(id)arg1 ;
+(void)fetchRecommendedDonationsByAppIdentifierWithLimit:(unsigned long long)arg1 query:(id)arg2 filteringForIsEligibleForPrediction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 filteringActiveShortcuts:(BOOL)arg5 actionDonationCategory:(unsigned long long)arg6 completionHandler:(/*^block*/id)arg7 ;
@end
