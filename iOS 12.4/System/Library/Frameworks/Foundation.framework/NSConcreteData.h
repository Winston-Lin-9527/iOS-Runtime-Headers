/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSConcreteData : NSData {

	unsigned long long _length;
	void* _bytes;
	/*^block*/id _deallocator;

}
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 freeWhenDone:(BOOL)arg4 bytesAreVM:(BOOL)arg5 ;
-(BOOL)_isCompact;
-(BOOL)_copyWillRetain;
-(void)getBytes:(void*)arg1 ;
-(BOOL)_providesConcreteBacking;
-(id)_createDispatchData;
-(unsigned long long)length;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
@end
