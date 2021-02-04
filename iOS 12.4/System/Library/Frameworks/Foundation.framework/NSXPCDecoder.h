/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXPCCoder.h>

@protocol OS_xpc_object;
@class NSXPCConnection, NSObject;

@interface NSXPCDecoder : NSXPCCoder {

	unsigned long long _genericIndex;
	SCD_Struct_NS76* _decoder;
	NSXPCConnection* _connection;
	/*function pointer*/void** _collections[128];
	SCD_Struct_NS77 _rootObject;
	unsigned _collectionPointer;
	id _allowedClassesList[128];
	long long _allowedClassesIndex;
	NSObject*<OS_xpc_object> _oolObjects;

}

@property (assign) NSXPCConnection * _connection;              //@synthesize connection=_connection - In the implementation block
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(void)set_connection:(NSXPCConnection *)arg1 ;
-(id)_decodeReplyFromXPCObject:(id)arg1 forSelector:(SEL)arg2 interface:(id)arg3 ;
-(int)_decodeMessageFromXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 interface:(id)arg8 ;
-(void)_startReadingFromXPCObject:(id)arg1 ;
-(int)__decodeXPCObject:(id)arg1 allowingSimpleMessageSend:(BOOL)arg2 outInvocation:(id*)arg3 outArguments:(id*)arg4 outArgumentsMaxCount:(unsigned long long)arg5 outMethodSignature:(id*)arg6 outSelector:(SEL*)arg7 isReply:(BOOL)arg8 replySelector:(SEL)arg9 interface:(id)arg10 ;
-(id)_decodeObjectOfClasses:(id)arg1 atObject:(SCD_Struct_NS77*)arg2 ;
-(const char*)_decodeCStringForKey:(id)arg1 ;
-(id)decodeXPCObjectForKey:(id)arg1 ;
-(NSXPCConnection *)_connection;
-(id)decodeXPCObjectOfType:(xpc_type_sRef)arg1 forKey:(id)arg2 ;
-(id)allowedClasses;
-(id)decodeObject;
-(id)init;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)debugDescription;
-(BOOL)allowsKeyedCoding;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(int)decodeIntForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(id)connection;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
@end
