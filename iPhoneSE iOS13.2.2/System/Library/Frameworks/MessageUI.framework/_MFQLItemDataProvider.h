/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLPreviewItemDataProvider.h>

@class NSData, QLItem, NSString;

@interface _MFQLItemDataProvider : NSObject <QLPreviewItemDataProvider> {

	NSData* _data;
	QLItem* _item;

}

@property (nonatomic,readonly) QLItem * item;                       //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(QLItem *)item;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)provideDataForItem:(id)arg1 ;
@end
