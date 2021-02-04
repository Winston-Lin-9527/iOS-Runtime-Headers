/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccountUI/AppleAccountUI-Structs.h>
@class NSArray, NSDictionary;

@interface _AAUIDataclassOptionCache : NSObject {

	NSDictionary* _dataclassOptions;
	NSArray* _filteredDataclasses;

}

@property (nonatomic,copy) NSDictionary * dataclassOptions;              //@synthesize dataclassOptions=_dataclassOptions - In the implementation block
@property (nonatomic,copy) NSArray * filteredDataclasses;                //@synthesize filteredDataclasses=_filteredDataclasses - In the implementation block
-(id)initWithDataclassOptions:(NSDictionary*)arg1 ;
-(void)setDataclassOptions:(NSDictionary *)arg1 ;
-(NSArray *)filteredDataclasses;
-(NSDictionary *)dataclassOptions;
-(void)setFilteredDataclasses:(NSArray *)arg1 ;
@end
