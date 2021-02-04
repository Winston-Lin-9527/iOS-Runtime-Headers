/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXRepeatableImageFillViewFactory.h>

@protocol SXRepeatableImageFillViewFactory
@end


@protocol SXDOMObjectProviding, SXImageViewFactory;
@class NSString;

@interface SXRepeatableImageFillViewFactory : NSObject <SXRepeatableImageFillViewFactory> {

	id<SXDOMObjectProviding> _DOMObjectProvider;
	id<SXImageViewFactory> _imageViewFactory;

}

@property (nonatomic,readonly) id<SXDOMObjectProviding> DOMObjectProvider;              //@synthesize DOMObjectProvider=_DOMObjectProvider - In the implementation block
@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                 //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXDOMObjectProviding>)DOMObjectProvider;
-(id<SXImageViewFactory>)imageViewFactory;
-(id)initWithDOMObjectProvider:(id)arg1 imageViewFactory:(id)arg2 ;
-(id)createRepeatableImageFillViewForRepeatableImageFill:(id)arg1 ;
@end
