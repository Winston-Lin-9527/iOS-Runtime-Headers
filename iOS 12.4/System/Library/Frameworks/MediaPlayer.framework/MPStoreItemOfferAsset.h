/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSURL;

@interface MPStoreItemOfferAsset : NSObject {

	NSDictionary* _lookupDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * lookupDictionary;              //@synthesize lookupDictionary=_lookupDictionary - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSString * flavor; 
@property (nonatomic,readonly) double previewDuration; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) long long size; 
-(NSString *)flavor;
-(double)previewDuration;
-(NSDictionary *)lookupDictionary;
-(NSURL *)previewURL;
-(id)initWithLookupDictionary:(id)arg1 ;
-(long long)size;
-(double)duration;
@end
