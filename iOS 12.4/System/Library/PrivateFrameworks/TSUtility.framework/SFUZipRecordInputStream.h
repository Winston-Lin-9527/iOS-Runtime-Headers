/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUBufferedInputStream;
@interface SFUZipRecordInputStream : NSObject {

	id<SFUBufferedInputStream> mInput;
	const char* mBuffer;
	long long mBufferStart;
	long long mBufferEnd;

}
-(id)initWithDataRepresentation:(id)arg1 ;
-(const char*)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 ;
-(void)dealloc;
@end
