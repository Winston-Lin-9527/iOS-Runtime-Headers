/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFRegistrationContainer.h>

@class NFContainer, NSString;

@interface NFProxyContainer : NSObject <NFRegistrationContainer> {

	NFContainer* _container;
	NFContainer* _privateContainer;

}

@property (nonatomic,retain) NFContainer * container;                     //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NFContainer * privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainer:(id)arg1 privateContainer:(id)arg2 ;
-(id)unsafeRegisterForKey:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)registerClass:(Class)arg1 factory:(/*^block*/id)arg2 ;
-(NFContainer *)privateContainer;
-(id)registerProtocol:(id)arg1 factory:(/*^block*/id)arg2 ;
-(id)registerProtocol:(id)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(id)registerClass:(Class)arg1 name:(id)arg2 factory:(/*^block*/id)arg3 ;
-(void)setPrivateContainer:(NFContainer *)arg1 ;
-(NFContainer *)container;
-(void)setContainer:(NFContainer *)arg1 ;
@end
