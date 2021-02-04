/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>
#import <libobjc.A.dylib/MTCoder.h>

@class NSMutableArray;

@interface MTStorageWriter : NSCoder <MTCoder> {

	NSMutableArray* _stack;

}

@property (nonatomic,retain) NSMutableArray * stack;              //@synthesize stack=_stack - In the implementation block
-(void)_encodeObject:(id)arg1 forKey:(id)arg2 ;
-(id)_serializingProtocol;
-(id)_dictionaryForProtocolObject:(id)arg1 ;
-(void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)mt_isWritingToPersistence;
-(BOOL)mt_isReadingFromPersistence;
-(BOOL)mt_isWritingToStorage;
-(id)encodedDictionary;
-(id)init;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stack;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
@end
