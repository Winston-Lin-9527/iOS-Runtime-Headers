/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, ML3DatabaseConnection;

@interface _ML3SortMapFaultingNameOrderDictionaryEnumerator : NSEnumerator {

	NSEnumerator* _dirtyInsertsEnumerator;
	ML3DatabaseConnection* _connection;
	unsigned long long _offset;

}
-(id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2 ;
-(id)nextObject;
@end
