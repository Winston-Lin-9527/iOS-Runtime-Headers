/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:06 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsArticles/NAActivity.h>

@class NSString;

@interface NewsArticles.SharingActivityItem : NAActivity {

	 performActivityHandler;
	 type;
	 title;
	 image;

}

@property (readonly,nonatomic) NSString * activityType; 
@property (readonly,nonatomic) NSString * activityTitle; 
-(id)init;
-(NSString *)activityType;
-(id)_systemImageName;
-(NSString *)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
@end
