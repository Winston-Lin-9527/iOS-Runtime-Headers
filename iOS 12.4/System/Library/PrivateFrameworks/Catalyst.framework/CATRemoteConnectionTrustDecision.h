/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Catalyst/Catalyst-Structs.h>
@class CATRemoteConnection;

@interface CATRemoteConnectionTrustDecision : NSObject {

	CATRemoteConnection* mConnection;
	AB mHasResponded;
	id _trust;

}

@property (readonly) id trust;              //@synthesize trust=_trust - In the implementation block
-(id)trust;
-(id)initWithConnection:(id)arg1 trust:(SecTrustRef)arg2 ;
-(void)respondWithDecisionToAllowUntrustedConnection:(BOOL)arg1 ;
-(void)dealloc;
@end
