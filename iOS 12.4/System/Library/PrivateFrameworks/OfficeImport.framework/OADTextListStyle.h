/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface OADTextListStyle : NSObject {

	NSMutableArray* mParagraphProperties;
	NSString* mLanguage;

}

@property (nonatomic,retain) NSString * language; 
+(id)defaultObject;
-(id)propertiesForListLevel:(unsigned long long)arg1 ;
-(id)defaultProperties;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)overrideWithTextStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flatten;
-(void)setPropertiesForListLevel:(unsigned long long)arg1 properties:(id)arg2 ;
-(void)enumerateParagraphPropertiesUsingBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
