/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSArray, MPUContentItemIdentifierCollection;

@interface MusicLibraryActionAddOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _resultingItems;
	BOOL _success;
	BOOL _addToCloudLibrary;
	MPUContentItemIdentifierCollection* _contentItemIdentifierCollection;

}

@property (copy,readonly) MPUContentItemIdentifierCollection * contentItemIdentifierCollection;              //@synthesize contentItemIdentifierCollection=_contentItemIdentifierCollection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * resultingItems; 
@property (readonly) BOOL success; 
@property (assign,nonatomic) BOOL addToCloudLibrary;                                                         //@synthesize addToCloudLibrary=_addToCloudLibrary - In the implementation block
+(BOOL)canLibraryAddWithContentItemIdentifierCollection:(id)arg1 ;
-(BOOL)addToCloudLibrary;
-(BOOL)success;
-(id)initWithContentItemIdentifierCollection:(id)arg1 ;
-(NSArray *)resultingItems;
-(MPUContentItemIdentifierCollection *)contentItemIdentifierCollection;
-(void)setAddToCloudLibrary:(BOOL)arg1 ;
-(id)init;
-(void)main;
@end
