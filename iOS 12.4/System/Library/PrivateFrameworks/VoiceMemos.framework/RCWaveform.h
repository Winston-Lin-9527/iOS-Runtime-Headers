/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface RCWaveform : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	unsigned long long _decodedVersion;
	NSArray* _segments;

}

@property (retain) NSArray * segments;                                                 //@synthesize segments=_segments - In the implementation block
@property (readonly) NSArray * segmentsCopy; 
@property (readonly) unsigned long long segmentCount; 
@property (nonatomic,readonly) unsigned long long averagePowerLevelsRate; 
+(id)waveformURLForAVURL:(id)arg1 ;
+(id)_mutableSegmentsByClippingToTimeRange:(SCD_Struct_RC4)arg1 withSegments:(id)arg2 ;
+(id)_mutableSegmentsIntersectingTimeRange:(SCD_Struct_RC4)arg1 intersectionRange:(NSRange*)arg2 withSegments:(id)arg3 ;
+(void)_mergeBoundarySegmentsInArray:(id)arg1 ;
+(NSRange)rangeOfSegmentsIntersectingTimeRange:(SCD_Struct_RC4)arg1 withSegments:(id)arg2 ;
+(id)waveformWithContentsOfURL:(id)arg1 minimumRequiredVersion:(unsigned long long)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(unsigned long long)segmentCount;
-(id)initWithSegments:(id)arg1 ;
-(NSArray *)segmentsCopy;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
-(id)segmentsByClippingToTimeRange:(SCD_Struct_RC4)arg1 ;
-(unsigned long long)averagePowerLevelsRate;
-(BOOL)saveContentsToURL:(id)arg1 ;
-(BOOL)isWaveformDataEqualToDataInWaveform:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
@end
