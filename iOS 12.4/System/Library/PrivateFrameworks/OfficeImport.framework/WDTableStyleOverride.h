/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WDDocument, WDStyle, WDParagraphProperties, WDCharacterProperties, WDTableRowProperties, WDTableCellProperties;

@interface WDTableStyleOverride : NSObject <NSCopying> {

	WDDocument* mDocument;
	WDStyle* mStyle;
	int mPart;
	WDParagraphProperties* mParagraphProperties;
	WDCharacterProperties* mCharacterProperties;
	WDTableRowProperties* mTableRowProperties;
	WDTableCellProperties* mTableCellStyleProperties;
	unsigned mParagraphPropertiesOverridden : 1;
	unsigned mCharacterPropertiesOverridden : 1;
	unsigned mTableRowPropertiesOverridden : 1;
	unsigned mTableCellStylePropertiesOverridden : 1;

}
-(id)paragraphProperties;
-(id)characterProperties;
-(BOOL)isCharacterPropertiesOverridden;
-(id)tableProperties;
-(id)tableRowProperties;
-(id)mutableCharacterProperties;
-(void)setPart:(int)arg1 ;
-(int)part;
-(BOOL)isParagraphPropertiesOverridden;
-(void)setParagraphPropertiesOverridden:(BOOL)arg1 ;
-(void)setCharacterPropertiesOverridden:(BOOL)arg1 ;
-(BOOL)isTablePropertiesOverridden;
-(void)setTableRowPropertiesOverridden:(BOOL)arg1 ;
-(id)tableCellStyleProperties;
-(BOOL)isTableCellStylePropertiesOverridden;
-(void)setTableCellStylePropertiesOverridden:(BOOL)arg1 ;
-(BOOL)isTableRowPropertiesOverridden;
-(id)mutableParagraphProperties;
-(id)mutableTableRowProperties;
-(id)mutableTableCellStyleProperties;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(id)initWithDocument:(id)arg1 ;
@end
