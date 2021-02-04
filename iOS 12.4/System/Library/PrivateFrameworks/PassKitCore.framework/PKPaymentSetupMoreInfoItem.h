/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData;

@interface PKPaymentSetupMoreInfoItem : NSObject {

	NSString* _title;
	NSString* _body;
	NSString* _linkText;
	NSURL* _linkURL;
	NSURL* _imageURL;
	NSData* _imageData;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                  //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * linkText;              //@synthesize linkText=_linkText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * linkURL;                  //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
-(id)initWithMoreInfoDictionary:(id)arg1 imageData:(id)arg2 ;
-(NSURL *)imageURL;
-(NSData *)imageData;
-(NSString *)linkText;
-(NSURL *)linkURL;
-(id)initWithMoreInfoDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(void)setImageData:(NSData *)arg1 ;
@end
