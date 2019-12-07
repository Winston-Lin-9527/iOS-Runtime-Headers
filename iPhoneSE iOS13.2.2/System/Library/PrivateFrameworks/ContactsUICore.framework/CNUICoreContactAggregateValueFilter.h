/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUICoreContactPropertyValueFilter.h>

@class NSArray, NSString;

@interface CNUICoreContactAggregateValueFilter : NSObject <CNUICoreContactPropertyValueFilter> {

	NSArray* _valueFilters;

}

@property (nonatomic,readonly) NSArray * valueFilters;              //@synthesize valueFilters=_valueFilters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)initWithValueFilters:(id)arg1 ;
-(void)filterPropertyValuesFromContact:(id)arg1 ;
-(NSArray *)valueFilters;
-(id)contactByFilteringOutPropertyValueOfContact:(id)arg1 ;
@end
