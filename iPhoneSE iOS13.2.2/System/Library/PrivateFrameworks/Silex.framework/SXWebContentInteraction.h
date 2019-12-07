/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXWebContentInteraction.h>

@protocol SXWebContentInteraction <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@required
-(unsigned long long)type;
-(void)perform;

@end


@class NSString;

@interface SXWebContentInteraction : NSObject <SXWebContentInteraction> {

	unsigned long long _type;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(void)perform;
@end
