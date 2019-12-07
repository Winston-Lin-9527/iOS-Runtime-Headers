/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillFrame.h>

@class WKWebProcessPlugInFrame, NSString;

@interface SFFormAutoFillFrame : NSObject <WBSFormAutoFillFrame> {

	WKWebProcessPlugInFrame* _plugInFrame;

}

@property (nonatomic,readonly) WKWebProcessPlugInFrame * plugInFrame;              //@synthesize plugInFrame=_plugInFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)committedURL;
-(BOOL)containsAnyFormElements;
-(WKWebProcessPlugInFrame *)plugInFrame;
-(id)initWithWebProcessPlugInFrame:(id)arg1 ;
-(id)_pageContoller;
-(id)_formMetadataController;
-(OpaqueFormAutoFillFrameRef)frameRef;
-(OpaqueJSContextRef)jsContextForMetadataControllerScriptWorld;
-(OpaqueJSValueRef)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1 ;
-(void)enumerateChildFramesUsingBlock:(/*^block*/id)arg1 ;
-(id)pageMainFrame;
@end
