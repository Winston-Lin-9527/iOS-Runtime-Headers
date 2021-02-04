/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MechanismBase/MechanismBase-Structs.h>
#import <MechanismBase/MechanismBase.h>

@interface MechanismACM : MechanismBase {

	ACMHandleRef _acmContext;
	unsigned long long _acmFlags;

}

@property (nonatomic,readonly) ACMHandleRef acmContext;                  //@synthesize acmContext=_acmContext - In the implementation block
@property (nonatomic,readonly) unsigned long long acmFlags;              //@synthesize acmFlags=_acmFlags - In the implementation block
-(id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 acmContextRecord:(id)arg3 ;
-(ACMHandleRef)acmContext;
-(unsigned long long)acmFlags;
@end
