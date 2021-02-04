/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDAuthListener.h>
#import <libobjc.A.dylib/CDPDCircleListener.h>

@protocol CDPDCircleProxy;
@class NSString;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener> {

	id<CDPDCircleProxy> _circleProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPrimaryAccountHSA2;
-(BOOL)_checkSecurityEligibility:(id*)arg1 ;
-(void)reportManateeAvailable;
-(void)reportManateeUnavailable;
-(void)_sendNotification:(const char*)arg1 withValue:(unsigned long long)arg2 ;
-(id)initWithCircleProxy:(id)arg1 ;
-(void)circleViewStatusChanged;
-(void)circleStatusChanged;
-(void)securityLevelChanged:(BOOL)arg1 ;
-(BOOL)isManateeAvailable:(id*)arg1 ;
@end
