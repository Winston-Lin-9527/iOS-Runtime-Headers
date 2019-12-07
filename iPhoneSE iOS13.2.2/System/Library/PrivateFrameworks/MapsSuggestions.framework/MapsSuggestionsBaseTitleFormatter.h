/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsTitleFormatter.h>

@class NSString;

@interface MapsSuggestionsBaseTitleFormatter : NSObject <MapsSuggestionsTitleFormatter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(NSString *)uniqueName;
-(BOOL)updateChangedTitlesForEntry:(id)arg1 title:(id)arg2 subtitle:(id)arg3 includeLockedVersions:(BOOL)arg4 ;
-(BOOL)resetTitlesForEntry:(id)arg1 ;
-(BOOL)formatTitlesForEntry:(id)arg1 eta:(id)arg2 ;
-(BOOL)formatTitlesForEntry:(id)arg1 distance:(double)arg2 trafficString:(id)arg3 ;
@end
