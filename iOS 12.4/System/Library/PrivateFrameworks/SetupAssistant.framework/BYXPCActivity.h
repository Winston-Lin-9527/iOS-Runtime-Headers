/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BYXPCActivity : NSObject {

	NSObject*<OS_xpc_object> _xpcActivity;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;              //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) NSObject*<OS_xpc_object> criteria; 
+(id)activityWithXPCActivity:(id)arg1 ;
-(NSObject*<OS_xpc_object>)criteria;
-(void)setCriteria:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(long long)state;
-(BOOL)setState:(long long)arg1 ;
@end
