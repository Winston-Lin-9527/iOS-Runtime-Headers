/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MTMediaPlaylistItem <NSObject>
@property (nonatomic,readonly) unsigned long long startOverallPosition; 
@property (nonatomic,readonly) unsigned long long overallPosition; 
@property (nonatomic,readonly) long long startPosition; 
@property (nonatomic,readonly) NSArray * eventData; 
@optional
-(long long)startPosition;
-(NSArray *)eventData;
-(unsigned long long)startOverallPosition;
-(unsigned long long)overallPosition;

@end
