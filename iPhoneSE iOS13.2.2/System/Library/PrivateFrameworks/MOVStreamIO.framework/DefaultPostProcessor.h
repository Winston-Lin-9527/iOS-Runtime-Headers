/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/MOVStreamPostProcessor.h>

@class NSString;

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 reader:(id)arg3 error:(id*)arg4 ;
@end
