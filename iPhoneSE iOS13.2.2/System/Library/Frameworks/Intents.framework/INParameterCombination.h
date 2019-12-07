/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/INCodableCoding.h>

@class INCodableLocalizationTable, NSString;

@interface INParameterCombination : NSObject <NSSecureCoding, INCodableCoding> {

	BOOL _primary;
	BOOL _supportsBackgroundExecution;
	INCodableLocalizationTable* _localizationTable;
	NSString* _titleFormatString;
	NSString* _titleFormatStringLocID;
	NSString* _subtitleFormatString;
	NSString* _subtitleFormatStringLocID;

}

@property (setter=_setLocalizationTable:,nonatomic,copy) INCodableLocalizationTable * _localizationTable;              //@synthesize localizationTable=_localizationTable - In the implementation block
@property (assign,getter=isPrimary,nonatomic) BOOL primary;                                                            //@synthesize primary=_primary - In the implementation block
@property (assign,nonatomic) BOOL supportsBackgroundExecution;                                                         //@synthesize supportsBackgroundExecution=_supportsBackgroundExecution - In the implementation block
@property (nonatomic,copy) NSString * titleFormatString;                                                               //@synthesize titleFormatString=_titleFormatString - In the implementation block
@property (nonatomic,copy) NSString * titleFormatStringLocID;                                                          //@synthesize titleFormatStringLocID=_titleFormatStringLocID - In the implementation block
@property (nonatomic,copy) NSString * subtitleFormatString;                                                            //@synthesize subtitleFormatString=_subtitleFormatString - In the implementation block
@property (nonatomic,copy) NSString * subtitleFormatStringLocID;                                                       //@synthesize subtitleFormatStringLocID=_subtitleFormatStringLocID - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitleFormatString; 
@property (nonatomic,copy,readonly) NSString * localizedSubtitleFormatString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * cacheGroup; 
@property (nonatomic,copy,readonly) NSString * keyPrefix; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)_dictionaryRepresentation;
-(INCodableLocalizationTable *)_localizationTable;
-(BOOL)isPrimary;
-(NSString *)cacheGroup;
-(NSString *)keyPrefix;
-(id)dictionaryKeyForKeyPath:(id)arg1 ;
-(void)updateWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentationForLanguage:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(void)_setLocalizationTable:(id)arg1 ;
-(NSString *)localizedTitleFormatString;
-(id)localizedTitleFormatStringForLanguage:(id)arg1 ;
-(NSString *)localizedSubtitleFormatString;
-(id)localizedSubtitleFormatStringForLanguage:(id)arg1 ;
-(void)setPrimary:(BOOL)arg1 ;
-(BOOL)supportsBackgroundExecution;
-(void)setSupportsBackgroundExecution:(BOOL)arg1 ;
-(NSString *)titleFormatString;
-(void)setTitleFormatString:(NSString *)arg1 ;
-(NSString *)titleFormatStringLocID;
-(void)setTitleFormatStringLocID:(NSString *)arg1 ;
-(NSString *)subtitleFormatString;
-(void)setSubtitleFormatString:(NSString *)arg1 ;
-(NSString *)subtitleFormatStringLocID;
-(void)setSubtitleFormatStringLocID:(NSString *)arg1 ;
@end
