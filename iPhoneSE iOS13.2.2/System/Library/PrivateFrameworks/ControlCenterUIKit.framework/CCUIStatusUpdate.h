/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CCUIStatusUpdate : NSObject {

	NSString* _message;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) NSString * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)statusUpdateWithMessage:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(NSString *)message;
-(id)_initWithMessage:(id)arg1 type:(unsigned long long)arg2 ;
@end
