/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSDate, IKViewElement;

@interface IKTimelineEventElement : IKViewElement

@property (nonatomic,readonly) double offset; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain,readonly) IKViewElement * relatedContent; 
-(NSDate *)startDate;
-(double)duration;
-(double)offset;
-(IKViewElement *)relatedContent;
@end
