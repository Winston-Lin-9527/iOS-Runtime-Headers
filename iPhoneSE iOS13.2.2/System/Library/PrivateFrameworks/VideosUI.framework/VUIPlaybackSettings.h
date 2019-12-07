/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VUIPlaybackSettings : NSObject {

	int _preferencesNotifyToken;
	BOOL _preferencesNotifyTokenIsValid;
	BOOL _cellularDataEnabled;
	NSString* _preferredAudioLanguageCode;
	long long _networkStatus;
	long long _preferredWifiPlaybackQuality;
	long long _preferredCellularPlaybackQuality;

}

@property (assign,nonatomic) BOOL cellularDataEnabled;                                                 //@synthesize cellularDataEnabled=_cellularDataEnabled - In the implementation block
@property (assign,nonatomic) long long networkStatus;                                                  //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) long long preferredWifiPlaybackQuality;                                   //@synthesize preferredWifiPlaybackQuality=_preferredWifiPlaybackQuality - In the implementation block
@property (assign,nonatomic) long long preferredCellularPlaybackQuality;                               //@synthesize preferredCellularPlaybackQuality=_preferredCellularPlaybackQuality - In the implementation block
@property (nonatomic,readonly) long long preferredPlaybackQualityForCurrentNetworkStatus; 
@property (nonatomic,retain) NSString * preferredAudioLanguageCode;                                    //@synthesize preferredAudioLanguageCode=_preferredAudioLanguageCode - In the implementation block
+(id)sharedSettings;
-(id)init;
-(void)dealloc;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(long long)networkStatus;
-(void)setNetworkStatus:(long long)arg1 ;
-(BOOL)cellularDataEnabled;
-(void)_updateNetworkStatus;
-(void)_networkTypeDidChange:(id)arg1 ;
-(NSString *)preferredAudioLanguageCode;
-(void)setPreferredAudioLanguageCode:(NSString *)arg1 ;
-(long long)preferredPlaybackQualityForCurrentNetworkStatus;
-(long long)preferredCellularPlaybackQuality;
-(void)_updatePropertiesFromUserPrefs;
-(void)_registerObserverForUserPrefsChange;
-(long long)preferredWifiPlaybackQuality;
-(long long)_playbackQualityForString:(id)arg1 ;
-(void)setPreferredWifiPlaybackQuality:(long long)arg1 ;
-(void)setPreferredCellularPlaybackQuality:(long long)arg1 ;
@end
