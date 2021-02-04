/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TXRDataSourceProvider.h>

@protocol TXRBufferAllocator;
@class CUINamedTexture, NSString;

@interface _CUTextureLink : NSObject <TXRDataSourceProvider> {

	CUINamedTexture* _namedTexture;
	id<TXRBufferAllocator> _bufferAllocator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)namedTexture;
-(id)provideTextureInfo;
-(id)bufferAllocator;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(void)setNamedTexture:(id)arg1 ;
-(void)setBufferAllocator:(id)arg1 ;
-(void)dealloc;
@end
