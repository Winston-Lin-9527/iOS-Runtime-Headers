/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKIPAddressProviding.h>

@protocol CRKIPAddressProviding, OS_dispatch_queue;
@class NSObject, NSString;

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject <CRKIPAddressProviding> {

	id<CRKIPAddressProviding> mBaseProvider;
	NSObject*<OS_dispatch_queue> mQueue;
	int mNetworkChangeNotificationToken;
	NSString* _IPAddress;

}

@property (nonatomic,copy) NSString * IPAddress;                    //@synthesize IPAddress=_IPAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)IPAddress;
-(id)initWithIPAddressProvider:(id)arg1 ;
-(void)unsubscribeFromNetworkChangeNotifications;
-(void)subscribeToNetworkChangeNotifications;
-(void)networkDidChange;
-(void)networkDidChangeDebounced;
-(void)setIPAddress:(NSString *)arg1 ;
-(void)dealloc;
@end
