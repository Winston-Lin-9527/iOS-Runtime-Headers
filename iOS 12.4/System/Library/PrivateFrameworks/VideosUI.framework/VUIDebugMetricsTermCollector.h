/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIDebugMetricsTermCollector.h>
@class NSSet;


@protocol VUIDebugMetricsTermCollector <NSObject>
@property (nonatomic,readonly) NSSet * timingTerms; 
@property (nonatomic,readonly) NSSet * baseTerms; 
@property (nonatomic,readonly) NSSet * commonTerms; 
@required
-(NSSet *)baseTerms;
-(NSSet *)timingTerms;
-(NSSet *)commonTerms;

@end


@class NSSet, NSMutableSet, NSString;

@interface VUIDebugMetricsTermCollector : NSObject <VUIDebugMetricsTermCollector> {

	NSMutableSet* _mutableCommonTerms;
	NSMutableSet* _mutableTimingTerms;

}

@property (nonatomic,retain) NSMutableSet * mutableCommonTerms;              //@synthesize mutableCommonTerms=_mutableCommonTerms - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableTimingTerms;              //@synthesize mutableTimingTerms=_mutableTimingTerms - In the implementation block
@property (nonatomic,readonly) NSSet * whitelistedTerms; 
@property (nonatomic,readonly) NSSet * blacklistedTerms; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * timingTerms; 
@property (nonatomic,readonly) NSSet * baseTerms; 
@property (nonatomic,readonly) NSSet * commonTerms; 
-(id)init;
-(void)collectTermsFrom:(id)arg1 ;
-(void)populateCommonTermsFrom:(id)arg1 ;
-(NSMutableSet *)mutableCommonTerms;
-(NSSet *)blacklistedTerms;
-(NSSet *)baseTerms;
-(NSSet *)whitelistedTerms;
-(NSSet *)timingTerms;
-(NSSet *)commonTerms;
-(void)setMutableCommonTerms:(NSMutableSet *)arg1 ;
-(NSMutableSet *)mutableTimingTerms;
-(void)setMutableTimingTerms:(NSMutableSet *)arg1 ;
@end
