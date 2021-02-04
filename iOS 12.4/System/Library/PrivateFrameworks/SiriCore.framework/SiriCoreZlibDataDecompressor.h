/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriCore/SiriCore-Structs.h>
#import <SiriCore/SiriCoreDataDecompressor.h>

@interface SiriCoreZlibDataDecompressor : SiriCoreDataDecompressor {

	z_stream_s* _inflateStream;
	unsigned char _inflateBuffer[8192];

}
-(id)decompressedDataForData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
@end
