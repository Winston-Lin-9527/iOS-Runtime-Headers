/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VoiceShortcuts-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface VCPBIntentDefinition : PBCodable <NSCopying> {

	NSString* _associatedBundleID;
	NSMutableArray* _files;

}

@property (nonatomic,retain) NSString * associatedBundleID;              //@synthesize associatedBundleID=_associatedBundleID - In the implementation block
@property (nonatomic,retain) NSMutableArray * files;                     //@synthesize files=_files - In the implementation block
+(Class)filesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)addFiles:(id)arg1 ;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(void)clearFiles;
-(unsigned long long)filesCount;
-(id)filesAtIndex:(unsigned long long)arg1 ;
-(NSString *)associatedBundleID;
-(void)setAssociatedBundleID:(NSString *)arg1 ;
@end
