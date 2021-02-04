/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CSVoiceProfileContext : NSObject {

	NSString* _profileId;
	NSString* _languageCode;
	NSString* _productCategory;
	NSNumber* _version;

}

@property (nonatomic,retain) NSString * profileId;                    //@synthesize profileId=_profileId - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                 //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSString * productCategory;              //@synthesize productCategory=_productCategory - In the implementation block
@property (nonatomic,retain) NSNumber * version;                      //@synthesize version=_version - In the implementation block
-(id)initWithProfileId:(id)arg1 languageCode:(id)arg2 productCategory:(id)arg3 version:(id)arg4 ;
-(NSString *)profileId;
-(void)setProfileId:(NSString *)arg1 ;
-(NSString *)productCategory;
-(void)setProductCategory:(NSString *)arg1 ;
-(id)description;
-(void)setVersion:(NSNumber *)arg1 ;
-(NSNumber *)version;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end
