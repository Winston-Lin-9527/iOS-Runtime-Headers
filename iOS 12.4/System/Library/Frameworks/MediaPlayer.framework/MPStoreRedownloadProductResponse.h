/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, MPStoreRedownloadProductItem;

@interface MPStoreRedownloadProductResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSURL* _fallbackStreamingKeyServerURL;
	NSURL* _fallbackStreamingKeyCertificateURL;

}

@property (nonatomic,copy) NSURL * fallbackStreamingKeyServerURL;                   //@synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyCertificateURL;              //@synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL - In the implementation block
@property (nonatomic,readonly) MPStoreRedownloadProductItem * item; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(NSDictionary *)responseDictionary;
-(NSURL *)fallbackStreamingKeyCertificateURL;
-(void)setFallbackStreamingKeyCertificateURL:(NSURL *)arg1 ;
-(NSURL *)fallbackStreamingKeyServerURL;
-(void)setFallbackStreamingKeyServerURL:(NSURL *)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
-(MPStoreRedownloadProductItem *)item;
@end
