/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BYChronicleEntry : NSObject {

	NSString* _productVersion;

}

@property (nonatomic,retain) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
-(id)initWithProductVersion:(id)arg1 ;
-(BOOL)isEqualToEntry:(id)arg1 ;
-(BOOL)createdOnCurrentMajorVersion;
@end
