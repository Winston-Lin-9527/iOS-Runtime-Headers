/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface CLSPublicEventCategory : NSObject <NSSecureCoding> {

	NSString* _category;
	NSString* _localizedName;
	NSArray* _localizedSubcategories;

}

@property (nonatomic,retain) NSString * localizedName;                      //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSArray * localizedSubcategories;              //@synthesize localizedSubcategories=_localizedSubcategories - In the implementation block
@property (nonatomic,readonly) NSString * category;                         //@synthesize category=_category - In the implementation block
+(id)theater;
+(id)community;
+(id)educational;
+(id)familyEvents;
+(id)tours;
+(id)nightLife;
+(id)musicConcerts;
+(id)sports;
+(id)dance;
+(id)festivalsAndFairs;
+(id)artsAndMuseums;
+(id)businessAndTechnology;
+(BOOL)supportsSecureCoding;
-(void)setLocalizedName:(NSString *)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(void)setLocalizedSubcategories:(NSArray *)arg1 ;
-(NSArray *)localizedSubcategories;
-(unsigned long long)levelForLocalizedSubcategory:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedName;
-(NSString *)category;
@end
