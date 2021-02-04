/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ICStoreArtworkInfo, NSString;

@interface ICRadioStationMetadata : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) ICStoreArtworkInfo * artworkInfo; 
@property (nonatomic,copy,readonly) NSString * coreSeedName; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
@property (nonatomic,readonly) BOOL allowsItemLiking; 
@property (nonatomic,readonly) BOOL allowsSharing; 
-(long long)stationID;
-(NSString *)descriptionText;
-(BOOL)allowsSharing;
-(NSString *)stationStringID;
-(ICStoreArtworkInfo *)artworkInfo;
-(BOOL)allowsItemLiking;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)stationHash;
-(NSString *)coreSeedName;
-(NSString *)name;
@end
