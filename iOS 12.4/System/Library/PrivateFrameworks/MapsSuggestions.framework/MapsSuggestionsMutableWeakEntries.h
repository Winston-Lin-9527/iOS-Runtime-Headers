/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapsSuggestions/MapsSuggestions-Structs.h>
@class NSPointerArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject {

	NSPointerArray* _array;
	BOOL _dirty;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)initWithEntries:(NSArray*)arg1 ;
-(void)addWeakObject:(id)arg1 ;
-(id)weakObjectAtIndex:(unsigned long long)arg1 ;
-(NSArray*)strongArray;
-(id)init;
-(unsigned long long)count;
@end
