/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFServiceItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider {

	HMUser* _user;

}

@property (nonatomic,readonly) HMUser * user;              //@synthesize user=_user - In the implementation block
-(id)invalidationReasons;
-(id)initWithHome:(id)arg1 user:(id)arg2 ;
-(id)initWithHome:(id)arg1 serviceTypes:(id)arg2 ;
-(HMUser *)user;
-(id)copyWithZone:(NSZone*)arg1 ;
-(/*^block*/id)filter;
@end
