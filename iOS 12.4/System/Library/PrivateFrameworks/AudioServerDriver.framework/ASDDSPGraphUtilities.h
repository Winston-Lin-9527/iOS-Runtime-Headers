/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ASDDSPGraphUtilities : NSObject
+(BOOL)stopRecordingBoxesInGraph:(id)arg1 ;
+(BOOL)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
+(BOOL)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id*)arg3 ;
+(BOOL)stopInjectingBoxesInGraph:(id)arg1 ;
@end
