/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HLPHelpLocale : NSObject {

	NSString* _path;
	NSArray* _isoCodes;

}

@property (nonatomic,copy) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSArray * isoCodes;              //@synthesize isoCodes=_isoCodes - In the implementation block
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSArray *)isoCodes;
-(void)setIsoCodes:(NSArray *)arg1 ;
@end
