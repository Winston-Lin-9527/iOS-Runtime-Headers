/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol _IKJSRestrictions <IKJSRestrictions,JSExport>
@property (nonatomic,readonly) long long maxAppRank; 
@property (nonatomic,readonly) BOOL allowArtistActivity; 
@property (nonatomic,readonly) NSString * maxAppRating; 
@property (nonatomic,readonly) BOOL appInstallationAllowed; 
@property (nonatomic,readonly) BOOL appAnalyticsAllowed; 
@property (nonatomic,readonly) BOOL allowsITunes; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedTVShows; 
@property (nonatomic,readonly) BOOL allowsShowingUndownloadedMovies; 
@required
-(long long)maxAppRank;
-(BOOL)allowArtistActivity;
-(NSString *)maxAppRating;
-(BOOL)appInstallationAllowed;
-(BOOL)appAnalyticsAllowed;
-(BOOL)allowsITunes;
-(BOOL)allowsShowingUndownloadedMovies;
-(BOOL)allowsShowingUndownloadedTVShows;

@end
