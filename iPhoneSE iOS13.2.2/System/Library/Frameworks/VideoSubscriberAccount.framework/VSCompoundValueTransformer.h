/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSValueTransformer.h>

@class NSArray;

@interface VSCompoundValueTransformer : NSValueTransformer {

	NSArray* _valueTransformers;

}

@property (nonatomic,copy) NSArray * valueTransformers;              //@synthesize valueTransformers=_valueTransformers - In the implementation block
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(id)reverseTransformedValue:(id)arg1 ;
-(void)setValueTransformers:(NSArray *)arg1 ;
-(NSArray *)valueTransformers;
@end
