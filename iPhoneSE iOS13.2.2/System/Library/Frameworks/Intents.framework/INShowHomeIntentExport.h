/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, INDateComponentsRange;


@protocol INShowHomeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * filters; 
@property (nonatomic,copy) INDateComponentsRange * time; 
@required
-(id)init;
-(INDateComponentsRange *)time;
-(NSArray *)filters;
-(void)setTime:(id)arg1;
-(void)setFilters:(id)arg1;

@end
