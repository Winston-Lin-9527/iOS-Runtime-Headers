/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTPlaceTypeProvider.h>

@class RTLearnedLocationStore, NSString;

@interface RTPlaceTypeClassifierExpertInferred : NSObject <RTPlaceTypeProvider> {

	RTLearnedLocationStore* _learnedLocationStore;

}

@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;              //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTLearnedLocationStore *)learnedLocationStore;
-(id)classifyWithError:(id*)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
-(id)initWithLearnedLocationStore:(id)arg1 ;
@end
