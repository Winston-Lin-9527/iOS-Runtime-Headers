/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SFBrowserPersonaAnalyticsHelper : NSObject {

	unsigned long long _persona;
	BOOL _hasReportedPresentingFromHostApp;

}
-(id)initWithPersona:(unsigned long long)arg1 ;
-(void)didTapToolbarButton:(int)arg1 ;
-(void)didLongTapToolbarButton:(int)arg1 ;
-(void)didDismissWithMethod:(int)arg1 ;
-(void)didPresentFromHostApp:(id)arg1 ;
@end
