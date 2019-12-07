/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKPlaceCardActionControllerDelegate <NSObject>
@optional
-(void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToContacts:(id)arg1 fromView:(id)arg2;
-(void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToMapsHome:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromMapsHome:(id)arg1;
-(void)placeCardActionControllerDidSelectRefineLocation:(id)arg1;
-(void)placeCardActionControllerDidSelectChangeAddress:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToCollection:(id)arg1 completion:(/*^block*/id)arg2;
-(void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1 fromView:(id)arg2;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg1;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg1;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg1;

@required
-(void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;

@end
