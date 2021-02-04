/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CUStateEvent : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)exitState;
+(id)initialTransition;
+(id)enterState;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)dealloc;
-(NSDictionary *)userInfo;
-(NSString *)name;
-(id)description;
@end
