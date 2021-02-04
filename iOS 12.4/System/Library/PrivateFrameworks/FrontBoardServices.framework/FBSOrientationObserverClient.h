/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSServiceFacilityClient.h>

@protocol FBSOrientationObserverClientDelegate;
@interface FBSOrientationObserverClient : FBSServiceFacilityClient {

	id<FBSOrientationObserverClientDelegate> _delegate;
	unsigned _interest;

}
-(void)handleMessage:(id)arg1 withType:(long long)arg2 ;
-(id)initWithDelegate:(id)arg1 calloutQueue:(id)arg2 ;
-(void)registerOrientationInterest:(unsigned)arg1 ;
-(void)_getActiveInterfaceOrientationSynchronously:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)configureConnectMessage:(id)arg1 ;
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidate;
-(long long)activeInterfaceOrientation;
@end
