/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryCallToAction;

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf {

	PKDiscoveryCallToAction* _callToAction;

}

@property (nonatomic,readonly) PKDiscoveryCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)localizeWithBundle:(id)arg1 ;
-(PKDiscoveryCallToAction *)callToAction;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end
