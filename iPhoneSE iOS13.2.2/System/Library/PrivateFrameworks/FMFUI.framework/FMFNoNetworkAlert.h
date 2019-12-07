/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FMFNoNetworkAlert : NSObject {

	BOOL _globalCellularEnabled;

}

@property (assign,getter=isGlobalCellularEnabled,nonatomic) BOOL globalCellularEnabled;              //@synthesize globalCellularEnabled=_globalCellularEnabled - In the implementation block
+(BOOL)isAirplaneModeEnabled;
+(unsigned long long)reasonForNoInternet;
+(id)alertInfoForInternetUnavailableReason:(unsigned long long)arg1 ;
+(BOOL)isGlobalCellularEnabled;
+(id)newAlertController;
-(BOOL)isGlobalCellularEnabled;
-(void)setGlobalCellularEnabled:(BOOL)arg1 ;
@end
