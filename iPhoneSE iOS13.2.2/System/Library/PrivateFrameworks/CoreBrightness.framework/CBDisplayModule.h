/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBrightness/CBModule.h>
#import <libobjc.A.dylib/CBContainerModuleProtocol.h>
#import <libobjc.A.dylib/CBStatusInfoProtocol.h>

@class NSString;

@interface CBDisplayModule : CBModule <CBContainerModuleProtocol, CBStatusInfoProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)stop;
-(void)start;
-(id)copyPropertyForKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2 ;
-(void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 ;
-(id)copyPropertyInternalForKey:(id)arg1 ;
-(id)copyIdentifiers;
@end
