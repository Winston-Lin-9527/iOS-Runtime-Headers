/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MiroMetadata : NSObject {

	NSArray* _allRanges;
	NSArray* _loudnessRanges;
	NSString* _identifier;

}

@property (retain) NSArray * allRanges;                        //@synthesize allRanges=_allRanges - In the implementation block
@property (readonly) NSArray * loudnessRanges;                 //@synthesize loudnessRanges=_loudnessRanges - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(NSArray *)allRanges;
-(void)setRanges:(id)arg1 ;
-(void)removeRangesOfType:(unsigned long long)arg1 ;
-(void)addRanges:(id)arg1 ;
-(void)setAllRanges:(NSArray *)arg1 ;
-(NSArray *)loudnessRanges;
-(void)getMetadata;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
@end
