/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSData;


@protocol NUImageExportResult <NUExportResult>
@property (readonly) NSURL * destinationURL; 
@property (readonly) NSData * destinationData; 
@required
-(NSData *)destinationData;
-(NSURL *)destinationURL;

@end
