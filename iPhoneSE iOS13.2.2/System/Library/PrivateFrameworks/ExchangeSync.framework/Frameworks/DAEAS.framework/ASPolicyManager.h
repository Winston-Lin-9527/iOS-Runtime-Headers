/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASPolicyManagerDelegate;
@interface ASPolicyManager : NSObject {

	BOOL _updatingPolicy;
	id<ASPolicyManagerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL updatingPolicy;                                      //@synthesize updatingPolicy=_updatingPolicy - In the implementation block
@property (assign,nonatomic,__weak) id<ASPolicyManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ASPolicyManagerDelegate>)delegate;
-(void)setDelegate:(id<ASPolicyManagerDelegate>)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(id)currentPolicyKey;
-(void)requestPolicyUpdate;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(BOOL)updatingPolicy;
-(void)setUpdatingPolicy:(BOOL)arg1 ;
@end
