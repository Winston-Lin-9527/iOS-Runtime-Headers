/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSString, WBSTemplateIconMonogramConfiguration, UIColor;

@interface WBSTemplateIconRequest : WBSSiteMetadataRequest

@property (nonatomic,copy,readonly) NSString * monogramTitle; 
@property (nonatomic,readonly) WBSTemplateIconMonogramConfiguration * monogramConfiguration; 
@property (nonatomic,readonly) UIColor * overrideForegroundColor; 
@property (nonatomic,readonly) BOOL saveToDisk; 
-(id)initWithURL:(id)arg1 extraInfo:(id)arg2 ;
-(UIColor *)overrideForegroundColor;
-(WBSTemplateIconMonogramConfiguration *)monogramConfiguration;
-(NSString *)monogramTitle;
-(id)initWithURL:(id)arg1 title:(id)arg2 monogramConfiguration:(id)arg3 overrideForegroundColor:(id)arg4 saveToDisk:(BOOL)arg5 ;
-(BOOL)saveToDisk;
@end
