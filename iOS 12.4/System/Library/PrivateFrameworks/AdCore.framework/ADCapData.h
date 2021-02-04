/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSString, NSMutableArray;

@interface ADCapData : ADSingleton {

	NSString* _toroID;
	NSMutableArray* _frequencyCapData;
	NSMutableArray* _clickCountData;
	NSMutableArray* _downloadData;

}

@property (nonatomic,retain) NSString * toroID;                              //@synthesize toroID=_toroID - In the implementation block
@property (nonatomic,retain) NSMutableArray * frequencyCapData;              //@synthesize frequencyCapData=_frequencyCapData - In the implementation block
@property (nonatomic,retain) NSMutableArray * clickCountData;                //@synthesize clickCountData=_clickCountData - In the implementation block
@property (nonatomic,retain) NSMutableArray * downloadData;                  //@synthesize downloadData=_downloadData - In the implementation block
+(id)sharedInstance;
-(void)setToroID:(NSString *)arg1 ;
-(NSString *)toroID;
-(void)restoreAllCapData;
-(void)resetCapDataObject;
-(id)restoreCapDataArrayFromPlist:(id)arg1 ;
-(void)checkAndUpdateToroID;
-(void)saveCapDataWithReason:(id)arg1 ;
-(void)addCapDataObject:(id)arg1 ofKind:(long long)arg2 ;
-(void)updateCapDataWith:(id)arg1 ofKind:(long long)arg2 ;
-(id)filteredCapData:(id)arg1 maxItems:(unsigned long long)arg2 expirationThresholdInSeconds:(double)arg3 ;
-(id)capDataJSON:(id)arg1 ;
-(id)clickCapObjectForAdamID:(id)arg1 ;
-(id)downloadObjectForAdamID:(id)arg1 ;
-(void)eraseCapData;
-(NSMutableArray *)frequencyCapData;
-(void)setFrequencyCapData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)clickCountData;
-(void)setClickCountData:(NSMutableArray *)arg1 ;
-(void)setDownloadData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)downloadData;
-(id)init;
-(id)dictionaryRepresentation;
@end
