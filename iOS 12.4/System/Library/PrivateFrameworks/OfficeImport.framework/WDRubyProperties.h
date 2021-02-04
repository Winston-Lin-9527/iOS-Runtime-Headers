/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WDRubyProperties : NSObject {

	unsigned mOriginal : 1;
	SCD_Struct_WD127* mOriginalProperties;

}

@property (assign,nonatomic) int alignment; 
@property (assign,nonatomic) unsigned short phoneticGuideFontSize; 
@property (assign,nonatomic) unsigned short baseFontSize; 
@property (assign,nonatomic) unsigned short distanceBetween; 
@property (assign,nonatomic) int phoneticGuideLanguage; 
-(unsigned short)baseFontSize;
-(BOOL)isAlignmentOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isAnythingOverriddenIn:(SCD_Struct_WD127*)arg1 ;
-(void)clearAlignment;
-(unsigned short)phoneticGuideFontSize;
-(void)setPhoneticGuideFontSize:(unsigned short)arg1 ;
-(BOOL)isPhoneticGuideFontSizeOverridden;
-(void)clearPhoneticGuideFontSize;
-(void)setBaseFontSize:(unsigned short)arg1 ;
-(BOOL)isBaseFontSizeOverridden;
-(void)clearBaseFontSize;
-(unsigned short)distanceBetween;
-(void)setDistanceBetween:(unsigned short)arg1 ;
-(BOOL)isDistanceBetweenOverridden;
-(void)clearDistanceBetween;
-(int)phoneticGuideLanguage;
-(void)setPhoneticGuideLanguage:(int)arg1 ;
-(BOOL)isPhoneticGuideLanguageOverridden;
-(void)clearPhoneticGuideLanguage;
-(int)alignment;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setAlignment:(int)arg1 ;
@end
