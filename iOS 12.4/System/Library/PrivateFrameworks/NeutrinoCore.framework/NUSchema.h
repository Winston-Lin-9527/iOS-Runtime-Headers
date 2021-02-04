/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUModel.h>

@class NUIdentifier;

@interface NUSchema : NUModel {

	NUIdentifier* _identifier;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NUIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)serializeIdentifiableItem:(id)arg1 error:(out id*)arg2 ;
+(id)deserializeIdentifiableItem:(id)arg1 error:(out id*)arg2 ;
+(id)reservedPropertyNames;
+(id)deserializeFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(long long)schemaTypeFromString:(id)arg1 error:(out id*)arg2 ;
+(id)copyItem:(id)arg1 schemaIdentifier:(id)arg2 ;
+(id)deserializeIdentifierFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)serializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeItem:(id)arg1 schemaIdentifier:(id)arg2 error:(out id*)arg3 ;
+(BOOL)validateSchemaIdentifier:(id)arg1 type:(long long)arg2 error:(out id*)arg3 ;
+(BOOL)validateSchemaType:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateIdentifiable:(id)arg1 error:(out id*)arg2 ;
+(BOOL)validateIdentifiable:(id)arg1 type:(long long)arg2 error:(out id*)arg3 ;
+(id)copyIdentifiableItem:(id)arg1 ;
+(long long)deserializeMediaTypeFromDictionary:(id)arg1 ;
+(BOOL)serializeMediaType:(long long)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
+(NSDictionary*)deserializeContentsFromDictionary:(id)arg1 error:(out id*)arg2 ;
+(id)makeJSValueForIdentifiableItem:(id)arg1 context:(id)arg2 error:(out id*)arg3 ;
+(id)deserializeSchemaFromArray:(id)arg1 error:(out id*)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg1 error:(out id*)arg2 ;
-(BOOL)deserializeIdentifierFromDictionary:(id)arg1 error:(out id*)arg2 ;
-(id)initWithIdentifier:(id)arg1 attributes:(id)arg2 ;
-(BOOL)serializeIdentifier:(id)arg1 intoDictionary:(id)arg2 error:(out id*)arg3 ;
-(NSArray*)schemaDependencies;
-(BOOL)validateIdentifier:(id)arg1 error:(out id*)arg2 ;
-(BOOL)isValid:(out id*)arg1 ;
-(NUIdentifier *)identifier;
-(id)description;
-(long long)type;
-(id)initWithAttributes:(id)arg1 ;
@end
