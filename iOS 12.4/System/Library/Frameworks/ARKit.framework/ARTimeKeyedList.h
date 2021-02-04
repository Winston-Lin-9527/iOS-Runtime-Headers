/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ARTimeKeyedList : NSObject {

	unsigned long long _maxSize;
	NSMutableArray* _times;
	NSMutableArray* _objects;

}
-(void)appendObject:(id)arg1 forTime:(double)arg2 ;
-(id)nearestObjectForTime:(double)arg1 ;
-(unsigned long long)insertionIndexForTime:(id)arg1 ;
-(id)initWithMaxSize:(unsigned long long)arg1 ;
-(id)init;
-(void)clear;
@end
