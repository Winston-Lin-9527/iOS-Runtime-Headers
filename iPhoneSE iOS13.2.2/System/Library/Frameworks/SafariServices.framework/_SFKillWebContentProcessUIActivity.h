/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivity.h>

@protocol _SFKillWebContentProcessUIActivityDelegate;
@interface _SFKillWebContentProcessUIActivity : _SFActivity {

	id<_SFKillWebContentProcessUIActivityDelegate> _webProcessDelegate;

}

@property (assign,nonatomic,__weak) id<_SFKillWebContentProcessUIActivityDelegate> webProcessDelegate;              //@synthesize webProcessDelegate=_webProcessDelegate - In the implementation block
-(id)activityType;
-(id)_systemImageName;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id<_SFKillWebContentProcessUIActivityDelegate>)webProcessDelegate;
-(void)setWebProcessDelegate:(id<_SFKillWebContentProcessUIActivityDelegate>)arg1 ;
@end
