/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(id)nextObject;
-(id)initWithDirtyInsertsEnumerator:(id)arg1 connection:(id)arg2 ;
@end
