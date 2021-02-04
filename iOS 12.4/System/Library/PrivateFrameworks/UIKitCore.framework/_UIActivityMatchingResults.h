/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, _UIActivityMatchingContext, NSArray;

@interface _UIActivityMatchingResults : NSObject {

	NSMutableSet* _excludedActivityTypesSet;
	_UIActivityMatchingContext* _context;
	NSArray* _orderedActivities;

}

@property (nonatomic,retain) NSArray * orderedActivities;                         //@synthesize orderedActivities=_orderedActivities - In the implementation block
@property (nonatomic,readonly) _UIActivityMatchingContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * excludedActivityTypes; 
-(_UIActivityMatchingContext *)context;
-(NSArray *)excludedActivityTypes;
-(void)addExcludedActivityTypes:(id)arg1 ;
-(id)initWithActivityMatchingContext:(id)arg1 ;
-(void)setOrderedActivities:(NSArray *)arg1 ;
-(NSArray *)orderedActivities;
@end
