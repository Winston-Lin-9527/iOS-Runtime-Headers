/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MSMessageComposeExtensionImplProtocol;
@interface _MSExtensionGlobalState : NSObject {

	id<_MSMessageComposeExtensionImplProtocol> _activeExtensionContext;

}

@property (nonatomic,retain) id<_MSMessageComposeExtensionImplProtocol> activeExtensionContext;              //@synthesize activeExtensionContext=_activeExtensionContext - In the implementation block
+(id)sharedInstance;
-(void)setActiveExtensionContext:(id<_MSMessageComposeExtensionImplProtocol>)arg1 ;
-(id<_MSMessageComposeExtensionImplProtocol>)activeExtensionContext;
@end
