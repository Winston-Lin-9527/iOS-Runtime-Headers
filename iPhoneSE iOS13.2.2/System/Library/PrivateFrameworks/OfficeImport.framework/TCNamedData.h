/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface TCNamedData : NSObject {

	NSData* mData;
	NSString* mName;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
+(id)namedDataWithData:(id)arg1 named:(id)arg2 ;
-(NSString *)name;
-(NSData *)data;
-(id)initWithData:(id)arg1 named:(id)arg2 ;
@end
