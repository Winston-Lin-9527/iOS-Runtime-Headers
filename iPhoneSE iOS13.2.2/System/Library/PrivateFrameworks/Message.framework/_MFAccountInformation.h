/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MailAccount, DeliveryAccount, NSDictionary;

@interface _MFAccountInformation : NSObject {

	MailAccount* _account;
	DeliveryAccount* _deliveryAccount;
	NSDictionary* _localizedNotes;

}

@property (nonatomic,retain) MailAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) DeliveryAccount * deliveryAccount;              //@synthesize deliveryAccount=_deliveryAccount - In the implementation block
@property (nonatomic,retain) NSDictionary * localizedNotes;                  //@synthesize localizedNotes=_localizedNotes - In the implementation block
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(DeliveryAccount *)deliveryAccount;
-(void)setDeliveryAccount:(DeliveryAccount *)arg1 ;
-(NSDictionary *)localizedNotes;
-(void)setLocalizedNotes:(NSDictionary *)arg1 ;
@end
