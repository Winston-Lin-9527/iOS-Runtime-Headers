/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface HDExperimentResult : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _measurements;
	NSMutableDictionary* _auxiliaryData;
	NSMutableDictionary* _files;

}

@property (nonatomic,readonly) NSMutableDictionary * measurements;               //@synthesize measurements=_measurements - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * auxiliaryData;              //@synthesize auxiliaryData=_auxiliaryData - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * files;                      //@synthesize files=_files - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableDictionary *)files;
-(NSMutableDictionary *)measurements;
-(NSMutableDictionary *)auxiliaryData;
-(BOOL)isEqualToExperimentResult:(id)arg1 ;
@end
