/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICAPackageView.h>

@class NSURL, NSString;

@interface _WGCAPackageView : _UICAPackageView {

	NSURL* _archiveURL;

}

@property (nonatomic,copy) NSURL * archiveURL;                                  //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapshotIdentifier; 
+(void)loadPackageViewWithContentsOfURL:(id)arg1 publishedObjectViewClassMap:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_supportsPushingBottomCornerRadiusToSubviews:(double)arg1 ;
-(NSString *)snapshotIdentifier;
-(void)setArchiveURL:(NSURL *)arg1 ;
-(NSURL *)archiveURL;
-(id)description;
-(void)_setContinuousCornerRadius:(double)arg1 ;
@end
