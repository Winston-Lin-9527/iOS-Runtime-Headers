/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUIncomingInvitationResponseControllerDelegate;
@class HMIncomingHomeInvitation, NSError;

@interface HUIncomingInvitationResponseController : NSObject {

	id<HUIncomingInvitationResponseControllerDelegate> _delegate;
	HMIncomingHomeInvitation* _invitation;
	unsigned long long _state;
	unsigned long long _response;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,__weak,readonly) id<HUIncomingInvitationResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMIncomingHomeInvitation * invitation;                                           //@synthesize invitation=_invitation - In the implementation block
-(void)setResponse:(unsigned long long)arg1 ;
-(HMIncomingHomeInvitation *)invitation;
-(id)initWithDelegate:(id)arg1 invitation:(id)arg2 ;
-(id)_acceptInvitation;
-(id)_declineInvitation;
-(void)respondToInvitationWithResponse:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)state;
-(id<HUIncomingInvitationResponseControllerDelegate>)delegate;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)response;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
