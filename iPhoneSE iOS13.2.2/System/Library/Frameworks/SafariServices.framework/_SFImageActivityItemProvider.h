/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivityItemProvider.h>

@class NSData, NSString;

@interface _SFImageActivityItemProvider : _SFActivityItemProvider {

	NSData* _imageOnlyDocumentData;
	NSString* _documentUTI;

}
-(id)item;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)_imageData;
-(id)initWithWebView:(id)arg1 ;
@end
