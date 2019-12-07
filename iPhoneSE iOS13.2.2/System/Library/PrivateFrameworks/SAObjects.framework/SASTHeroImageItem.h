/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SADecoratedString, NSString, SAUINanoImageResource;

@interface SASTHeroImageItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SADecoratedString * caption; 
@property (nonatomic,copy) NSString * position; 
@property (nonatomic,retain) SAUINanoImageResource * watchImageResource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)heroImageItem;
+(id)heroImageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)position;
-(void)setPosition:(NSString *)arg1 ;
-(SADecoratedString *)caption;
-(void)setCaption:(SADecoratedString *)arg1 ;
-(id)encodedClassName;
-(SAUINanoImageResource *)watchImageResource;
-(void)setWatchImageResource:(SAUINanoImageResource *)arg1 ;
@end
