/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>

@class NSString;

@interface MKMapService : NSObject <GEOLogContextDelegate> {

	int _deviceOrientation;
	/*^block*/id _getLogContextForEventBlock;

}

@property (assign) int deviceOrientation;                              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,copy) id getLogContextForEventBlock;              //@synthesize getLogContextForEventBlock=_getLogContextForEventBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
-(id)defaultTraits;
-(id)logContextForLogMsgEvent:(id)arg1 ;
-(id)ticketForMUIDs:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForIdentifiers:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForIdentifiers:(id)arg1 traits:(id)arg2 ;
-(id)ticketForMUIDs:(id)arg1 traits:(id)arg2 ;
-(id)ticketForFreshIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForNonExpiredIdentifier:(id)arg1 resultProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 ;
-(id)ticketForFreshBusinessClaimComponentWithIdentifier:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 ;
-(id)ticketForExternalBusinessID:(id)arg1 contentProvider:(id)arg2 traits:(id)arg3 ;
-(id)ticketForPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3 ;
-(id)ticketForMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 industryCategory:(id)arg3 industryCode:(id)arg4 paymentNetwork:(id)arg5 transactionDate:(id)arg6 transactionLocation:(id)arg7 traits:(id)arg8 ;
-(id)ticketForExternalTransitStationCodes:(id)arg1 sourceID:(id)arg2 transactionDate:(id)arg3 transactionLocation:(id)arg4 traits:(id)arg5 ;
-(id)ticketForProblemResubmission:(id)arg1 traits:(id)arg2 ;
-(id)ticketForSearchPoisForBrandMUID:(unsigned long long)arg1 traits:(id)arg2 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 retainedSearch:(id)arg3 maxResults:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)ticketForPlaceRefinementRequestWithCoordinate:(CLLocationCoordinate2D*)arg1 addressLine:(id)arg2 placeName:(id)arg3 traits:(id)arg4 ;
-(id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForURLQuery:(id)arg1 identifier:(id)arg2 resultProviderId:(int)arg3 contentProvider:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForCategoryListWithTraits:(id)arg1 ;
-(id)ticketForSearchFieldPlaceholderWithTraits:(id)arg1 ;
-(id)ticketForNearestTransitStation:(id)arg1 coordinate:(CLLocationCoordinate2D)arg2 traits:(id)arg3 ;
-(id)ticketForSearchAlongRouteWithCategory:(id)arg1 zilchData:(id)arg2 sessionState:(id)arg3 routeId:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)ticketForSearchCategory:(id)arg1 searchString:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForSearchCategory:(id)arg1 venueIdentifier:(id)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)ticketForPopularNearbyForSearchCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)ticketForBrandLookupWithIMessageUid:(id)arg1 traits:(id)arg2 ;
-(void)captureMapLaunchEventWithLaunchUrl:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(BOOL)arg3 ttlEventTime:(id)arg4 ;
-(void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4 ;
-(void)_applicationDidChangeStatusBar:(id)arg1 ;
-(id)defaultTraitsWithTransportType:(unsigned long long)arg1 ;
-(id)defaultTraitsWithTraits:(id)arg1 ;
-(id)defaultTraitsForAnalyticsWithTraits:(id)arg1 ;
-(id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2 ;
-(id)ticketForForwardGeocodeAddressDictionary:(id)arg1 traits:(id)arg2 ;
-(id)_ticketForReverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 includeEntryPoints:(BOOL)arg2 preserveOriginalLocation:(BOOL)arg3 traits:(id)arg4 ;
-(id)_ticketForReverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 floorOrdinal:(int)arg2 includeEntryPoints:(BOOL)arg3 preserveOriginalLocation:(BOOL)arg4 traits:(id)arg5 ;
-(id)ticketForReverseGeocodeCoordinate:(CLLocationCoordinate2D)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(CLLocationCoordinate2D)arg1 traits:(id)arg2 ;
-(id)ticketForReverseGeocodeDroppedPinCoordinate:(CLLocationCoordinate2D)arg1 floorOrdinal:(int)arg2 traits:(id)arg3 ;
-(id)_ticketForReverseGeocodeDroppedPinCoordinate:(CLLocationCoordinate2D)arg1 floorOrdinal:(id)arg2 traits:(id)arg3 ;
-(id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 relatedSearchSuggestion:(id)arg3 maxResults:(unsigned)arg4 traits:(id)arg5 ;
-(id)ticketForCategory:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 ;
-(void)_mapItemsForResponseData:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6 ;
-(id)mapItemsForPlacesInDetails:(id)arg1 ;
-(id)ticketForChildPlace:(id)arg1 traits:(id)arg2 ;
-(id)ticketForTransitLines:(id)arg1 traits:(id)arg2 ;
-(id)getLogContextForEventBlock;
-(void)setGetLogContextForEventBlock:(id)arg1 ;
-(void)siriAnalyticsDonation:(int)arg1 target:(int)arg2 resultIndex:(int)arg3 mapItem:(id)arg4 ;
-(void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2 ;
-(void)captureMapUIStateWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2 numberOfTabs:(unsigned)arg3 currentTabIndex:(unsigned)arg4 ;
-(void)captureMapUIStateWithIsAirQualityShown:(BOOL)arg1 isWeatherShown:(BOOL)arg2 ;
-(void)captureMapsSettingsWithPreferredTransportMode:(int)arg1 avoidTolls:(BOOL)arg2 avoidHighways:(BOOL)arg3 navVoiceVolume:(int)arg4 pauseSpokenAudioEnabled:(BOOL)arg5 findMyCarEnabled:(BOOL)arg6 trafficEnabled:(BOOL)arg7 labelEnabled:(BOOL)arg8 ;
-(void)captureMapSettingsWithPreferredTransportMode:(int)arg1 ;
-(void)captureMapSettingsWithAvoidTolls:(BOOL)arg1 ;
-(void)captureMapSettingsWithAvoidHighways:(BOOL)arg1 ;
-(void)captureMapSettingsWithNavVoiceVolume:(int)arg1 ;
-(void)captureMapSettingsWithPauseSpokenAudioEnabled:(BOOL)arg1 ;
-(void)captureMapSettingsWithFindMyCarEnabled:(BOOL)arg1 ;
-(void)captureMapSettingsWithTrafficEnabled:(BOOL)arg1 ;
-(void)captureMapSettingsWithLabelEnabled:(BOOL)arg1 ;
-(void)capturePairedDeviceStateWithDeviceType:(int)arg1 isConnected:(BOOL)arg2 deviceOSVersion:(id)arg3 deviceHwIdentifier:(id)arg4 ;
-(void)captureExtensionStateWithIsRideBookingAppsInstalled:(BOOL)arg1 isRideBookingAppsEnabled:(BOOL)arg2 ;
-(void)captureExtensionStateWithIsTableBookingAppsInstalled:(BOOL)arg1 isTableBookingAppsEnabled:(BOOL)arg2 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapRegion:(id)arg4 zoomLevel:(double)arg5 mapType:(int)arg6 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 routeDetails:(id)arg4 ;
-(void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 ;
-(void)captureUserActionAsString:(id)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 mapRegion:(id)arg7 zoomLevel:(double)arg8 mapType:(int)arg9 ;
-(void)captureUserActionAsString:(id)arg1 flyoverAnimationID:(unsigned long long)arg2 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 placeActionDetails:(id)arg3 mapItem:(id)arg4 resultIndex:(int)arg5 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 placeActionDetails:(id)arg4 ;
-(void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 actionURL:(id)arg10 photoID:(id)arg11 placeCardType:(int)arg12 localizedMapItemCategory:(id)arg13 availableActions:(id)arg14 unactionableUIElements:(id)arg15 ;
-(void)captureTransitPlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 resultIndex:(int)arg6 targetID:(unsigned long long)arg7 providerID:(id)arg8 animationID:(unsigned long long)arg9 transitCardCategory:(int)arg10 transitSystem:(id)arg11 transitDepartureSequence:(id)arg12 transitIncident:(id)arg13 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 categoriesDisplayed:(id)arg4 categorySelected:(id)arg5 ;
-(void)capturePlaceCardUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 mapItem:(id)arg4 timestamp:(double)arg5 placeCardType:(int)arg6 categoriesDisplayed:(id)arg7 categorySelected:(id)arg8 ;
-(void)captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3 selectedReportAnIssueIndex:(unsigned)arg4 ;
-(void)incrementAGGDOpenPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2 ;
-(void)incrementAGGDInteractedWithPlaceCardKeyWithType:(unsigned long long)arg1 incrementValue:(long long)arg2 ;
-(id)ticketForWalletMerchantLookupRequest:(id)arg1 traits:(id)arg2 ;
-(id)stylingForWalletCategory:(id)arg1 ;
-(id)problemTicketForWalletRAPReport:(id)arg1 ;
-(id)init;
-(int)deviceOrientation;
-(void)setDeviceOrientation:(int)arg1 ;
@end
