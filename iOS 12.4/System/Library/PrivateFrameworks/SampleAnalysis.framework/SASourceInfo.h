/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSString;

@interface SASourceInfo : NSObject {

	unsigned _lineNum;
	unsigned _columnNum;
	unsigned long long _offsetIntoTextSegment;
	unsigned long long _length;
	NSString* _filePath;

}

@property (readonly) unsigned long long offsetIntoTextSegment;              //@synthesize offsetIntoTextSegment=_offsetIntoTextSegment - In the implementation block
@property (readonly) unsigned long long length;                             //@synthesize length=_length - In the implementation block
@property (readonly) NSString * filePath;                                   //@synthesize filePath=_filePath - In the implementation block
@property (readonly) NSString * fileName; 
@property (readonly) unsigned lineNum;                                      //@synthesize lineNum=_lineNum - In the implementation block
@property (readonly) unsigned columnNum;                                    //@synthesize columnNum=_columnNum - In the implementation block
+(id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned)arg3 columnNum:(unsigned)arg4 filePath:(id)arg5 ;
+(id)sourceInfoWithCSSourceInfo:(CSTypeRef)arg1 textSegmentLoadAddress:(unsigned long long)arg2 ;
-(NSString *)fileName;
-(unsigned long long)offsetIntoTextSegment;
-(unsigned)lineNum;
-(unsigned)columnNum;
-(unsigned long long)length;
-(id)debugDescription;
-(NSString *)filePath;
@end
