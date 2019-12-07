/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SALibraryCache.h>

@class NSUUID, NSArray, NSString;

@interface SAKernelCache : NSObject <SAJSONSerialization, SALibraryCache> {

	NSUUID* _uuid;
	NSArray* _binaryLoadInfos;
	unsigned long long _textSegmentsStartAddress;
	unsigned long long _textSegmentsEndAddress;
	unsigned long long _loadAddress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * binaryLoadInfos;                                  //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) unsigned long long loadAddress;                           //@synthesize loadAddress=_loadAddress - In the implementation block
@property (readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long textSegmentsStartAddress;              //@synthesize textSegmentsStartAddress=_textSegmentsStartAddress - In the implementation block
@property (readonly) unsigned long long textSegmentsEndAddress;                //@synthesize textSegmentsEndAddress=_textSegmentsEndAddress - In the implementation block
+(void)clearCaches;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)kernelCacheWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2 ;
+(void)_doKernelCachesWork:(/*^block*/id)arg1 ;
-(NSString *)debugDescription;
-(NSUUID *)uuid;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(NSMutableDictionary*)arg3 ;
-(void)populateReferencesUsingBuffer:(const SCD_Struct_SA11*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(NSMutableDictionary*)arg3 andDataBufferDictionary:(NSMutableDictionary*)arg4 ;
-(NSArray *)binaryLoadInfos;
-(BOOL)matchesUUID:(unsigned char)arg1 loadAddress:(unsigned long long)arg2 ;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;
-(unsigned long long)loadAddress;
-(id)initWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2 ;
-(void)setBinaryLoadInfos:(NSArray *)arg1 ;
@end
