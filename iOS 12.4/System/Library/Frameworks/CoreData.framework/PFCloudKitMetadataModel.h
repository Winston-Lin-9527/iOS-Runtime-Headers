/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_PFAncillaryModelFactory.h>

@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_newMetadataModelV1;
+(id)_newMetadataModelV2;
+(id)_newMetadataModelV3;
+(id)_newMetadataModelV4;
+(unsigned long long)ancillaryEntityOffset;
+(id)newMetadataModelForFrameworkVersion:(id)arg1 ;
+(id)identifyModelForStoreWithConnection:(id)arg1 hasOldMetadataTables:(BOOL*)arg2 ;
+(BOOL)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(BOOL*)arg3 ;
+(void)addAttributes:(id)arg1 toPropertiesOfEntity:(id)arg2 ;
+(void)addRelationships:(id)arg1 toPropertiesOfEntity:(id)arg2 ;
+(BOOL)cachedVersionHashesMatchCurrent:(id)arg1 ;
+(void)applyMigrationStatementsForStore:(id)arg1 usingConnection:(id)arg2 ;
+(void)applyPurgeStatementsForStore:(id)arg1 usingConnection:(id)arg2 ;
+(unsigned long long)ancillaryEntityCount;
+(id)ancillaryModelNamespace;
@end
